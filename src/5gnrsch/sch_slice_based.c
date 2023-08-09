/*******************************************************************************
################################################################################
#   Copyright (c) [2017-2019] [Radisys]                                        #
#                                                                              #
#   Licensed under the Apache License, Version 2.0 (the "License");            #
#   you may not use this file except in compliance with the License.           #
#   You may obtain a copy of the License at                                    #
#                                                                              #
#       http://www.apache.org/licenses/LICENSE-2.0                             #
#                                                                              #
#   Unless required by applicable law or agreed to in writing, software        #
#   distributed under the License is distributed on an "AS IS" BASIS,          #
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   #
#   See the License for the specific language governing permissions and        #
#   limitations under the License.                                             #
################################################################################
 *******************************************************************************/

/************************************************************************

Name:     5G NR SCH layer

Type:     C source file

Desc:     C source code for Slice based scheduling algorithm

File:     sch_slice_based.c

 **********************************************************************/

/** @file sch_slot_ind.c
  @brief This module processes slot indications
 */
#include "time.h"
#include "pthread.h"
#include "common_def.h"
#include "tfu.h"
#include "lrg.h"
#include "tfu.x"
#include "lrg.x"
#include "du_log.h"
#include "du_app_mac_inf.h"
#include "mac_sch_interface.h"
#include "sch.h"
#include "sch_utils.h"
#include "sch_slice_based.h"

#ifdef NR_DRX 
#include "sch_drx.h"
#endif

/*******************************************************************
 *
 * @brief Function to handle Cell configuration request
 *
 * @details
 *
 *    Function : schSliceBasedCellCfgReq
 *
 *    Functionality: This function configures cell paremeters
 *       required for Slice Based scheduling
 *
 * @params[in] SchCellCb *cellCb, Cell control block
 * @return ROK
 *         RFAILED
 *
 * ****************************************************************/
uint8_t schSliceBasedCellCfgReq(SchCellCb *cellCb)
{
   SchSliceBasedCellCb *schSpcCellCb = NULLP;
   
   SCH_ALLOC(schSpcCellCb, sizeof(SchSliceBasedCellCb));
   if(!schSpcCellCb)
   {
      DU_LOG("\nERROR  -->  SCH: Memory allocation failed in schSliceBasedCellCfgReq");
      return RFAILED;
   }
   cmLListInit(&schSpcCellCb->ueToBeScheduled);
   cmLListInit(&schSpcCellCb->sliceCbList);
   cellCb->schSpcCell = (void *)schSpcCellCb;

   schSpcCellCb->timer_sec = 0;
   schSpcCellCb->slot_ind_count = 0;
   schSpcCellCb->isTimerStart = false;
   return ROK;
}

/*******************************************************************
 *
 * @brief Function to handle Cell configuration request
 *
 * @details
 *
 *    Function : schSliceBasedCellDelReq
 *
 *    Functionality: This function deletes/frees cell params
 *       specific to Slice Based scheduling
 *
 * @params[in] Pointer to Cell control block
 * @return void
 *
 * ****************************************************************/
void schSliceBasedCellDelReq(SchCellCb *cellCb)
{
   SchSliceBasedCellCb *schSpcCellCb = NULLP;
   CmLList *node=NULL, *next=NULL;

   schSpcCellCb = (SchSliceBasedCellCb *)cellCb->schSpcCell;
   /* Remove all UE from ueToBeScheduled list and deallocate */
   // node = schSpcCellCb->ueToBeScheduled.first;
   // while(node)
   // {
   //    next = node->next;
   //    SCH_FREE(node->node, sizeof(uint8_t));
   //    cmLListDelFrm(&schSpcCellCb->ueToBeScheduled, node);
   //    SCH_FREE(node, sizeof(CmLList));
   //    node = next;
   // }
   cmLListDeleteLList(&schSpcCellCb->ueToBeScheduled);
   cmLListDeleteLList(&schSpcCellCb->sliceCbList);
   SCH_FREE(schSpcCellCb, sizeof(SchSliceBasedCellCb));
   cellCb->schSpcCell = NULLP;
}

/*******************************************************************
 *
 * @brief Function to handle UE configuration request
 *
 * @details
 *
 *    Function : SchSliceBasedAddUeConfigReq
 *
 *    Functionality: Adds/Configures UE parameters required for
 *       Slice Based scheduling
 *
 * @params[in] Pointer to UE control block
 * @return ROK
 *         RFAILED
 *
 * ****************************************************************/
uint8_t SchSliceBasedAddUeConfigReq(SchUeCb *ueCb)
{
   SchSliceBasedUeCb *ueSliceBasedCb;
   SchSliceBasedCellCb *schSpcCell;
   float_t random;

   schSpcCell = (SchSliceBasedCellCb *)ueCb->cellCb->schSpcCell;

   SCH_ALLOC(ueSliceBasedCb, sizeof(SchSliceBasedHqCb));
   if(!ueSliceBasedCb)
   {
      DU_LOG("\nERROR  -->  SCH: Memory allocation failed in SchSliceBasedAddUeConfigReq");
      return RFAILED;
   }
   
   cmLListInit(&ueSliceBasedCb->hqRetxCb.ulRetxHqList);
   cmLListInit(&ueSliceBasedCb->hqRetxCb.dlRetxHqList);
   ueSliceBasedCb->isTxPayloadLenAdded = FALSE;

   /* Hard-coded the weight of each UE */
   random = ((rand() % 10) + 1) * 0.1;
   ueSliceBasedCb->weight = random;

   ueCb->schSpcUeCb = (void *)ueSliceBasedCb;
   
   schSliceBasedFillLcInfoToSliceCb(&schSpcCell->sliceCbList, ueCb);
   return ROK;
}

/*******************************************************************
 *
 * @brief Handles UE reconfiguration request
 *
 * @details
 *
 *    Function : SchSliceBasedModUeConfigReq
 *
 *    Functionality: 
 *
 * @params[in] Pointer to UE control block
 * @return void
 *
 * ****************************************************************/
void SchSliceBasedModUeConfigReq(SchUeCb *ueCb)
{
   SchSliceBasedCellCb *schSpcCell;
   schSpcCell = (SchSliceBasedCellCb *)ueCb->cellCb->schSpcCell;

   schSliceBasedFillLcInfoToSliceCb(&schSpcCell->sliceCbList, ueCb);
   return;
}

/*******************************************************************
 *
 * @brief Handles Slice configuration request
 *
 * @details
 *
 *    Function : SchSliceBasedSliceCfgReq
 *
 *    Functionality: Calculate the available PRB quotas for each slice when receiving Slice Configuration Request from MAC
 *
 * @params[in] Pointer to Cell control block
 * @return void
 *
 * ****************************************************************/
void SchSliceBasedSliceCfgReq(SchCellCb *cellCb)
{
   CmLList *sliceCfg = NULLP;
   CmLListCp *storedSliceCfg;
   SchSliceBasedCellCb  *schSpcCell;
   SchSliceBasedSliceCb *sliceCbToStore;
   SchRrmPolicyOfSlice *rrmPolicyNode;
   uint8_t tempAlgoSelection = 0;
   uint8_t threadCounter = 0;
   uint8_t threadRes;
   schSpcCell = (SchSliceBasedCellCb *)cellCb->schSpcCell;
   storedSliceCfg = &schCb[cellCb->instIdx].sliceCfg;
   sliceCfg = storedSliceCfg->first;
   
   SchSliceBasedDlThreadArg *threadArg[schSpcCell->sliceCbList.count];
   pthread_t intraSliceThread[schSpcCell->sliceCbList.count];

   while(sliceCfg)
   {
      rrmPolicyNode = (SchRrmPolicyOfSlice *)sliceCfg->node;

      SCH_ALLOC(sliceCbToStore, sizeof(SchSliceBasedSliceCb));
      if(sliceCbToStore)
      {
         memcpy(&sliceCbToStore->snssai, &rrmPolicyNode->snssai, sizeof(Snssai));
         memcpy(&sliceCbToStore->rrmPolicyRatioInfo, &rrmPolicyNode->rrmPolicyRatioInfo, sizeof(SchRrmPolicyRatio));

         if(tempAlgoSelection < 1)
         {
            sliceCbToStore->algorithm = RR;
            sliceCbToStore->algoMethod = FLAT;
         }
         else
         {
            sliceCbToStore->algorithm = RR;
            sliceCbToStore->algoMethod = FLAT;
         }
         addNodeToLList(&schSpcCell->sliceCbList, sliceCbToStore, NULL);

         tempAlgoSelection++;

#ifdef SCH_MULTI_THREAD
         /* Create thread in initialization */
         SCH_ALLOC(schSpcCell->threadArg[threadCounter], sizeof(SchSliceBasedDlThreadArg));
         SCH_ALLOC(schSpcCell->threadArg[threadCounter]->triggerFlag, sizeof(uint8_t));
         *schSpcCell->threadArg[threadCounter]->triggerFlag = 0;
         threadRes = pthread_create(&schSpcCell->intraSliceThread[threadCounter], NULL, schSliceBasedDlIntraSliceThreadScheduling, \
                                    (void *)schSpcCell->threadArg[threadCounter]);
         
         if(threadRes != 0)
         {
            DU_LOG("\nERROR  -->  SCH : Thread Creation failed for intra-slice scheduling");
            return false;
         }

         threadCounter++;
#endif
      }
      else
      {
         DU_LOG("\nERROR  -->  SCH : Memory allocation failed in SchSliceBasedSliceCfgReq");
         return;
      }

      DU_LOG("\nDennis --> SCH: Process Slice Config Request: SST:%d, SD:[%d, %d, %d] RRMMaxRatio:%d, RRMMinRatio:%d, RRMDedicatedRatio:%d",\
            rrmPolicyNode->snssai.sst, rrmPolicyNode->snssai.sd[0], rrmPolicyNode->snssai.sd[1], \
            rrmPolicyNode->snssai.sd[2], rrmPolicyNode->rrmPolicyRatioInfo.maxRatio, \
            rrmPolicyNode->rrmPolicyRatioInfo.minRatio, rrmPolicyNode->rrmPolicyRatioInfo.dedicatedRatio);
      // DU_LOG("\nDennis --> SCH: Calculate PRB quota: Total PRB of Bandwidth:%d, Shared PRB Quota:%d, Prioritized PRB Quota:%d, Dedicated PRB Quota:%d",\
      // MAX_NUM_RB, sliceCbToStore->sharedPrb, sliceCbToStore->prioritizedPrb, sliceCbToStore->dedicatedPrb);

      sliceCfg = sliceCfg->next;
   }

   /* Print the sliceCbLL for debugging */
   // node = schSpcCell->sliceCbList.first;
   // while(node)
   // {
   //    sliceCbToStore = (SchSliceBasedSliceCb *)node->node;
   //    DU_LOG("\nDennis --> SST:%d, SD:%d, Shared PRB Quota:%d, Prioritized PRB Quota:%d, Dedicated PRB Quota:%d",\
   //    sliceCbToStore->snssai.sst, rrmPolicyNode->snssai.sd[0], sliceCbToStore->sharedPrb,\
   //    sliceCbToStore->prioritizedPrb, sliceCbToStore->dedicatedPrb);

   //    node = node->next;
   // }
   return;
}

/*******************************************************************
 *
 * @brief Handles Slice Reconfiguration request
 *
 * @details
 *
 *    Function : SchSliceBasedSliceRecfgReq
 *
 *    Functionality: Calculate the available PRB quotas for each slice when receiving Slice Reconfiguration Request from MAC
 *
 * @params[in] Pointer to Cell control block
 * @return void
 *
 * ****************************************************************/
void SchSliceBasedSliceRecfgReq(SchCellCb *cellCb)
{
   CmLList *sliceCfg = NULLP;
   CmLList *node = NULLP;
   CmLListCp *storedSliceCfg;
   SchSliceBasedCellCb  *schSpcCell;
   SchSliceBasedSliceCb *sliceCbNode;
   SchRrmPolicyOfSlice *rrmPolicyNode;

   schSpcCell = (SchSliceBasedCellCb *)cellCb->schSpcCell;
   storedSliceCfg = &schCb[cellCb->instIdx].sliceCfg;
   sliceCfg = storedSliceCfg->first;
   node = schSpcCell->sliceCbList.first;
   
   while(sliceCfg)
   {
      rrmPolicyNode = (SchRrmPolicyOfSlice *)sliceCfg->node;

      while(node)
      {
         sliceCbNode = (SchSliceBasedSliceCb *)node->node;

         if(memcmp(&rrmPolicyNode->snssai, &sliceCbNode->snssai, sizeof(Snssai)) == 0)
         {
            memcpy(&sliceCbNode->rrmPolicyRatioInfo, &rrmPolicyNode->rrmPolicyRatioInfo, sizeof(SchRrmPolicyRatio));
            DU_LOG("\nDennis --> SCH: Process Slice Config Request: SST:%d, SD:[%d, %d, %d] RRMMaxRatio:%d, RRMMinRatio:%d, RRMDedicatedRatio:%d",\
            rrmPolicyNode->snssai.sst, rrmPolicyNode->snssai.sd[0], rrmPolicyNode->snssai.sd[1], \
            rrmPolicyNode->snssai.sd[2], rrmPolicyNode->rrmPolicyRatioInfo.maxRatio, \
            rrmPolicyNode->rrmPolicyRatioInfo.minRatio, rrmPolicyNode->rrmPolicyRatioInfo.dedicatedRatio);
            
            // DU_LOG("\nDennis --> SCH: Calculate PRB quota: Total PRB of Bandwidth:%d, Shared PRB Quota:%d, Prioritized PRB Quota:%d, Dedicated PRB Quota:%d",\
            // MAX_NUM_RB, sliceCbNode->sharedPrb, sliceCbNode->prioritizedPrb, sliceCbNode->dedicatedPrb);
            
            break;
         }

         node = node->next;
      }

      sliceCfg = sliceCfg->next;
   }
   return;
}

/*******************************************************************
 *
 * @brief Handles UE Delete Request
 *
 * @details
 *
 *    Function : SchSliceBasedUeDeleteReq 
 *
 *    Functionality: Deletes/Frees UE parameters specific to 
 *       Slice Based scheduling
 *
 * @params[in] Pointer to UE control block
 * @return void
 *
 * ****************************************************************/
void SchSliceBasedUeDeleteReq(SchUeCb *ueCb)
{
   SchSliceBasedCellCb *schSpcCellCb = NULLP;
   SchSliceBasedUeCb *ueSliceBasedCb = NULLP;
   CmLList *node=NULL, *next=NULL;
   uint8_t ueId = 0;

   schSpcCellCb = (SchSliceBasedCellCb *)ueCb->cellCb->schSpcCell;
   /* Remove all UE from ueToBeScheduled list and deallocate */
   node = schSpcCellCb->ueToBeScheduled.first;
   while(node)
   {
      next = node->next;
      ueId = *(uint8_t *)node->node;
      if(ueId == ueCb->ueId)
      {
        SCH_FREE(node->node, sizeof(uint8_t));
        cmLListDelFrm(&schSpcCellCb->ueToBeScheduled, node);
        SCH_FREE(node, sizeof(CmLList));
        break;
      }
      node = next;
   }
   
   ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;
   cmLListDeleteLList(&ueSliceBasedCb->hqRetxCb.ulRetxHqList);
   cmLListDeleteLList(&ueSliceBasedCb->hqRetxCb.dlRetxHqList);

   SCH_FREE(ueSliceBasedCb, sizeof(SchSliceBasedUeCb));
   ueCb->schSpcUeCb = NULLP;
   return;
}

/*******************************************************************
 *
 * @brief Intializes HARQ Process control block
 *
 * @details
 *
 *    Function : schSliceBasedInitDlHqProcCb
 *
 *    Functionality: Intitialized parameters of HARQ process control
 *       block specific to Slice Based scheduling in Downlink
 *
 * @params[in] Pointer to Downlink HARQ Process control block
 * @return ROK
 *         RFAILED
 *
 * ****************************************************************/
uint8_t schSliceBasedInitDlHqProcCb(SchDlHqProcCb *hqP)
{
   SchSliceBasedHqProcCb *schSpcHqP;

   SCH_ALLOC(schSpcHqP, sizeof(SchSliceBasedHqProcCb));
   if(!schSpcHqP)
   {
      DU_LOG("\nERROR  -->  SCH: Memory allocation failed in schSliceBasedInitDlHqProcCb");
      return RFAILED;
   }

   cmLListInit(&schSpcHqP->lcCb.dedLcList);
   cmLListInit(&schSpcHqP->lcCb.defLcList);
   hqP->schSpcDlHqProcCb = (void *)schSpcHqP;

   return ROK;
}

/*******************************************************************
 *
 * @brief Handles HARQ Process delete request
 *
 * @details 
 *
 *    Function : schSliceBasedDeleteDlHqProcCb
 *
 *    Functionality: Deletes HARQ Process parameters specific to 
 *       Slice Based scheduling in Downlink
 *
 * @params[in] Pointer to Downlink HARQ Process control block
 * @return void
 *
 * ****************************************************************/
void schSliceBasedDeleteDlHqProcCb(SchDlHqProcCb *hqP)
{
   SchSliceBasedHqProcCb *schSpcHqP = (SchSliceBasedHqProcCb *)hqP->schSpcDlHqProcCb;
   cmLListDeleteLList(&schSpcHqP->lcCb.dedLcList);
   cmLListDeleteLList(&schSpcHqP->lcCb.defLcList);
   SCH_FREE(schSpcHqP, sizeof(SchSliceBasedHqProcCb));
   hqP->schSpcDlHqProcCb = NULLP;
}

/*******************************************************************
 *
 * @brief Intializes HARQ Process control block
 *
 * @details
 *
 *    Function : schSliceBasedInitUlHqProcCb
 *
 *    Functionality: Intitialized parameters of HARQ process control
 *       block specific to Slice Based scheduling in Uplink
 *
 * @params[in] Pointer to Uplink HARQ Process control block
 * @return ROK
 *         RFAILED
 *
 * ****************************************************************/
uint8_t schSliceBasedInitUlHqProcCb(SchUlHqProcCb *hqP)
{
   SchSliceBasedHqProcCb *schSpcHqP;

   SCH_ALLOC(schSpcHqP, sizeof(SchSliceBasedHqProcCb));
   if(!schSpcHqP)
   {
      DU_LOG("\nERROR  -->  SCH: Memory allocation failed in schSliceBasedInitUlHqProcCb");
      return RFAILED;
   }
   cmLListInit(&schSpcHqP->lcCb.dedLcList);
   cmLListInit(&schSpcHqP->lcCb.defLcList);
   hqP->schSpcUlHqProcCb = (void *)schSpcHqP;
 
   return ROK;
}

/*******************************************************************
 *
 * @brief Handled Deletion of HARQ Process control block
 *
 * @details
 *
 *    Function : schSliceBasedDeleteUlHqProcCb
 *
 *    Functionality: Deletes HARQ Process parameters specific to 
 *       Slice Based scheduling in Uplink
 *
 * @params[in] Pointer to Uplink HARQ Process Control block
 * @return void
 *
 * ****************************************************************/
void schSliceBasedDeleteUlHqProcCb(SchUlHqProcCb *hqP)
{
   SchSliceBasedHqProcCb *schSpcHqP = (SchSliceBasedHqProcCb *)hqP->schSpcUlHqProcCb;
   cmLListDeleteLList(&schSpcHqP->lcCb.dedLcList);
   cmLListDeleteLList(&schSpcHqP->lcCb.defLcList);
   SCH_FREE(schSpcHqP, sizeof(SchSliceBasedHqProcCb));
   hqP->schSpcUlHqProcCb = NULLP;
}

/*******************************************************************
 *
 * @brief Handles freeing of HARQ Process
 *
 * @details
 *
 *    Function : schSliceBasedFreeDlHqProcCb
 *
 *    Functionality: Frees HARQ Process parameters specific to 
 *       Slice Based scheduling in Downlink when HARQ process becomes free
 *
 * @params[in] Pointer to HARQ process control block
 * @return void
 *
 * ****************************************************************/
void schSliceBasedFreeDlHqProcCb(SchDlHqProcCb *hqP)
{
   SchSliceBasedHqProcCb *schSpcHqP = (SchSliceBasedHqProcCb *)hqP->schSpcDlHqProcCb;

   cmLListDeleteLList(&schSpcHqP->lcCb.dedLcList);
   cmLListDeleteLList(&schSpcHqP->lcCb.defLcList);
}

/*******************************************************************
 *
 * @brief Handles freeing of HARQ Process
 *
 * @details
 *
 *    Function : schSliceBasedFreeUlHqProcCb
 *
 *    Functionality: Frees HARQ Process parameters specific to 
 *       Slice Based scheduling in Uplink when HARQ process becomes free
 *
 * @params[in] Pointer to HARQ process control block
 * @return void
 *
 * ****************************************************************/
void schSliceBasedFreeUlHqProcCb(SchUlHqProcCb *hqP)
{
   SchSliceBasedHqProcCb *schSpcHqP = (SchSliceBasedHqProcCb *)hqP->schSpcUlHqProcCb;

   cmLListDeleteLList(&schSpcHqP->lcCb.dedLcList);
   cmLListDeleteLList(&schSpcHqP->lcCb.defLcList);
}

/*******************************************************************
 *
 * @brief Adds HARQ process to retransmission list
 *
 * @details
 *
 *    Function : schSliceBasedAddToDlHqRetxList
 *
 *    Functionality: Adds HARQ process to retransmission list
 *
 * @params[in] Pointer to Downlink HARQ Process 
 * @return void
 *
 * ****************************************************************/
void schSliceBasedAddToDlHqRetxList(SchDlHqProcCb *hqP)
{
   SchSliceBasedUeCb *schSpcUeCb;

   schSpcUeCb = (SchSliceBasedUeCb *)hqP->hqEnt->ue->schSpcUeCb;
   cmLListAdd2Tail(&(schSpcUeCb->hqRetxCb.dlRetxHqList),&hqP->dlHqProcLink);  
#ifdef NR_DRX
   if(hqP->hqEnt->ue->ueDrxInfoPres == true)
   {
      schDrxStrtDlHqRttTmr(hqP);
   }
   else
#endif
   {
      schSliceBasedAddUeToSchedule(hqP->hqEnt->cell, hqP->hqEnt->ue->ueId);
   }
}

/*******************************************************************
 *
 * @brief Adds HARQ process to retransmission list
 *
 * @details
 *
 *    Function : schSliceBasedAddToUlHqRetxList
 *
 *    Functionality: Adds HARQ process to retransmission list
 *
 * @params[in] Pointer to Uplink HARQ Process 
 * @return void
 *
 * ****************************************************************/
void schSliceBasedAddToUlHqRetxList(SchUlHqProcCb *hqP)
{
   SchSliceBasedUeCb *schSpcUeCb;

   schSpcUeCb = (SchSliceBasedUeCb *)hqP->hqEnt->ue->schSpcUeCb;
   cmLListAdd2Tail(&(schSpcUeCb->hqRetxCb.ulRetxHqList),&hqP->ulHqProcLink);  
#ifdef NR_DRX
   if(hqP->hqEnt->ue->ueDrxInfoPres == true)
   {
      schDrxStrtUlHqRttTmr(hqP);
   }
   else
#endif
   {
      schSliceBasedAddUeToSchedule(hqP->hqEnt->cell, hqP->hqEnt->ue->ueId);
   }   
}

/*******************************************************************
 *
 * @brief Add UE to ueToBeScheduled List
 *
 * @details
 *
 *    Function : schSliceBasedAddUeToSchedule
 *
 *    Functionality:
 *      Search if UE entry present in the list
 *      If yes, return.
 *      If no, add UE to the list
 *
 * @params[in] Cell control block
 *             Ue Id to be added
 *
 * @return ROK     - success
 *         RFAILED - failure
 *
 * ****************************************************************/
uint8_t schSliceBasedAddUeToSchedule(SchCellCb *cellCb, uint16_t ueIdToAdd)
{
   SchSliceBasedCellCb *schSpcCellCb = NULLP;
   uint8_t *ueId;
   CmLList *node;

   schSpcCellCb = (SchSliceBasedCellCb *)cellCb->schSpcCell;
   /* Search if UE entry is already present in ueToBeScheduled list.
    * If yes, another entry for same UE not needed. Hence, return */
   node = schSpcCellCb->ueToBeScheduled.first;
   while(node)
   {
      ueId = (uint8_t *)node->node;
      if(*ueId == ueIdToAdd)
         return ROK;
      node = node->next;
   }

   /* If UE entry not present already, add UE to the end of ueToBeScheduled list */
   SCH_ALLOC(ueId, sizeof(uint8_t));
   if(!ueId)
   {
      DU_LOG("\nERROR  -->  SCH : Memory allocation failure in schSliceBasedAddUeToSchedule");
      return RFAILED;
   }
   *ueId = ueIdToAdd;
   if(addNodeToLList(&schSpcCellCb->ueToBeScheduled, ueId, NULLP) != ROK)
   {
      DU_LOG("\nERROR  --> SCH : Failed to add ueId [%d] to cell->ueToBeScheduled list", *ueId);
      return RFAILED;
   }
   return ROK;
}

/*******************************************************************
 *
 * @brief Handled CRC Indication
 *
 * @details
 *
 *    Function : schSliceBasedProcessCrcInd
 *
 *    Functionality: Processes CRC Indication as required for Slice Based
 *       scheduling
 *
 * @params[in] Pointer to Cell control block
 *             UE Id
 * @return void
 *
 * ****************************************************************/
void schSliceBasedProcessCrcInd(SchCellCb *cellCb, uint16_t ueId)
{
   schSliceBasedAddUeToSchedule(cellCb, ueId);   
}

/*******************************************************************
 *
 * @brief Processes Buffer Occupancy report from RLC
 *
 * @details
 *
 *    Function : schSliceBasedDlRlcBoInfo
 *
 *    Functionality: Process buffer occupany report 
 *
 * @params[in]
 * @return
 *
 * ****************************************************************/
void schSliceBasedDlRlcBoInfo(SchCellCb *cellCb, uint16_t ueId)
{
   schSliceBasedAddUeToSchedule(cellCb, ueId);   
}

/*******************************************************************
 *
 * @brief Processes BSR request
 *
 * @details
 *
 *    Function : schSliceBasedBsr
 *
 *    Functionality: Processes BSR as per Slice Based scheduling
 *
 * @params[in] Pointer to Cell 
 *             UE ID
 * @return void
 *
 * ****************************************************************/
void schSliceBasedBsr(SchCellCb *cellCb, uint16_t ueId)
{
   schSliceBasedAddUeToSchedule(cellCb, ueId);   
}

/*******************************************************************
 *
 * @brief Processed UCI Indication
 *
 * @details
 *
 *    Function : schSliceBasedSrUciInd
 *
 *    Functionality: Processing of UCI indication specific to 
 *       Slice Based scheduling
 *
 * @params[in] Pointer to Cell
 *             UE Id
 * @return void
 *
 * ****************************************************************/
void schSliceBasedSrUciInd(SchCellCb *cellCb, uint16_t ueId)
{
   schSliceBasedAddUeToSchedule(cellCb, ueId);   
}

/*******************************************************************
 *
 * @brief Processing of RACH Indication
 *
 * @details
 *
 *    Function : schSliceBasedProcessRachInd
 *
 *    Functionality: Processing of RACH Indication specific to 
 *       Slice Based scheduling
 *
 * @params[in] Pointer to Cell Cb
 *             UE Id
 * @return void
 *
 * ****************************************************************/
void schSliceBasedProcessRachInd(SchCellCb *cellCb, uint16_t ueId)
{
   schSliceBasedAddUeToSchedule(cellCb, ueId);   
}

/*******************************************************************
 *
 * @brief Processing of DL HARQ Indication
 *
 * @details
 *
 *    Function : SchSliceBasedDlHarqInd
 *
 *    Functionality:
 *
 * @params[in] 
 * @return void
 *
 * ****************************************************************/
void SchSliceBasedDlHarqInd()
{
   return;
}

/*******************************************************************
 *
 * @brief Processing of Paging indication
 *
 * @details
 *
 *    Function : schSliceBasedPagingInd
 *
 *    Functionality:
 *
 * @params[in]
 * @return void
 *
 * ****************************************************************/
void schSliceBasedPagingInd()
{
   return;
}

/*******************************************************************
 *
 * @brief Processing of RACH Resource Request
 *
 * @details
 *
 *    Function : schSliceBasedRachRsrcReq
 *
 *    Functionality:
 *
 * @params[in]
 * @return void
 *
 * ****************************************************************/
void schSliceBasedRachRsrcReq()
{
   return;
}

/*******************************************************************
 *
 * @brief Processing of RACH Resource Release
 *
 * @details
 *
 *    Function : schSliceBasedRachRsrcRel
 *
 *    Functionality:
 *
 * @params[in]
 * @return void
 *
 * ****************************************************************/
void schSliceBasedRachRsrcRel()
{
   return;
}

/*******************************************************************
 *
 * @brief Remove entry from HARQ retransmission list
 *
 * @details
 *
 *    Function : schSliceBasedRemoveFrmDlHqRetxList
 *
 *    Functionality: Remove entry from HARQ retransmission list
 *
 * @params[in] Pointer to UE
 *             Node to be deleted
 * @return void
 *
 * ****************************************************************/
void schSliceBasedRemoveFrmDlHqRetxList(SchUeCb *ueCb, CmLList *node)
{
   SchSliceBasedUeCb *schSpcUeCb;

   schSpcUeCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;
   cmLListDelFrm(&schSpcUeCb->hqRetxCb.dlRetxHqList, node);
}

/*******************************************************************
 *
 * @brief Remove entry from HARQ retransmission list
 *
 * @details
 *
 *    Function : schSliceBasedRemoveFrmUlHqRetxList
 *
 *    Functionality: Remove entry from HARQ retransmission list
 *
 * @params[in] Pointer to UE
 *             Node to be deleted
 * @return void
 *
 * ****************************************************************/
void schSliceBasedRemoveFrmUlHqRetxList(SchUeCb *ueCb, CmLList *node)
{
   SchSliceBasedUeCb *schSpcUeCb;

   schSpcUeCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;
   cmLListDelFrm(&schSpcUeCb->hqRetxCb.ulRetxHqList, node);
}

/*******************************************************************
 *
 * @brief Remove UE from Scheduling List
 *
 * @details
 *
 *    Function : schSliceBasedRemoveUeFrmScheduleLst
 *
 *    Functionality: Remove UE from Scheduling List
 *
 * @params[in] Pointer to Cell
 *             Node to be removed
 * @return void
 *
 * ****************************************************************/
void schSliceBasedRemoveUeFrmScheduleLst(SchCellCb *cell, CmLList *node)
{
   SchSliceBasedCellCb *schSpcCell;

   schSpcCell = (SchSliceBasedCellCb *)cell->schSpcCell;
   SCH_FREE(node->node, sizeof(uint8_t));
   deleteNodeFromLList(&schSpcCell->ueToBeScheduled, node);
}

/*******************************************************************
 *
 * @brief  Handler to calculate TBS size for BSR requested
 *
 * @details
 *
 *    Function :  schSliceBasedCalculateUlTbs
 *
 *    Functionality: Function will note the required TBS for each LCGIDX and use
 *    the Priority LCG List and RRM policy to allocate the TBS size
 *
 * @params [in] ueCb (Pointer to UE CB)
 *         [in] puschTime (Time slot where PUSCH will be sent)
 *         [in] symbLen (No of Symbols used for PUSCH transmission)
 *         [out] startPrb(Pointer to startPRB which will be calculated while
 *         finding the best Free Block)
 *         [out] totTBS(Pointer to total TBS size)
 *         [in] isRetx (to indicate retransmission)
 *         [in] hqP (UL Harq process pointer)
 *
 * @return uint8_t : ROK > Scheduling of UL grant is successful
 *                   RFAILED > vice versa
 *
 * ****************************************************************/
uint8_t schSliceBasedCalculateUlTbs(SchUeCb *ueCb, SlotTimingInfo puschTime, uint8_t symbLen,\
                          uint16_t *startPrb, uint32_t *totTBS, bool isRetx, SchUlHqProcCb *hqP, SchSliceBasedHqProcCb *schSpcHqP)
{
   uint16_t mcsIdx = 0;
   CmLListCp *lcLL = NULLP;
   uint16_t lcgIdx = 0, lcId =0, maxFreePRB = 0;
   uint16_t rsvdDedicatedPRB;
   *startPrb = 0;
   *totTBS = 0;

   /* check for BSR */
   for(lcgIdx=0; lcgIdx<MAX_NUM_LOGICAL_CHANNEL_GROUPS; lcgIdx++)
   {
      if(ueCb->bsrInfo[lcgIdx].dataVol == 0)
      {
         continue;
      }

      /*TODO: lcgIdx and LCID has been implemented as one to one mapping.
       * Need to check the mapping to figure out the LCID and lcgIdx once L2
       * spec specifies any logic*/
      lcId = lcgIdx;
      if(ueCb->ulInfo.ulLcCtxt[lcId].isDedicated)
      {
         lcLL = &(schSpcHqP->lcCb.dedLcList);
         rsvdDedicatedPRB = ueCb->ulInfo.ulLcCtxt[lcId].rsvdDedicatedPRB;
      }
      else
      {
         lcLL = &(schSpcHqP->lcCb.defLcList);
      }

      /*[Step2]: Update the reqPRB and Payloadsize for this LC in the appropriate List*/
      if(updateLcListReqPRB(lcLL, lcId, ueCb->bsrInfo[lcgIdx].dataVol) != ROK)
      {
         DU_LOG("\nERROR  --> SCH: LcgId:%d updation failed",lcId);         
         return RFAILED;
      }
   }

   if ((schSpcHqP->lcCb.defLcList.count == 0) && (schSpcHqP->lcCb.dedLcList.count == 0))
   {
      if( (ueCb->srRcvd) || (isRetx) )
      {
         *startPrb = MAX_NUM_RB;
         *totTBS = schCalcTbSize(UL_GRANT_SIZE);
      }
      /*Returning true when NO Grant is there for UE as this is not scheduling
       * error*/      
      return ROK;
   }

   maxFreePRB = searchLargestFreeBlock(ueCb->cellCb, puschTime, startPrb, DIR_UL);

   /*[Step4]: Estimation of PRB and BO which can be allocated to each LC in
    * the list based on RRM policy*/

   /*Either this UE contains no reservedPRB pool fir dedicated S-NSSAI or 
    * Num of Free PRB available is not enough to reserve Dedicated PRBs*/
   if(maxFreePRB != 0)
   {
      mcsIdx = ueCb->ueCfg.ulModInfo.mcsIndex;
      if((schSpcHqP->lcCb.dedLcList.count == 0) || ((maxFreePRB < rsvdDedicatedPRB)))
      {
         schSpcHqP->lcCb.sharedNumPrb = maxFreePRB;
         DU_LOG("\nDEBUG  -->  SCH : UL Only Default Slice is scheduled, sharedPRB Count:%d",\
               schSpcHqP->lcCb.sharedNumPrb);

         /*PRB Alloc for Default LCs*/
         prbAllocUsingRRMPolicy(&(schSpcHqP->lcCb.defLcList), FALSE, mcsIdx, symbLen,\
               &(schSpcHqP->lcCb.sharedNumPrb), NULLP, NULLP,&(ueCb->srRcvd));
      }
      else
      {
         schSpcHqP->lcCb.sharedNumPrb = maxFreePRB - rsvdDedicatedPRB;

         /*PRB Alloc for Dedicated LCs*/
         prbAllocUsingRRMPolicy(&(schSpcHqP->lcCb.dedLcList), TRUE, mcsIdx, symbLen,\
               &(schSpcHqP->lcCb.sharedNumPrb), &(rsvdDedicatedPRB),\
               NULLP, &(ueCb->srRcvd));

         /*PRB Alloc for Default LCs*/
         prbAllocUsingRRMPolicy(&(schSpcHqP->lcCb.defLcList), FALSE, mcsIdx, symbLen, \
               &(schSpcHqP->lcCb.sharedNumPrb), &(rsvdDedicatedPRB),\
               NULLP,&(ueCb->srRcvd));
      }
   }
   /*[Step5]:Traverse each LCID in LcList to calculate the exact Scheduled Bytes
    * using allocated BO per LC and Update dlMsgAlloc(BO report for MAC*/ 
   if(schSpcHqP->lcCb.dedLcList.count != 0)
      updateGrantSizeForBoRpt(&(schSpcHqP->lcCb.dedLcList), NULLP, ueCb->bsrInfo, totTBS);

   updateGrantSizeForBoRpt(&(schSpcHqP->lcCb.defLcList), NULLP, ueCb->bsrInfo, totTBS);

   /*Below case will hit if NO LC(s) are allocated due to resource crunch*/
   if (*totTBS == 0)
   {
      if(maxFreePRB == 0)
      {
         DU_LOG("\nERROR  --> SCH : NO FREE PRB!!");
      }
      else
      {
         /*Schedule the LC for next slot*/
         DU_LOG("\nDEBUG  -->  SCH : No LC has been scheduled");
      }      
      return RFAILED;
   }   
   return ROK;
}

/*******************************************************************
 *
 * @brief Grants resources to LC in uplink
 *
 * @details
 *
 *    Function : schProcessSrOrBsrReq
 *
 *    Functionality:
 *       Grants resources to LC in uplink
 *
 * @params[in] PDCCH Time
 *             PUSCH Time
 *             Start Symbol
 *             Number of symbols
 *             Is retransmission
 *             HARQ process
 * @return ROK
 *         RFAILED
 *
 *******************************************************************/
uint8_t schSliceBasedScheduleUlLc(SlotTimingInfo dciTime, SlotTimingInfo puschTime, uint8_t startSymb , uint8_t symbLen, bool isRetx, SchUlHqProcCb **hqP)
{
   SchCellCb *cell;
   SchSliceBasedHqProcCb *schSpcHqProcCb;
   uint8_t ret = RFAILED;
   uint16_t startPrb = 0;
   uint32_t totDataReq = 0; /* in bytes */
   SchUeCb *ueCb;
   SchPuschInfo *puschInfo;
   DciInfo  *dciInfo = NULLP;

   cell = (*hqP)->hqEnt->cell;
   ueCb = (*hqP)->hqEnt->ue;
   schSpcHqProcCb = (SchSliceBasedHqProcCb *)(*hqP)->schSpcUlHqProcCb;
   ret = schSliceBasedCalculateUlTbs(ueCb, puschTime, symbLen, &startPrb, &totDataReq, isRetx, *hqP, schSpcHqProcCb);

   if(totDataReq > 0 && ret == ROK)
   {
      SCH_ALLOC(dciInfo, sizeof(DciInfo));
      if(!dciInfo)
      {
         DU_LOG("\nERROR  -->  SCH : Memory Allocation failed for dciInfo alloc");
         if(isRetx != TRUE)
         {
            if(schSpcHqProcCb->lcCb.dedLcList.count != 0)
               updateBsrAndLcList(&(schSpcHqProcCb->lcCb.dedLcList), ueCb->bsrInfo, RFAILED);

            updateBsrAndLcList(&(schSpcHqProcCb->lcCb.defLcList), ueCb->bsrInfo, RFAILED);
         }
         return RFAILED;
      }
      cell->schDlSlotInfo[dciTime.slot]->ulGrant = dciInfo;
      memset(dciInfo,0,sizeof(DciInfo));

      /* Update PUSCH allocation */
      if(schFillPuschAlloc(ueCb, puschTime, totDataReq, startSymb, symbLen, startPrb, isRetx, *hqP) == ROK)
      {
         if(cell->schUlSlotInfo[puschTime.slot]->schPuschInfo)
         {
            puschInfo = cell->schUlSlotInfo[puschTime.slot]->schPuschInfo;
            if(puschInfo != NULLP)
            {
               /* Fill DCI for UL grant */
               schFillUlDci(ueCb, puschInfo, dciInfo, isRetx, *hqP);
               ueCb->srRcvd = false;
               ueCb->bsrRcvd = false;
               cell->schUlSlotInfo[puschTime.slot]->puschUe = ueCb->ueId;
               if(schSpcHqProcCb->lcCb.dedLcList.count != 0)
                  updateBsrAndLcList(&(schSpcHqProcCb->lcCb.dedLcList), ueCb->bsrInfo, ROK);
               updateBsrAndLcList(&(schSpcHqProcCb->lcCb.defLcList), ueCb->bsrInfo, ROK);
               cmLListAdd2Tail(&(ueCb->hqUlmap[puschTime.slot]->hqList), &(*hqP)->ulSlotLnk);                  
               return ROK;
            }
         }
      }
      if(schSpcHqProcCb->lcCb.dedLcList.count != 0)
         updateBsrAndLcList(&(schSpcHqProcCb->lcCb.dedLcList), ueCb->bsrInfo, RFAILED);
      updateBsrAndLcList(&(schSpcHqProcCb->lcCb.defLcList), ueCb->bsrInfo, RFAILED);
   }
   return ROK;
}

/*******************************************************************
 *
 * @brief Grants resources to LC in downlink 
 *
 * @details
 *
 *    Function : schSliceBasedScheduleDlLc 
 *
 *    Functionality: Grants resources to LC in uplink
 *
 * @params[in] PDCCH Time
 *
 * @return ROK
 *         RFAILED
 *
 * ****************************************************************/
uint32_t schSliceBasedScheduleDlLc(SlotTimingInfo pdcchTime, SlotTimingInfo pdschTime, uint8_t pdschNumSymbols,\
                                    uint16_t *startPrb, bool isRetx, SchDlHqProcCb **hqP)
{
   SchSliceBasedHqProcCb *schSpcHqProcCb;
   SchUeCb *ueCb;
   uint8_t lcIdx = 0;
   uint16_t maxFreePRB = 0;
   uint16_t mcsIdx = 0;
   uint32_t accumalatedSize = 0;
   CmLListCp *lcLL = NULLP;
   uint16_t rsvdDedicatedPRB = 0;
   DlMsgSchInfo *dciSlotAlloc;

   /* TX_PAYLOAD_HDR_LEN: Overhead which is to be Added once for any UE while estimating Accumulated TB Size
    * Following flag added to keep the record whether TX_PAYLOAD_HDR_LEN is added to the first Node getting allocated.
    * If both Dedicated and Default LC lists are present then First LC in Dedicated List will include this overhead
    * else if only Default list is present then first node in this List will add this overhead len*/
   bool isTxPayloadLenAdded = FALSE;

   ueCb = (*hqP)->hqEnt->ue;
   dciSlotAlloc = (*hqP)->hqEnt->cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueCb->ueId -1];
   schSpcHqProcCb = (SchSliceBasedHqProcCb *)((*hqP)->schSpcDlHqProcCb);

   if (isRetx == FALSE)
   {
      /*Re-Initalization per UE*/
      /* scheduled LC data fill */
      dciSlotAlloc->transportBlock[0].numLc = 0;
      isTxPayloadLenAdded = FALSE; /*Re-initlaize the flag for every UE*/
      accumalatedSize = 0;

      for(lcIdx = 0; lcIdx < MAX_NUM_LC; lcIdx++)
      {
         if(ueCb->dlInfo.dlLcCtxt[lcIdx].bo)
         {
            /*Check the LC is Dedicated or default and accordingly LCList will
            * be used*/
            if(ueCb->dlInfo.dlLcCtxt[lcIdx].isDedicated)
            {
               lcLL = &(schSpcHqProcCb->lcCb.dedLcList);
               rsvdDedicatedPRB = ueCb->dlInfo.dlLcCtxt[lcIdx].rsvdDedicatedPRB;
            }
            else
            {
               lcLL = &(schSpcHqProcCb->lcCb.defLcList);
            }

            /*[Step2]: Update the reqPRB and Payloadsize for this LC in the appropriate List*/
            if(updateLcListReqPRB(lcLL, ueCb->dlInfo.dlLcCtxt[lcIdx].lcId,\
                     (ueCb->dlInfo.dlLcCtxt[lcIdx].bo + MAC_HDR_SIZE)) != ROK)
            {
               DU_LOG("\nERROR  --> SCH : Updation in LC List Failed");
               /* Free the dl ded msg info allocated in macSchDlRlcBoInfo */
               if(!dciSlotAlloc->dlMsgPdschCfg)
               {
                  SCH_FREE(dciSlotAlloc, sizeof(DlMsgSchInfo));
                  (*hqP)->hqEnt->cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueCb->ueId -1] = NULL;
               }
               return accumalatedSize;
            }
         }
      }//End of for loop

      if ((schSpcHqProcCb->lcCb.defLcList.count == 0) && (schSpcHqProcCb->lcCb.dedLcList.count == 0))
      {
         DU_LOG("\nDEBUG  -->  SCH : No pending BO for any LC id\n");
         UNSET_ONE_BIT((*hqP)->hqEnt->ue->ueId, (*hqP)->hqEnt->cell->boIndBitMap);

         /* Free the dl ded msg info allocated in macSchDlRlcBoInfo */
         if(!dciSlotAlloc->dlMsgPdschCfg)
         {
            SCH_FREE(dciSlotAlloc, sizeof(DlMsgSchInfo));
            (*hqP)->hqEnt->cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueCb->ueId -1] = NULL;
         }
         /*TRUE because this UE has nothing to be scheduled*/
         return accumalatedSize;
      }
   }

   /*[Step3]: Calculate Best FREE BLOCK with MAX PRB count*/
   maxFreePRB = searchLargestFreeBlock((*hqP)->hqEnt->cell, pdschTime, startPrb, DIR_DL);

   /*[Step4]: Estimation of PRB and BO which can be allocated to each LC in
    * the list based on RRM policy*/

   /*Either this UE contains no reservedPRB pool fir dedicated S-NSSAI or 
    * Num of Free PRB available is not enough to reserve Dedicated PRBs*/
   if(isRetx == FALSE)
   {
      if(maxFreePRB != 0)
      {
         mcsIdx = ueCb->ueCfg.dlModInfo.mcsIndex;

         if((schSpcHqProcCb->lcCb.dedLcList.count == NULLP) || ((maxFreePRB < rsvdDedicatedPRB)))
         { 
            schSpcHqProcCb->lcCb.sharedNumPrb = maxFreePRB;
            DU_LOG("\nDEBUG  -->  SCH : DL Only Default Slice is scheduled, sharedPRB Count:%d",\
                  schSpcHqProcCb->lcCb.sharedNumPrb);

            /*PRB Alloc for Default LCs*/
            prbAllocUsingRRMPolicy(&(schSpcHqProcCb->lcCb.defLcList), FALSE, mcsIdx, pdschNumSymbols,\
                  &(schSpcHqProcCb->lcCb.sharedNumPrb), NULLP, &isTxPayloadLenAdded, NULLP);
         }
         else
         {
            schSpcHqProcCb->lcCb.sharedNumPrb = maxFreePRB - rsvdDedicatedPRB;
            /*PRB Alloc for Dedicated LCs*/
            prbAllocUsingRRMPolicy(&(schSpcHqProcCb->lcCb.dedLcList), TRUE, mcsIdx, pdschNumSymbols,\
                  &(schSpcHqProcCb->lcCb.sharedNumPrb), &(rsvdDedicatedPRB), &isTxPayloadLenAdded, NULLP);

            /*PRB Alloc for Default LCs*/
            prbAllocUsingRRMPolicy(&(schSpcHqProcCb->lcCb.defLcList), FALSE, mcsIdx, pdschNumSymbols, \
                  &(schSpcHqProcCb->lcCb.sharedNumPrb), &(rsvdDedicatedPRB), &isTxPayloadLenAdded, NULLP);
         }
      }
   }

   /*[Step5]:Traverse each LCID in LcList to calculate the exact Scheduled Bytes
    * using allocated BO per LC and Update dlMsgAlloc BO report for MAC */
   if (isRetx == FALSE)
   {
      if(schSpcHqProcCb->lcCb.dedLcList.count != 0)
         updateGrantSizeForBoRpt(&(schSpcHqProcCb->lcCb.dedLcList), dciSlotAlloc, NULLP, &(accumalatedSize));

      updateGrantSizeForBoRpt(&(schSpcHqProcCb->lcCb.defLcList), dciSlotAlloc, NULLP, &(accumalatedSize));
   }
   else
   {
      accumalatedSize = (*hqP)->tbInfo[0].tbSzReq;
   }

   /*Below case will hit if NO LC(s) are allocated due to resource crunch*/
   if (!accumalatedSize)
   {
      if(maxFreePRB == 0)
      {
         DU_LOG("\nERROR  --> SCH : NO FREE PRB!!");
      }
      else
      {
         /*Schedule the LC for next slot*/
         DU_LOG("\nDEBUG  -->  SCH : No LC has been scheduled");
      }
      /* Not Freeing dlMsgAlloc as ZERO BO REPORT to be sent to RLC so that
       * Allocation can be done in next slot*/
      accumalatedSize = 0;
   }

   return accumalatedSize;
}

/*******************************************************************
 *
 * @brief Scheduling of Slots in UL And DL 
 *
 * @details
 *
 *    Function : schSliceBasedScheduleSlot
 *
 *    Functionality: Scheduling of slots in UL and DL specific to 
 *       Slice Based scheduling
 *
 * @params[in] Pointer to Cell
 *             Slot timing info
 *             Scheduler instance
 * @return void
 *
 * ****************************************************************/
void schSliceBasedScheduleSlot(SchCellCb *cell, SlotTimingInfo *slotInd, Inst schInst)
{
   SchSliceBasedCellCb  *schSpcCell;
   SchSliceBasedUeCb    *schSpcUeCb;
   SchDlHqProcCb  *hqP = NULLP;
   SchUlHqProcCb  *ulHqP = NULLP;
   CmLList        *pendingUeNode;
   CmLList        *node;
   uint8_t        ueId;
   bool           isRarPending = false, isRarScheduled = false;
   bool           isMsg4Pending = false, isMsg4Scheduled = false;
   /* JOJO: Put the flags into UE control block.*/
   // bool           isDlMsgPending = false, isDlMsgScheduled = false;
   // bool           isUlGrantPending = false, isUlGrantScheduled = false;
   CmLList        *pendingUeNodeNext; /* JOJO: For the maintanance of UE schedule list.*/

   schSpcCell = (SchSliceBasedCellCb *)cell->schSpcCell;
   
   // if(schSpcCell->isTimerStart)
   // {
   //    setRrmPolicyWithTimer(cell);
   // }

   // DU_LOG("\nDennis  --> SCH Slice Based Scheduler: Slot Indication received. [%d : %d]", slotInd->sfn, slotInd->slot);
   /* Select first UE in the linked list to be scheduled next */
   pendingUeNode = schSpcCell->ueToBeScheduled.first;
   if(pendingUeNode)
   {
      if(pendingUeNode->node)
      {
         DU_LOG("\nDennis  --> SCH Has UE to be scheduled. [%d : %d]", slotInd->sfn, slotInd->slot);
         ueId = *(uint8_t *)(pendingUeNode->node);
         schSpcUeCb = (SchSliceBasedUeCb *)cell->ueCb[ueId-1].schSpcUeCb;

         /* If RAR is pending for this UE, schedule PDCCH,PDSCH to send RAR and 
          * PUSCH to receive MSG3 as per k0-k2 configuration*/
         if(cell->raReq[ueId-1] != NULLP)
         {
            isRarPending = true;
            isRarScheduled = schProcessRaReq(schInst, cell, *slotInd, ueId);
         }

         /*MSG3 retransmisson*/
         if(cell->raCb[ueId-1].retxMsg3HqProc)
         {            
            schMsg3RetxSchedulingForUe(&(cell->raCb[ueId-1]));
         }

         /* If MSG4 is pending for this UE, schedule PDCCH,PDSCH to send MSG4 and
          * PUCCH to receive UL msg as per k0-k1 configuration  */
         if (cell->ueCb[ueId-1].retxMsg4HqProc) //should work from dlmap later tbd
         {
            /* Retransmission of MSG4 */
            isMsg4Pending = true;
            if(schProcessMsg4Req(cell, *slotInd, ueId, TRUE, &cell->ueCb[ueId-1].retxMsg4HqProc) == ROK)
               isMsg4Scheduled = true;
         }
         else
         {
            /* First transmission of MSG4 */
            if(cell->raCb[ueId-1].msg4recvd)
            {
               isMsg4Pending = true;
               if(schProcessMsg4Req(cell, *slotInd, ueId, FALSE, &cell->ueCb[ueId-1].msg4HqProc) == ROK)
                  isMsg4Scheduled = true;

               /* If MSG4 scheduling failed, free the newly assigned HARQ process */
               if(!isMsg4Scheduled)
                  schDlReleaseHqProcess(cell->ueCb[ueId-1].msg4HqProc);
            }
         }

         if(isRarPending || isMsg4Pending)
         {
            /* If RAR or MSG is successfully scheduled then
             * remove UE from linked list since no pending msgs for this UE */
            if(isRarScheduled || isMsg4Scheduled)
            {
               schSliceBasedRemoveUeFrmScheduleLst(cell, pendingUeNode);
            }
            /* If RAR/MSG4 is pending but couldnt be scheduled then,
             * put this UE at the end of linked list to be scheduled later */
            else
            {
               cmLListAdd2Tail(&schSpcCell->ueToBeScheduled, cmLListDelFrm(&schSpcCell->ueToBeScheduled, pendingUeNode));
            }
         }

#ifdef NR_DRX 
         if((cell->ueCb[ueId-1].ueDrxInfoPres == true) && (cell->ueCb[ueId-1].drxUeCb.drxDlUeActiveStatus != true))
         {
            if(pendingUeNode->node)
            {
               cmLListAdd2Tail(&schSpcCell->ueToBeScheduled, cmLListDelFrm(&schSpcCell->ueToBeScheduled, pendingUeNode));
            }
         }
         else 
#endif
         {

            /* DL Data */
            /*JOJO: Only check if there is new transmission and retransmission in function "schSliceBasedDlScheduling"*/
            if(!schSliceBasedDlScheduling(cell, *slotInd, ueId, FALSE, &hqP))
            {
               DU_LOG("\nJOJO --> Slice-based DL scheduling failed.");
            }

            /* Scheduling of UL grant */
            node = NULLP;
            if(schSpcUeCb)
               node = schSpcUeCb->hqRetxCb.ulRetxHqList.first;
            if(node != NULLP)
            {
               /* UL Data ReTransmisson */
               schSpcUeCb->isUlGrantPending = true;
               schSpcUeCb->isUlGrantScheduled = schProcessSrOrBsrReq(cell, *slotInd, ueId, TRUE, (SchUlHqProcCb**) &(node->node));
               DU_LOG("\nJOJO --> UL retransmission is triggered.");
               if(schSpcUeCb->isUlGrantScheduled)
               {
            #ifdef NR_DRX 
                  schDrxStopUlHqRetxTmr(cell, &cell->ueCb[ueId-1], ((SchUlHqProcCb**) &(node->node)));
            #endif
                  schSliceBasedRemoveFrmUlHqRetxList(&cell->ueCb[ueId-1], node);
               }
            }
            else
            {
               /* UL Data new transmission */
               DU_LOG("\nJOJO --> UL new transmission is triggered.");
               if(cell->ueCb[ueId-1].srRcvd || cell->ueCb[ueId-1].bsrRcvd)
               {
                  schSpcUeCb->isUlGrantPending = true;
                  schSpcUeCb->isUlGrantScheduled = schProcessSrOrBsrReq(cell, *slotInd, ueId, FALSE, &ulHqP);
                  //isUlGrantScheduled = schSliceBasedUlScheduling(cell, *slotInd, ueId, FALSE, &ulHqP);
                  if(!schSpcUeCb->isUlGrantScheduled)
                     schUlReleaseHqProcess(ulHqP, FALSE);
                  else
                  {
            #ifdef NR_DRX
                     schHdlDrxInActvStrtTmr(cell, &cell->ueCb[ueId-1], PHY_DELTA_UL + SCHED_DELTA);
            #endif
                  }
               }
            }

            /*JOJO: Maintain UE scheduling list for multiple UE scheduling per TTI.*/
            DU_LOG("\nJOJO --> SCH is maintaining UE scheduling list, length of UE scheduling list: %d", schSpcCell->ueToBeScheduled.count);
            pendingUeNode = schSpcCell->ueToBeScheduled.first;
            CmLList        *pendingUeNodeNext;
            bool isUEPermuted[MAX_NUM_UE] = {0};
            while(pendingUeNode)
            {
               pendingUeNodeNext = pendingUeNode->next;
               ueId = *(uint8_t *)(pendingUeNode->node);
               schSpcUeCb = (SchSliceBasedUeCb *)cell->ueCb[ueId-1].schSpcUeCb;

               // if(schSpcUeCb)
               if(schSpcUeCb && !isUEPermuted[ueId-1])
               {
                  if(!schSpcUeCb->isUlGrantPending && !schSpcUeCb->isDlMsgPending)
                  {
                     /* No action required */  
                     DU_LOG("\nJOJO --> UE id: %d, no action for pendingUeNode.", ueId);
                  }
                  else if((schSpcUeCb->isUlGrantPending && !schSpcUeCb->isUlGrantScheduled) || (schSpcUeCb->isDlMsgPending && !schSpcUeCb->isDlMsgScheduled))
                  {
                     DU_LOG("\nJOJO --> UE id: %d, add UE into the tail of pendingUeNode.", ueId);
                     cmLListAdd2Tail(&schSpcCell->ueToBeScheduled, cmLListDelFrm(&schSpcCell->ueToBeScheduled, pendingUeNode));
                  }
                  else
                  {
                     DU_LOG("\nJOJO --> UE id: %d, remove UE from pendingUeNode.", ueId);
                     schSliceBasedRemoveUeFrmScheduleLst(cell, pendingUeNode);
                  }
                  isUEPermuted[ueId-1] = 1;
                  schSpcUeCb->isDlMsgPending = false;
                  schSpcUeCb->isDlMsgScheduled = false;
                  schSpcUeCb->isUlGrantPending = false;
                  schSpcUeCb->isUlGrantScheduled = false;
               }
               pendingUeNode = pendingUeNodeNext;
            }
         }
      }
   }
}

/*******************************************************************
 *
 * @brief Fill the lcInfo into corresponding slice control block for each UE
 *
 * @details
 *
 *    Function : schSliceBasedFillLcInfoToSliceCb
 *
 *    Functionality: Beacuse each LC is associated with slice, this function
 *       fills and classifies the lcInfo of each UE into corresponding slice control block.
 *       Moreover, LCs are ordered from higher priority(lower priority level) to 
 *       lower priority(higher priority level)
 *
 * @params[in] Pointer to Slice Control Block List
 *             Pointer to UE Control Block
 * @return ROK     - success
 *         RFAILED - failure
 *
 * ****************************************************************/
uint8_t schSliceBasedFillLcInfoToSliceCb(CmLListCp *sliceCbList, SchUeCb *ueCb)
{
   CmLList *sliceCbNode;
   CmLList *lcInfoNode, *lcInfoNext;
   SchSliceBasedSliceCb *sliceCb;
   uint8_t ueId;
   uint8_t lcIdx;
   float_t totalPriorLevel = 0;
   SchSliceBasedLcInfo *tempLcInfo;

   ueId = ueCb->ueId;
   sliceCbNode = sliceCbList->first;

   while(sliceCbNode)
   {
      sliceCb = (SchSliceBasedSliceCb *)sliceCbNode->node; 

      /* Rebuild the lcInfoList */
      lcInfoNode = sliceCb->lcInfoList[ueId-1].first;
      while(lcInfoNode)
      {
         lcInfoNext = lcInfoNode->next;
         SCH_FREE(lcInfoNode->node, sizeof(SchSliceBasedLcInfo));
         cmLListDelFrm(&sliceCb->lcInfoList[ueId-1], lcInfoNode);
         SCH_FREE(lcInfoNode, sizeof(CmLList));
         
         lcInfoNode = lcInfoNext;
      }
      cmLListDeleteLList(&sliceCb->lcInfoList[ueId-1]);
      
      cmLListInit(&sliceCb->lcInfoList[ueId-1]);

      for(lcIdx = 0; lcIdx < MAX_NUM_LC; lcIdx++)
      {  
         if(ueCb->dlInfo.dlLcCtxt[lcIdx].snssai)
         {
            if(memcmp(&sliceCb->snssai, ueCb->dlInfo.dlLcCtxt[lcIdx].snssai, sizeof(Snssai)) == 0)
            {
               DU_LOG("\nDennis --> LC ID:%d is added to SST:%d slice", lcIdx, sliceCb->snssai.sst);
               SCH_ALLOC(tempLcInfo, sizeof(SchSliceBasedLcInfo));
               tempLcInfo->lcId = lcIdx;
               tempLcInfo->reqBO = 0;
               tempLcInfo->allocBO = 0;
               tempLcInfo->allocPRB = 0;
               tempLcInfo->ueCb = ueCb;
               tempLcInfo->fiveQI = ueCb->dlInfo.dlLcCtxt[lcIdx].fiveQi; /* JOJO: attach 5QI to logical channel*/
               tempLcInfo->priorLevel = schSliceBasedCalculatePriorLevel(ueCb->dlInfo.dlLcCtxt[lcIdx].fiveQi);
               totalPriorLevel += tempLcInfo->priorLevel;
               DU_LOG("\nJOJO --> LC ID:%d is with 5QI: %d, priority level: %d, PDU session ID: %d.", tempLcInfo->lcId,\
                  ueCb->dlInfo.dlLcCtxt[lcIdx].fiveQi, tempLcInfo->priorLevel, ueCb->dlInfo.dlLcCtxt[lcIdx].pduSessionId);
               addNodeToLList(&sliceCb->lcInfoList[ueId-1], tempLcInfo, NULL);
            }
         }
      }
      schSliceBasedSortLcByPriorLevel(&sliceCb->lcInfoList[ueId-1], totalPriorLevel);

      sliceCbNode = sliceCbNode->next;
      totalPriorLevel = 0;
   }
   return ROK;
}

/*******************************************************************
 *
 * @brief Get the default priority level according to the 5QI mapping table
 *
 * @details
 *
 *    Function : schSliceBasedCalculatePriorLevel
 *
 *    Functionality: Get the default priority level according to the 5QI mapping table
 *
 * @params[in] 5QI value
 * @return Priority Level
 *
 * ****************************************************************/
uint16_t schSliceBasedCalculatePriorLevel(uint16_t fiveQi)
{
   uint8_t fiveQiIdx;
   for(fiveQiIdx = 0; fiveQiIdx < MAX_5QI_TABLE_IDX; fiveQiIdx++)
   {
      /* Get the corresponding 5QI Index */
      if(fiveQiIdxTable[fiveQiIdx] == fiveQi)
         break;
   }

   return fiveQiTable[fiveQiIdx][1];
}

/*******************************************************************
 *
 * @brief Sort the logical channel according to priority level within a slice
 *
 * @details
 *
 *    Function : schSliceBasedSortLcByPriorLevel
 *
 *    Functionality: Sort the logical channel according to priority level within a slice
 *
 * @params[in] Pointer to LC Info Control Block List
 * @params[in] Sum of priority level of each LC within a slice
 * @return void
 *
 * ****************************************************************/
void schSliceBasedSortLcByPriorLevel(CmLListCp *lcInfoList, float_t totalPriorLevel)
{
   CmLList *outerNode = NULLP, *interNode, *minPriorNode = NULLP, *tempNode; 
   SchSliceBasedLcInfo *outerLcInfo = NULLP, *interLcInfo = NULLP, *minPriorLcInfo = NULLP;

   outerNode = lcInfoList->first;

   if(!outerNode)
   {
      DU_LOG("\nDennis  -->  schSliceBasedSortLcByPriorLevel(): LL is empty");
      return RFAILED;
   }
   else
   {
      while(outerNode)
      {
         outerLcInfo = (SchSliceBasedLcInfo *)outerNode->node;
         interNode = outerNode;

         minPriorNode = interNode;
         minPriorLcInfo = (SchSliceBasedLcInfo *)minPriorNode->node;

         /* Find the lowest priority level LC (highest priority) */
         while(interNode)
         {
            interLcInfo = (SchSliceBasedLcInfo *)interNode->node;

            if(interLcInfo->priorLevel <= minPriorLcInfo->priorLevel)
            {
               minPriorNode = interNode;
               minPriorLcInfo = interLcInfo;
            }
            
            interNode = interNode->next;
         }

         if(outerNode != minPriorNode)
         {
            /* Swapping minPriorNode and outerNode */
            tempNode = minPriorNode->next;
            minPriorNode->next = outerNode->next;
            outerNode->next = tempNode;
         
            if (minPriorNode->next != NULLP)
               minPriorNode->next->prev = minPriorNode;
            else
               lcInfoList->last = minPriorNode; /* ->next = NULLP means that this node is the last node */
 
            if (outerNode->next != NULLP)
               outerNode->next->prev = outerNode;
            else
               lcInfoList->last = outerNode;  /* ->next = NULLP means that this node is the last node */
         
            tempNode = minPriorNode->prev;
            minPriorNode->prev = outerNode->prev;
            outerNode->prev = tempNode;
         
            if (minPriorNode->prev != NULLP)
               minPriorNode->prev->next = minPriorNode;
            else
               lcInfoList->first = minPriorNode;  /* ->prev = NULLP means that this node is the first node */

            if (outerNode->prev != NULLP)
               outerNode->prev->next = outerNode;
            else
               lcInfoList->first = outerNode;  /* ->prev = NULLP means that this node is the first node */

            outerNode = minPriorNode;
            outerLcInfo = minPriorLcInfo;
         }
         outerLcInfo->weight = outerLcInfo->priorLevel / totalPriorLevel;
         outerNode = outerNode->next;
      }
   }
}

/*******************************************************************
 *
 * @brief Sort the UE according to the weight
 *
 * @details
 *
 *    Function : schSliceBasedSortLcByPriorLevel
 *
 *    Functionality: Sort the UE according to the weight
 *
 * @params[in] Pointer to UE List
 * @params[in] Sum of priority level of each UE
 * @return void
 *
 * ****************************************************************/
void schSliceBasedSortUeByWeight(SchCellCb *cellCb, CmLListCp *ueList, float_t totalWeight)
{
   CmLList *outerNode = NULLP, *interNode, *maxWeightNode = NULLP, *tempNode;
   uint8_t outerUeId, interUeId, maxWeightUeId; 
   SchSliceBasedUeCb *outerUe = NULLP, *interUe = NULLP, *maxWeightUe = NULLP;

   outerNode = ueList->first;

   if(!outerNode)
   {
      DU_LOG("\nDennis  -->  schSliceBasedSortLcByPriorLevel(): LL is empty");
      return RFAILED;
   }
   else
   {
      while(outerNode)
      {
         outerUeId = *(uint8_t *)outerNode->node;
         outerUe = (SchSliceBasedUeCb *)cellCb->ueCb[outerUeId-1].schSpcUeCb;

         interNode = outerNode;

         maxWeightNode = interNode;
         maxWeightUeId = *(uint8_t *)maxWeightNode->node;
         maxWeightUe = (SchSliceBasedUeCb *)cellCb->ueCb[maxWeightUeId-1].schSpcUeCb;

         /* Find the highest weight UE (highest priority) */
         while(interNode)
         {
            interUeId = *(uint8_t *)interNode->node;
            interUe = (SchSliceBasedUeCb *)cellCb->ueCb[interUeId-1].schSpcUeCb;

            if(interUe->weight >= maxWeightUe->weight)
            {
               maxWeightNode = interNode;
               maxWeightUe = interUe;
            }
            
            interNode = interNode->next;
         }

         if(outerNode != maxWeightNode)
         {
            /* Swapping maxWeightNode and outerNode */
            tempNode = maxWeightNode->next;
            maxWeightNode->next = outerNode->next;
            outerNode->next = tempNode;
         
            if (maxWeightNode->next != NULLP)
               maxWeightNode->next->prev = maxWeightNode;
            else
               ueList->last = maxWeightNode; /* ->next = NULLP means that this node is the last node */
 
            if (outerNode->next != NULLP)
               outerNode->next->prev = outerNode;
            else
               ueList->last = outerNode;  /* ->next = NULLP means that this node is the last node */
         
            tempNode = maxWeightNode->prev;
            maxWeightNode->prev = outerNode->prev;
            outerNode->prev = tempNode;
         
            if (maxWeightNode->prev != NULLP)
               maxWeightNode->prev->next = maxWeightNode;
            else
               ueList->first = maxWeightNode;  /* ->prev = NULLP means that this node is the first node */

            if (outerNode->prev != NULLP)
               outerNode->prev->next = outerNode;
            else
               ueList->first = outerNode;  /* ->prev = NULLP means that this node is the first node */

            outerNode = maxWeightNode;
            outerUe = maxWeightUe;
         }
         outerUe->prbWeight = outerUe->weight / totalWeight;
         outerNode = outerNode->next;
      }
   }
}

/*******************************************************************
 *
 * @brief DL scheduling
 *
 * @details
 *
 *    Function : schSliceBasedDlScheduling
 *
 *    Functionality: Beacuse each LC is associated with slice, this function
 *       fills and classifies the lcId of each UE into corresponding slice control block
 *
 * @params[in] Pointer to Cell Control Block
 *             Slot timing info
 *             UE ID
 *             Retransmission boolean
 *             The address of pointer to DL HARQ Process Control Block
 * @return true     - success
 *         false    - failure
 *
 * ****************************************************************/
bool schSliceBasedDlScheduling(SchCellCb *cell, SlotTimingInfo currTime, uint8_t ueId, bool isRetx, SchDlHqProcCb **hqP)
{
   uint8_t pdschNumSymbols = 0, pdschStartSymbol = 0;
   uint16_t startPrb = 0;
   uint16_t maxFreePRB = 0;
   uint16_t totalRemainingPrb = 0;
   uint16_t currSliceCnt = 0;
   SchUeCb *ueCb = NULLP;
   SlotTimingInfo pdcchTime, pdschTime, pucchTime;
   DlMsgSchInfo *dciSlotAlloc = NULLP;
   SchSliceBasedCellCb *schSpcCell = NULLP;
   CmLList *sliceCbNode = NULLP; 
   SchSliceBasedSliceCb *sliceCb = NULLP;
/*JOJO: Declare the parameters which are used to store HARQ list and transmission list for multiple UEs per TTI.*/
   CmLList *ueNode, *ueNodeNext = NULLP;
   CmLListCp ueDlNewTransmission;
   CmLListCp ueDlRetransmission;
   SchDlHqProcCb  *ueNewHarqList[MAX_NUM_UE];
   CmLList *node;
   uint8_t UEWillBeScheduled = 0;
   uint8_t UENeedToBeScheduled = 0;

   struct timespec start, start2, end;
   double processTime;

   // memset(&ueNewHarqList, 0, MAX_NUM_UE * sizeof(SchDlHqProcCb*));
   schSpcCell = (SchSliceBasedCellCb *)cell->schSpcCell;
   cmLListInit(&ueDlNewTransmission);
   cmLListInit(&ueDlRetransmission);

   if(cell->boIndBitMap != 0)
      DU_LOG("\nJOJO --> BO Indication Bitmap: %d", cell->boIndBitMap);
   /*JOJO: Loop over each UE in UE to be scheduled list for DL transmission.*/
   ueNode = schSpcCell->ueToBeScheduled.first;

   /*JOJO: SU scheduling per TTI*/
   // if(ueNode) 
   // {
   //    uint8_t ueId = *(uint8_t *)(ueNode->node);
   //    uint8_t *ueIdToAdd;
   //    SchSliceBasedUeCb *schSpcUeCb = (SchSliceBasedUeCb *)cell->ueCb[ueId-1].schSpcUeCb;

   //    ueCb = &cell->ueCb[ueId-1];
   //    node = NULLP;

   //    if(schSpcUeCb)
   //       node = schSpcUeCb->hqRetxCb.dlRetxHqList.first;
   //    if(node != NULLP)
   //    {
   //       if(ueId > UEWillBeScheduled)
   //          UEWillBeScheduled = ueId;
   //       UENeedToBeScheduled++;
   //       schSpcUeCb->isDlMsgPending = true;
   //       schSpcUeCb->isDlMsgScheduled = false;
   //       /*JOJO: Check if it can find K0, K1.*/
   //       if(findValidK0K1Value(cell, currTime, ueId, ueCb->k0K1TblPrsnt,\
   //          &pdschStartSymbol, &pdschNumSymbols, &pdcchTime, &pdschTime, &pucchTime, TRUE, *hqP) == true )
   //       {
   //          SCH_ALLOC(ueIdToAdd, sizeof(uint8_t));
   //          *ueIdToAdd = ueId;
   //          addNodeToLList(&ueDlRetransmission, ueIdToAdd, NULLP);
   //       }
   //          if(cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId-1] == NULL)
   //          {
   //             SCH_ALLOC(dciSlotAlloc, sizeof(DlMsgSchInfo));
   //             if(!dciSlotAlloc)
   //             {
   //                DU_LOG("\nERROR  -->  SCH : Memory Allocation failed for ded DL msg alloc");
   //                return false;
   //             }
   //             cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId -1] = dciSlotAlloc;
   //             memset(dciSlotAlloc, 0, sizeof(DlMsgSchInfo));
   //          }
   //    }
   //    else
   //    {
   //       if((cell->boIndBitMap) & (1<<ueId))
   //       {
   //          UENeedToBeScheduled++;
   //          schSpcUeCb->isDlMsgPending = true;
   //          schSpcUeCb->isDlMsgScheduled = false;
   //          /*JOJO: Check if it can find K0, K1 and free HARQ process.*/
   //          if(schDlGetAvlHqProcess(cell, ueCb, hqP) == ROK &&\
   //          findValidK0K1Value(cell, currTime, ueId, ueCb->k0K1TblPrsnt,\
   //             &pdschStartSymbol, &pdschNumSymbols, &pdcchTime, &pdschTime, &pucchTime, FALSE, *hqP) == true)
   //          {
   //             UEWillBeScheduled = ueId;
   //             ueNewHarqList[ueId-1] = *hqP; /*JOJO: Keep HARQ list for new transmission.*/
   //             SCH_ALLOC(ueIdToAdd, sizeof(uint8_t));
   //             *ueIdToAdd = ueId;
   //             addNodeToLList(&ueDlNewTransmission, ueIdToAdd, NULLP);
   //          }
   //          /* Allocate PDCCH and PDSCH resources for the ue */
   //          if(cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId-1] == NULL)
   //          {
   //             SCH_ALLOC(dciSlotAlloc, sizeof(DlMsgSchInfo));
   //             if(!dciSlotAlloc)
   //             {
   //                DU_LOG("\nERROR  -->  SCH : Memory Allocation failed for ded DL msg alloc");
   //                return false;
   //             }
   //             cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId -1] = dciSlotAlloc;
   //             memset(dciSlotAlloc, 0, sizeof(DlMsgSchInfo));
   //          }
   //       }
   //    }
   // }

   /*JOJO: MU scheduling per TTI*/
   while(ueNode)
   {
      uint8_t ueId = *(uint8_t *)(ueNode->node);
      uint8_t *ueIdToAdd;
      SchSliceBasedUeCb *schSpcUeCb = (SchSliceBasedUeCb *)cell->ueCb[ueId-1].schSpcUeCb;

      ueCb = &cell->ueCb[ueId-1];
      node = NULLP;

      if(schSpcUeCb)
         node = schSpcUeCb->hqRetxCb.dlRetxHqList.first;
      if(node != NULLP)
      {
         if(ueId > UEWillBeScheduled)
            UEWillBeScheduled = ueId;
         UENeedToBeScheduled++;
         schSpcUeCb->isDlMsgPending = true;
         schSpcUeCb->isDlMsgScheduled = false;
         /*JOJO: Check if it can find K0, K1.*/
         if(findValidK0K1Value(cell, currTime, ueId, ueCb->k0K1TblPrsnt,\
            &pdschStartSymbol, &pdschNumSymbols, &pdcchTime, &pdschTime, &pucchTime, TRUE, *hqP) == true )
         {
            SCH_ALLOC(ueIdToAdd, sizeof(uint8_t));
            *ueIdToAdd = ueId;
            addNodeToLList(&ueDlRetransmission, ueIdToAdd, NULLP);
         }
      }
      else
      {
         if((cell->boIndBitMap) & (1<<ueId))
         {
            UENeedToBeScheduled++;
            schSpcUeCb->isDlMsgPending = true;
            schSpcUeCb->isDlMsgScheduled = false;
            /*JOJO: Check if it can find K0, K1 and free HARQ process.*/
            if(schDlGetAvlHqProcess(cell, ueCb, hqP) == ROK &&\
            findValidK0K1Value(cell, currTime, ueId, ueCb->k0K1TblPrsnt,\
               &pdschStartSymbol, &pdschNumSymbols, &pdcchTime, &pdschTime, &pucchTime, FALSE, *hqP) == true)
            {
               UEWillBeScheduled = ueId;
               ueNewHarqList[ueId-1] = *hqP; /*JOJO: Keep HARQ list for new transmission.*/
               SCH_ALLOC(ueIdToAdd, sizeof(uint8_t));
               *ueIdToAdd = ueId;
               addNodeToLList(&ueDlNewTransmission, ueIdToAdd, NULLP);
            }

            /* JOJO: Allocate PDCCH and PDSCH resources for the ue (move from function schSliceBasedDlIntraSliceScheduling) */
            if(cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId-1] == NULL)
            {
               SCH_ALLOC(dciSlotAlloc, sizeof(DlMsgSchInfo));
               if(!dciSlotAlloc)
               {
                  DU_LOG("\nERROR  -->  SCH : Memory Allocation failed for ded DL msg alloc");
                  return false;
               }
               cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId -1] = dciSlotAlloc;
               memset(dciSlotAlloc, 0, sizeof(DlMsgSchInfo));
            }
         }
      }
      ueNode = ueNode->next;
   }

   /*JOJO: Check if list of new transmission and retransmission is NULL or not.*/
   if(ueDlNewTransmission.first == NULLP && ueDlRetransmission.first == NULLP)
   {
      return false;
   }
   else
   {
      DU_LOG("\nJOJO --> %d UEs need to be scheduled for DL.", UENeedToBeScheduled);
   }

   schSpcCell = (SchSliceBasedCellCb *)cell->schSpcCell;
   sliceCbNode = schSpcCell->sliceCbList.first;

   maxFreePRB = searchLargestFreeBlock((ueNewHarqList[UEWillBeScheduled-1])->hqEnt->cell, pdschTime, &startPrb, DIR_DL); /*JOJO: Choose one of UE for searching the largest PRB free block.*/
   totalRemainingPrb = maxFreePRB;

   clock_gettime(1, &start);
   if (isRetx == FALSE)
   {

      while(sliceCbNode)
      {
         sliceCb = (SchSliceBasedSliceCb *)sliceCbNode->node;
         
#ifdef SCH_MULTI_THREAD

         /* Pack the argument for thread function */
         schSpcCell->threadArg[currSliceCnt]->cell = cell;
         schSpcCell->threadArg[currSliceCnt]->pdcchTime = &pdcchTime;
         schSpcCell->threadArg[currSliceCnt]->pdschNumSymbols = pdschNumSymbols;
         schSpcCell->threadArg[currSliceCnt]->totalRemainingPrb = &totalRemainingPrb;
         schSpcCell->threadArg[currSliceCnt]->maxFreePRB = &maxFreePRB;
         schSpcCell->threadArg[currSliceCnt]->sliceCb = sliceCb;
         schSpcCell->threadArg[currSliceCnt]->ueDlNewTransmission= &ueDlNewTransmission;

         /* Run the intra-slice scheduling with multi-thread feature */

         *schSpcCell->threadArg[currSliceCnt]->triggerFlag = 1;

         currSliceCnt++;
         sliceCbNode = sliceCbNode->next;
      }

      clock_gettime(1, &start2);

      /* Wait for every thread finish the intra-slice scheduling */
      currSliceCnt = 1;
      DU_LOG("\nDennis  -->  waiting for intra-slice scheduling");
      while(currSliceCnt)
      {
         currSliceCnt = 0;
         for(int sliceCnt=0; sliceCnt < schSpcCell->sliceCbList.count; sliceCnt++)
         {
            if(*schSpcCell->threadArg[sliceCnt]->triggerFlag)
            {
               currSliceCnt++;
            }
         }
      }

      clock_gettime(1, &end);
      processTime = (end.tv_sec - start2.tv_sec) + (end.tv_nsec - start2.tv_nsec) / BILLION_NUM;
      DU_LOG("\nDennis  -->  Measurement : Processing Time of all pthread_join(): %f sec", processTime);
#else

         if(schSliceBasedDlIntraSliceScheduling(cell, pdcchTime, pdschNumSymbols, &totalRemainingPrb, maxFreePRB, sliceCb, &ueDlNewTransmission) != ROK)
         {
            DU_LOG("\nDennis --> DL Intra Slice Scheduling Failed");
            return false;
         }

         sliceCbNode = sliceCbNode->next;
      }
#endif

   }  

   else
   {
         /* Allocate PDCCH and PDSCH resources for the ue */
      if(cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId-1] == NULL)
      {
         SCH_ALLOC(dciSlotAlloc, sizeof(DlMsgSchInfo));
         if(!dciSlotAlloc)
         {
            DU_LOG("\nERROR  -->  SCH : Memory Allocation failed for ded DL msg alloc");
            return false;
         }
         cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId -1] = dciSlotAlloc;
         memset(dciSlotAlloc, 0, sizeof(DlMsgSchInfo));
      }
   }

   clock_gettime(1, &end);
   processTime = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / BILLION_NUM;
   DU_LOG("\nDennis  -->  Measurement : Processing Time of all intra-slice scheduling: %f sec", processTime);

   if(schSliceBasedDlFinalScheduling(cell, pdschTime, pdcchTime, pucchTime, pdschStartSymbol, pdschNumSymbols, &ueDlNewTransmission, isRetx, ueNewHarqList, totalRemainingPrb, startPrb) != ROK)
   {
      DU_LOG("\nDennis --> DL Final Scheduling Failed");
      return false;
   }

   /* JOJO: Traverse DL scheduling list, release new transmission list.*/
   int UEScheduled = 0;
   ueNode = ueDlNewTransmission.first;
   while(ueNode)
   {
      uint8_t ueId = *(uint8_t *)(ueNode->node);
      SchSliceBasedUeCb *schSpcUeCb = (SchSliceBasedUeCb *)cell->ueCb[ueId-1].schSpcUeCb;

      ueNodeNext = ueNode->next;
      /*JOJO: If UE is not scheduled, then release the new allocated HARQ.*/
      if(!schSpcUeCb->isDlMsgScheduled)
      {
         DU_LOG("\nJOJO --> UE id: %d, releasing HARQ.", ueId);
         schDlReleaseHqProcess(ueNewHarqList[ueId-1]);
      }
      else
      {
         DU_LOG("\nJOJO --> UE id: %d, is scheduled.", ueId);
         UEScheduled++;
#ifdef NR_DRX
         schHdlDrxInActvStrtTmr(cell, &cell->ueCb[ueId-1], PHY_DELTA_DL + SCHED_DELTA);
#endif
      }

      SCH_FREE(ueNode->node, sizeof(uint8_t));
      cmLListDelFrm(&ueDlNewTransmission, ueNode);
      SCH_FREE(ueNode, sizeof(CmLList));

      ueNode = ueNodeNext;
   }

   /* JOJO: Traverse DL scheduling list, release retransmission list.*/
   ueNode = ueDlRetransmission.first;
   while(ueNode)
   {
      uint8_t ueId = *(uint8_t *)(ueNode->node);
      SchSliceBasedUeCb *schSpcUeCb = (SchSliceBasedUeCb *)cell->ueCb[ueId-1].schSpcUeCb;

      ueNodeNext = ueNode->next;
      /*JOJO: If UE is scheduled, then remove UE from retransmission list.*/
      if(schSpcUeCb->isDlMsgScheduled)
      {
         UEScheduled++;
#ifdef NR_DRX 
         schDrxStopDlHqRetxTmr(cell, &cell->ueCb[ueId-1], ((SchDlHqProcCb**) &(node->node)));
#endif
         schSliceBasedRemoveFrmDlHqRetxList(&cell->ueCb[ueId-1], node);
      }
      
      schSpcUeCb->isDlMsgPending = false;
      schSpcUeCb->isDlMsgScheduled = false;

      SCH_FREE(ueNode->node, sizeof(uint8_t));
      cmLListDelFrm(&ueDlRetransmission, ueNode);
      SCH_FREE(ueNode, sizeof(CmLList));

      ueNode = ueNodeNext;
   }
   
   DU_LOG("\nJOJO --> %d UEs are scheduled in this slot.", UEScheduled);
   cmLListDeleteLList(&ueDlNewTransmission);
   cmLListDeleteLList(&ueDlRetransmission);

   return true;
}

/*******************************************************************
 *
 * @brief Intra-slice scheduling
 *
 * @details
 *
 *    Function : schSliceBasedDlIntraSliceScheduling
 *
 *    Functionality: Beacuse each LC is associated with slice, this function
 *       fills and classifies the lcId of each UE into corresponding slice control block
 *
 * @params[in] Pointer to Cell Control Block
 *             Current Slot timing info
 *             PDCCH Slot timing info
 *             Number of PDSCH Symbols
 *             Max FreePRB Block
 *             Pointer to Slice Control Block
 *             UE DL New Transmission LL
 * @return ROK     - success
 *         RFAILED - failure
 *
 * ****************************************************************/
uint8_t schSliceBasedDlIntraSliceScheduling(SchCellCb *cellCb, SlotTimingInfo pdcchTime, uint8_t pdschNumSymbols, \
                                            uint16_t *totalRemainingPrb, uint16_t maxFreePRB, SchSliceBasedSliceCb *sliceCb,\
                                             CmLListCp *ueDlNewTransmission)
{  
   uint16_t crnti = 0;
   uint16_t minimumPrb = 0, remainingPrb = 0;
   SchUeCb *ueCb = NULLP;
   uint8_t  ueId;
   CmLList *ueNode;
   DlMsgSchInfo *dciSlotAlloc;
   float_t totalUeWeight = 0;
   SchSliceBasedUeCb *ueSliceBasedCb = NULLP;

   /* Calculate the slice PRB quota according to RRMPolicyRatio and MaxFreePRB */
   sliceCb->dedicatedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.dedicatedRatio)*(maxFreePRB))/100);
   sliceCb->prioritizedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.minRatio - sliceCb->rrmPolicyRatioInfo.dedicatedRatio)\
                                             *(maxFreePRB))/100);
   sliceCb->sharedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.maxRatio - sliceCb->rrmPolicyRatioInfo.minRatio)\
                                          *(maxFreePRB))/100);
   minimumPrb = sliceCb->dedicatedPrb + sliceCb->prioritizedPrb;

#ifdef SLICE_BASED_DEBUG_LOG
   DU_LOG("\n\n===============Dennis  -->  SCH Intra-Slice : Start to run IntraSliceScheduling [SST:%d, MinimumPRB Quota:%d]===============", \
   sliceCb->snssai.sst, minimumPrb);
#endif

   ueNode = ueDlNewTransmission->first;

   while(ueNode)
   {
      ueId = *(uint8_t *)(ueNode->node);
      ueCb = &cellCb->ueCb[ueId-1];
      ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;

      /* Sum the weight of each UE */
      totalUeWeight += ueSliceBasedCb->weight;
   
      /* Update the requested BO of each LC in current slice */
      schSliceBasedUpdateLcListReqBo(&sliceCb->lcInfoList[ueId-1], ueCb, DIR_DL);
      ueNode = ueNode->next;
   }

   if(sliceCb->algorithm == RR)
   {
      if(minimumPrb != 0)
      {
         remainingPrb = minimumPrb;            
         schSliceBasedRoundRobinAlgo(cellCb, ueDlNewTransmission, sliceCb->lcInfoList, \
                                    pdschNumSymbols, &remainingPrb, sliceCb->algoMethod, NULLP);
      }

      sliceCb->allocatedPrb = minimumPrb - remainingPrb;

#ifdef SLICE_BASED_DEBUG_LOG
      DU_LOG("\nDennis  -->  SCH Intra-Slice Result : [SST: %d, Allocated PRB: %d, Unallocated PRB: %d, Algo: RR]", sliceCb->snssai.sst, \
               sliceCb->allocatedPrb, remainingPrb);
#endif
   }
   else if(sliceCb->algorithm == WFQ)
   {
      /* Sort the UE list in terms of the weight */
      /* This function should be moved to schSliceBasedDlScheduling() when go through the UE list (for Jojo)*/
      schSliceBasedSortUeByWeight(cellCb, ueDlNewTransmission, totalUeWeight);

      if(minimumPrb != 0)
      {
         remainingPrb = minimumPrb;            
         schSliceBasedWeightedFairQueueAlgo(cellCb, ueDlNewTransmission, sliceCb->lcInfoList, \
                                    pdschNumSymbols, &remainingPrb, sliceCb->algoMethod, NULLP);
      }

      sliceCb->allocatedPrb = minimumPrb - remainingPrb;

#ifdef SLICE_BASED_DEBUG_LOG
      DU_LOG("\nDennis  -->  SCH Intra-Slice Result : [SST: %d, Allocated PRB: %d, Unallocated PRB: %d, Algo: WFQ]", sliceCb->snssai.sst, \
               sliceCb->allocatedPrb, remainingPrb);      
#endif
   }
   else
   {
      DU_LOG("\nDennis  -->  In schSliceBasedDlIntraSliceScheduling() : Invalid Scheduling Algorithm");
      return;
   }
   
   
   /* Follow the rules of prioritized resource and dedicated resource */
   if(sliceCb->allocatedPrb > sliceCb->dedicatedPrb)
   {
      *totalRemainingPrb = *totalRemainingPrb - sliceCb->allocatedPrb;
   }
   else
   {
      *totalRemainingPrb = *totalRemainingPrb - sliceCb->dedicatedPrb;
   }

   return ROK;
}

/*******************************************************************
 *
 * @brief Intra-slice scheduling for multi-thread feature
 *
 * @details
 *
 *    Function : schSliceBasedDlIntraSliceThreadScheduling
 *
 *    Functionality: Beacuse each LC is associated with slice, this function
 *       fills and classifies the lcId of each UE into corresponding slice control block
 *
 * @params[in] Pointer to thread argument
 * @return void
 *
 * ****************************************************************/
void *schSliceBasedDlIntraSliceThreadScheduling(void *threadArg)
{
   SchSliceBasedDlThreadArg *dlThreadArg;
   dlThreadArg = (SchSliceBasedDlThreadArg *)threadArg;

   while(1)
   {
      if(*dlThreadArg->triggerFlag)
      {
         uint16_t crnti = 0;
         uint16_t minimumPrb = 0, remainingPrb = 0;
         SchUeCb *ueCb = NULLP;
         uint8_t  ueId;
         CmLList *ueNode;
         DlMsgSchInfo *dciSlotAlloc;
         float_t totalUeWeight = 0;
         SchSliceBasedUeCb *ueSliceBasedCb = NULLP;

         SchCellCb *cellCb;
         SlotTimingInfo pdcchTime;
         uint8_t pdschNumSymbols;
         uint16_t *totalRemainingPrb;
         uint16_t maxFreePRB;
         SchSliceBasedSliceCb *sliceCb;
         CmLListCp *ueDlNewTransmission;

         // struct timespec start, end;
         // double processTime;
         // clock_gettime(1, &start);

         cellCb = dlThreadArg->cell;
         pdcchTime = *dlThreadArg->pdcchTime;
         pdschNumSymbols = dlThreadArg->pdschNumSymbols;
         totalRemainingPrb = dlThreadArg->totalRemainingPrb;
         maxFreePRB = *dlThreadArg->maxFreePRB;
         sliceCb = dlThreadArg->sliceCb;
         ueDlNewTransmission = dlThreadArg->ueDlNewTransmission;

         /* Calculate the slice PRB quota according to RRMPolicyRatio and MaxFreePRB */
         sliceCb->dedicatedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.dedicatedRatio)*(maxFreePRB))/100);
         sliceCb->prioritizedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.minRatio - sliceCb->rrmPolicyRatioInfo.dedicatedRatio)\
                                                   *(maxFreePRB))/100);
         sliceCb->sharedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.maxRatio - sliceCb->rrmPolicyRatioInfo.minRatio)\
                                                *(maxFreePRB))/100);
         minimumPrb = sliceCb->dedicatedPrb + sliceCb->prioritizedPrb;

   #ifdef SLICE_BASED_DEBUG_LOG
         DU_LOG("\n\n===============Dennis  -->  SCH Intra-Slice : Start to run IntraSliceScheduling [SST:%d, MinimumPRB Quota:%d]===============", \
         sliceCb->snssai.sst, minimumPrb);
   #endif

         ueNode = ueDlNewTransmission->first;

         while(ueNode)
         {
            ueId = *(uint8_t *)(ueNode->node);
            ueCb = &cellCb->ueCb[ueId-1];
            ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;

            /* Sum the weight of each UE */
            totalUeWeight += ueSliceBasedCb->weight;
         
            /* Update the requested BO of each LC in current slice */
            schSliceBasedUpdateLcListReqBo(&sliceCb->lcInfoList[ueId-1], ueCb, DIR_DL);
            ueNode = ueNode->next;
         }

         if(sliceCb->algorithm == RR)
         {
            if(minimumPrb != 0)
            {
               remainingPrb = minimumPrb;            
               schSliceBasedRoundRobinAlgo(cellCb, ueDlNewTransmission, sliceCb->lcInfoList, \
                                          pdschNumSymbols, &remainingPrb, sliceCb->algoMethod, NULLP);
            }

            sliceCb->allocatedPrb = minimumPrb - remainingPrb;

   #ifdef SLICE_BASED_DEBUG_LOG
            DU_LOG("\nDennis  -->  SCH Intra-Slice Result : [SST: %d, Allocated PRB: %d, Unallocated PRB: %d, Algo: RR]", sliceCb->snssai.sst, \
                     sliceCb->allocatedPrb, remainingPrb);
   #endif
         }
         else if(sliceCb->algorithm == WFQ)
         {
            /* Sort the UE list in terms of the weight */
            /* This function should be moved to schSliceBasedDlScheduling() when go through the UE list (for Jojo)*/
            schSliceBasedSortUeByWeight(cellCb, ueDlNewTransmission, totalUeWeight);

            if(minimumPrb != 0)
            {
               remainingPrb = minimumPrb;            
               schSliceBasedWeightedFairQueueAlgo(cellCb, ueDlNewTransmission, sliceCb->lcInfoList, \
                                          pdschNumSymbols, &remainingPrb, sliceCb->algoMethod, NULLP);
            }

            sliceCb->allocatedPrb = minimumPrb - remainingPrb;

   #ifdef SLICE_BASED_DEBUG_LOG
            DU_LOG("\nDennis  -->  SCH Intra-Slice Result : [SST: %d, Allocated PRB: %d, Unallocated PRB: %d, Algo: WFQ]", sliceCb->snssai.sst, \
                     sliceCb->allocatedPrb, remainingPrb);      
   #endif
         }
         else
         {
            DU_LOG("\nDennis  -->  In schSliceBasedDlIntraSliceScheduling() : Invalid Scheduling Algorithm");
            *dlThreadArg->triggerFlag = 0;
         }
         
         
         /* Follow the rules of prioritized resource and dedicated resource */
         if(sliceCb->allocatedPrb > sliceCb->dedicatedPrb)
         {
            *totalRemainingPrb = *totalRemainingPrb - sliceCb->allocatedPrb;
         }
         else
         {
            *totalRemainingPrb = *totalRemainingPrb - sliceCb->dedicatedPrb;
         }
            // clock_gettime(1, &end);
            // processTime = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / BILLION_NUM;
            // DU_LOG("\nDennis  -->  Measurement : Processing Time of per intra-slice scheduling: %f sec", processTime);
         *dlThreadArg->triggerFlag = 0;

         usleep(500);
      }
   }
}

/*******************************************************************
 *
 * @brief Final scheduling
 *
 * @details
 *
 *    Function : schSliceBasedDlFinalScheduling
 *
 *    Functionality: 
 *             [Step1] Allocate the remaining resource from intra-slice scheduling to default slice
 *             [Step2] Allocate the remaining resource from intra-slice scheduling to dedicated slice
 *             [Step3] Fill the DCI according to the scheduling result
 *
 * @params[in] Pointer to Cell Control Block
 *             Current Slot timing info
 *             PDCCH Slot timing info
 *             Number of PDSCH Symbols
 *             Max FreePRB Block
 *             Pointer to Slice Control Block
 *             UE ID
 *             Retranmission Flag
 *             Double Pointer to HARQ DL Process Controll Block
 *             Remaining PRBs after intra-slice scheduling
 *             Start PRB Index
 * @return ROK     - success
 *         RFAILED - failure
 *
 * ****************************************************************/
uint8_t schSliceBasedDlFinalScheduling(SchCellCb *cellCb, SlotTimingInfo pdschTime, SlotTimingInfo pdcchTime, \
                  SlotTimingInfo pucchTime, uint8_t pdschStartSymbol, uint8_t pdschNumSymbols, CmLListCp *ueDlNewTransmission, \
                  bool isRetx, SchDlHqProcCb **ueNewHarqList, uint16_t remainingPrb, uint16_t startPrb)
{  
   uint8_t lcIdx = 0;
   uint16_t mcsIdx = 0;
   uint16_t crnti = 0;
   uint8_t  ueId;
   uint16_t availablePrb = 0;
   uint32_t accumalatedSize = 0;
   uint16_t numPRB = 0;
   SchUeCb *ueCb = NULLP;
   DlMsgSchInfo *dciSlotAlloc, *dlMsgAlloc;
   SchSliceBasedCellCb *schSpcCell = NULLP;
   CmLList *sliceCbNode = NULLP;
   CmLList *ueNode;
   CmLListCp defLcList;
   SchSliceBasedSliceCb *sliceCb = NULLP;
   SchSliceBasedUeCb *ueSliceBasedCb = NULLP;

#ifdef SLICE_BASED_DEBUG_LOG  
   DU_LOG("\n\n===============Dennis  -->  SCH Final : Start to run final-scheduling [Remaining PRB is:%d]===============", remainingPrb);
#endif

   ueNode = ueDlNewTransmission->first;
   while(ueNode)
   {  
      ueId = *(uint8_t *)(ueNode->node);
      ueCb = &cellCb->ueCb[ueId-1];
      ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;

      mcsIdx = ueCb->ueCfg.dlModInfo.mcsIndex;
      if(remainingPrb != 0)
      {
         cmLListInit(&defLcList);

         /* Allocate the remaining PRB to default slice */
         for(lcIdx = 0; lcIdx < MAX_NUM_LC; lcIdx++)
         {
            if(ueCb->dlInfo.dlLcCtxt[lcIdx].snssai == NULLP && ueCb->dlInfo.dlLcCtxt[lcIdx].bo != 0)
            {
               /*[Step2]: Update the reqPRB and Payloadsize for this LC in the appropriate List*/
               if(updateLcListReqPRB(&defLcList, ueCb->dlInfo.dlLcCtxt[lcIdx].lcId,\
                        (ueCb->dlInfo.dlLcCtxt[lcIdx].bo + MAC_HDR_SIZE)) != ROK)
               {
                  DU_LOG("\nERROR  --> SCH : Updation in LC List Failed");
                  /* Free the dl ded msg info allocated in macSchDlRlcBoInfo */
                  // if(!dciSlotAlloc->dlMsgPdschCfg)
                  // {
                  //    SCH_FREE(dciSlotAlloc, sizeof(DlMsgSchInfo));
                  //    (*hqP)->hqEnt->cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueCb->ueId -1] = NULL;
                  // }
               }
               else
               {
#ifdef SLICE_BASED_DEBUG_LOG
                  DU_LOG("\nDennis  -->  SCH : Append LC to default LL [LCID, reqBO] [%d, %d]", lcIdx, \
                  ueCb->dlInfo.dlLcCtxt[lcIdx].bo + MAC_HDR_SIZE);
#endif
               }
            }
         }

         availablePrb = remainingPrb;
         schSliceBasedPrbAllocUsingRRMPolicy(&defLcList, mcsIdx, pdschNumSymbols, &availablePrb, &ueSliceBasedCb->isTxPayloadLenAdded, NULLP);

#ifdef SLICE_BASED_DEBUG_LOG
         DU_LOG("\nDennis  -->  SCH Final Default Slice : [UE ID: %d, Allocated PRB: %d, Remaining PRB: %d]", ueId, remainingPrb - availablePrb, availablePrb);
#endif
         remainingPrb = availablePrb;
      }
      ueNode = ueNode->next;
   }

   /* Allocate the remaining PRB to slice according to slice priority
    * I assume that slice priority is implicit in the RAN Control indication from RIC */
   schSpcCell = (SchSliceBasedCellCb *)cellCb->schSpcCell;
   sliceCbNode = schSpcCell->sliceCbList.first;

   while(sliceCbNode)
   {
      sliceCb = (SchSliceBasedSliceCb *)sliceCbNode->node;

      if(sliceCb->algorithm == RR)
      {   
#ifdef SLICE_BASED_DEBUG_LOG
         DU_LOG("\n\n===============Dennis  -->  SCH Final : Start to run FinalScheduling [SST:%d, Shared PRB Quota:%d, Remaining PRB:%d, Algo: RR]===============", \
         sliceCb->snssai.sst, sliceCb->sharedPrb, remainingPrb);
#endif

         if(remainingPrb != 0)
         {
            if(sliceCb->sharedPrb >= remainingPrb)
            {
               availablePrb = remainingPrb; 
               schSliceBasedRoundRobinAlgo(cellCb, ueDlNewTransmission, sliceCb->lcInfoList, \
                                    pdschNumSymbols, &availablePrb, sliceCb->algoMethod, NULLP);
               sliceCb->allocatedPrb += remainingPrb - availablePrb;
               remainingPrb = availablePrb;
            }
            else
            {
               availablePrb = sliceCb->sharedPrb;
               schSliceBasedRoundRobinAlgo(cellCb, ueDlNewTransmission, sliceCb->lcInfoList, \
                                    pdschNumSymbols, &availablePrb, sliceCb->algoMethod, NULLP);
               sliceCb->allocatedPrb += sliceCb->sharedPrb - availablePrb;
               remainingPrb = remainingPrb - (sliceCb->sharedPrb - availablePrb);
            }
         }
      }
      else if(sliceCb->algorithm == WFQ)
      {
#ifdef SLICE_BASED_DEBUG_LOG
         DU_LOG("\n\n===============Dennis  -->  SCH Final : Start to run FinalScheduling [SST:%d, Shared PRB Quota:%d, Remaining PRB:%d, Algo: WFQ]===============", \
         sliceCb->snssai.sst, sliceCb->sharedPrb, remainingPrb);
#endif

         if(remainingPrb != 0)
         {
            if(sliceCb->sharedPrb >= remainingPrb)
            {
               availablePrb = remainingPrb; 
               schSliceBasedWeightedFairQueueAlgo(cellCb, ueDlNewTransmission, sliceCb->lcInfoList, \
                                    pdschNumSymbols, &availablePrb, sliceCb->algoMethod, NULLP);
               sliceCb->allocatedPrb += remainingPrb - availablePrb;
               remainingPrb = availablePrb;
            }
            else
            {
               availablePrb = sliceCb->sharedPrb;
               schSliceBasedWeightedFairQueueAlgo(cellCb, ueDlNewTransmission, sliceCb->lcInfoList, \
                                    pdschNumSymbols, &availablePrb, sliceCb->algoMethod, NULLP);
               sliceCb->allocatedPrb += sliceCb->sharedPrb - availablePrb;
               remainingPrb = remainingPrb - (sliceCb->sharedPrb - availablePrb);
            }
         }
      }
      else
      {
         DU_LOG("\nDennis  -->  In schSliceBasedDlFinalScheduling() : Invalid Scheduling Algorithm");
         return;
      }
#ifdef SLICE_BASED_DEBUG_LOG
      DU_LOG("\nDennis  -->  SCH Final Scheduling Result : [SST: %d, Allocated PRB: %d, Remaining PRB: %d]", sliceCb->snssai.sst, \
             sliceCb->allocatedPrb, remainingPrb);
#endif

      sliceCbNode = sliceCbNode->next;
   }

   /* TODO: Although it has the loop, but HARQ List part should be checked */
   int dataSizeEachUE[MAX_NUM_UE] = {};
   int totalDataSizePerTTI = 0;
   ueNode = ueDlNewTransmission->first;
   while(ueNode)
   {
      ueId = *(uint8_t *)(ueNode->node);
      SchDlHqProcCb **hqP = &ueNewHarqList[ueId-1];
      ueCb = &cellCb->ueCb[ueId-1];
      ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;
      GET_CRNTI(crnti,ueId);
      accumalatedSize = 0;

      /* Allocate PDCCH and PDSCH resources for the ue */
      if((*hqP)->hqEnt->cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueCb->ueId -1] == NULL)
      {
         SCH_ALLOC(dciSlotAlloc, sizeof(DlMsgSchInfo));
         if(!dciSlotAlloc)
         {
            DU_LOG("\nERROR  -->  SCH : Memory Allocation failed for ded DL msg alloc");
            return false;
         }
         (*hqP)->hqEnt->cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueCb->ueId -1] = dciSlotAlloc;
         memset(dciSlotAlloc, 0, sizeof(DlMsgSchInfo));
      }
      else
      {
         dciSlotAlloc = (*hqP)->hqEnt->cell->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueCb->ueId -1];
      }

      /* Dl ded Msg info is copied, this was earlier filled in macSchDlRlcBoInfo */
      fillDlMsgInfo(dciSlotAlloc, crnti, isRetx, *hqP);
      dciSlotAlloc->transportBlock[0].ndi = isRetx;

      /*[Step5]:Traverse each LCID in LcList to calculate the exact Scheduled Bytes
      * using allocated BO per LC and Update dlMsgAlloc BO report for MAC */
      sliceCbNode = schSpcCell->sliceCbList.first;

      if (isRetx == FALSE)
      {
         /* Update default slice allocation result to DCI in terms of LC */
         if(defLcList.count != 0)
            schSliceBasedUpdateGrantSizeForBoRpt(&defLcList, dciSlotAlloc, NULLP, &accumalatedSize, FALSE);
         
         /* Update dedicated slice allocation result to DCI in terms of LC */
         while(sliceCbNode)
         {
            sliceCb = (SchSliceBasedSliceCb *)sliceCbNode->node;
            
            if(sliceCb->lcInfoList[ueId-1].count != 0)
               schSliceBasedUpdateGrantSizeForBoRpt(&sliceCb->lcInfoList[ueId-1], dciSlotAlloc, NULLP, &accumalatedSize, TRUE);
               
            sliceCbNode = sliceCbNode->next;
         }
      }
      else
      {
         accumalatedSize = (*hqP)->tbInfo[0].tbSzReq;
      }

      /*Below case will hit if NO LC(s) are allocated due to resource crunch*/
      if(!accumalatedSize)
      {
         if(remainingPrb == 0)
         {
            DU_LOG("\nERROR  --> SCH : NO FREE PRB!!");
         }
         else
         {
            /*Schedule the LC for next slot*/
            DU_LOG("\nDEBUG  -->  SCH : No LC has been scheduled");
         }
         /* Not Freeing dlMsgAlloc as ZERO BO REPORT to be sent to RLC so that
         * Allocation can be done in next slot*/
         accumalatedSize = 0;
         
         /*JOJO: If failed, traverse next UE.*/
         ueNode = ueNode->next;
         continue;
      }

      /*[Step6]: pdcch and pdsch data is filled */
      if((schDlRsrcAllocDlMsg(cellCb, pdschTime, crnti, accumalatedSize, dciSlotAlloc, startPrb, pdschStartSymbol, pdschNumSymbols, isRetx, *hqP)) != ROK)
      {
         DU_LOG("\nERROR  --> SCH : Scheduling of DL dedicated message failed");
         /* Free the dl ded msg info allocated in macSchDlRlcBoInfo */
         if(!dciSlotAlloc->dlMsgPdschCfg)
         {
            SCH_FREE(dciSlotAlloc, sizeof(DlMsgSchInfo));
            cellCb->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId -1] = NULL;
         }

         /*JOJO: If failed, traverse next UE.*/
         ueNode = ueNode->next;
         continue;
      }

      if (isRetx != TRUE)
      {
         accumalatedSize += TX_PAYLOAD_HDR_LEN;
      }
      dataSizeEachUE[ueId-1] = accumalatedSize;
      totalDataSizePerTTI += accumalatedSize;
      numPRB = schCalcNumPrb(accumalatedSize, ueCb->ueCfg.dlModInfo.mcsIndex, pdschNumSymbols);
      //DU_LOG("\nJOJO  -->  UE id: %d, is allocated %d PRBs (add header).", ueId, numPRB);
      startPrb += numPRB; /*JOJO: accumulate start PRB.*/

      /* Check if both DCI and DL_MSG are sent in the same slot.
      * If not, allocate memory for DL_MSG PDSCH slot to store PDSCH info */

      if(pdcchTime.slot == pdschTime.slot)
      {
         SCH_ALLOC(dciSlotAlloc->dlMsgPdschCfg, sizeof(PdschCfg));
         if(!dciSlotAlloc->dlMsgPdschCfg)
         {
            DU_LOG("\nERROR  -->  SCH : Memory Allocation failed for dciSlotAlloc->dlMsgPdschCfg");
            SCH_FREE(dciSlotAlloc->dlMsgPdcchCfg, sizeof(PdcchCfg));
            SCH_FREE(dciSlotAlloc, sizeof(DlMsgSchInfo));
            cellCb->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId-1] = NULLP;
            return false;
         }
         memcpy(dciSlotAlloc->dlMsgPdschCfg, &dciSlotAlloc->dlMsgPdcchCfg->dci.pdschCfg,  sizeof(PdschCfg));
      }
      else
      {
         /* Allocate memory to schedule dlMsgAlloc to send DL_Msg, pointer will be checked at schProcessSlotInd() */
         if(cellCb->schDlSlotInfo[pdschTime.slot]->dlMsgAlloc[ueId-1] == NULLP)
         {
            SCH_ALLOC(dlMsgAlloc, sizeof(DlMsgSchInfo));
            if(dlMsgAlloc == NULLP)
            {
               DU_LOG("\nERROR  -->  SCH : Memory Allocation failed for dlMsgAlloc");
               SCH_FREE(dciSlotAlloc->dlMsgPdcchCfg, sizeof(PdcchCfg));
               if(dciSlotAlloc->dlMsgPdschCfg == NULLP)
               {
                  SCH_FREE(dciSlotAlloc, sizeof(DlMsgSchInfo));
                  cellCb->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId-1] = NULLP;
               }
               return false;
            }
            cellCb->schDlSlotInfo[pdschTime.slot]->dlMsgAlloc[ueId-1] = dlMsgAlloc;
            memset(dlMsgAlloc, 0, sizeof(DlMsgSchInfo));
         }
         else
            dlMsgAlloc = cellCb->schDlSlotInfo[pdschTime.slot]->dlMsgAlloc[ueId-1];

         /* Copy all DL_MSG info */
         dlMsgAlloc->crnti =crnti;
         dlMsgAlloc->bwp = dciSlotAlloc->bwp;
         SCH_ALLOC(dlMsgAlloc->dlMsgPdschCfg, sizeof(PdschCfg));
         if(dlMsgAlloc->dlMsgPdschCfg)
         {
            memcpy(dlMsgAlloc->dlMsgPdschCfg, &dciSlotAlloc->dlMsgPdcchCfg->dci.pdschCfg, sizeof(PdschCfg));
         }
         else
         {
            SCH_FREE(dciSlotAlloc->dlMsgPdcchCfg, sizeof(PdcchCfg));    
            if(dciSlotAlloc->dlMsgPdschCfg == NULLP)
            {
               SCH_FREE(dciSlotAlloc, sizeof(DlMsgSchInfo));
               cellCb->schDlSlotInfo[pdcchTime.slot]->dlMsgAlloc[ueId-1] = NULLP;

            }
            SCH_FREE(dlMsgAlloc, sizeof(DlMsgSchInfo));
            cellCb->schDlSlotInfo[pdschTime.slot]->dlMsgAlloc[ueId-1] = NULLP;
            DU_LOG("\nERROR  -->  SCH : Memory Allocation failed for dlMsgAlloc->dlMsgPdschCfg");
            return false;
         }
      }

      // schAllocPucchResource(cellCb, pucchTime, crnti, ueCb, isRetx, *hqP);
      /*JOJO: Allocate PUCCH based on PDCCH allocation.*/
      schAllocPucchResourceMu(cellCb, pdcchTime, pucchTime, crnti, ueCb, isRetx, *hqP);

      /* JOJO: Store UE id into specific element in UE list.*/
      cellCb->schDlSlotInfo[pdcchTime.slot]->pdcchUe[ueId-1] = ueId;
      cellCb->schDlSlotInfo[pdschTime.slot]->pdschUe[ueId-1] = ueId;
      cellCb->schUlSlotInfo[pucchTime.slot]->pucchUe[ueId-1] = ueId;

      ueSliceBasedCb->isTxPayloadLenAdded = FALSE;
      cmLListDeleteLList(&defLcList);

      /*Re-setting the BO's of all DL LCs in this UE*/
      for(lcIdx = 0; lcIdx < MAX_NUM_LC; lcIdx++)
      {
         ueCb->dlInfo.dlLcCtxt[lcIdx].bo = 0;
      }

      /* after allocation is done, unset the bo bit for that ue */
      UNSET_ONE_BIT(ueId, cellCb->boIndBitMap);
      ueSliceBasedCb->isDlMsgScheduled = true;
      
      ueNode = ueNode->next;
   }

   DU_LOG("\nJOJO  -->  The amount of wasted PRBs is %d in slot %d", remainingPrb, pdschTime.sfn*10 + pdschTime.slot);
   // for(int i=0; i<MAX_NUM_UE; i++)
   // {
   //    DU_LOG("\nJOJO  -->  Data size %d for UE id %d is scheduled in this slot %d", dataSizeEachUE[i], i+1, pdschTime.sfn*10 + pdschTime.slot);
   // }
   // DU_LOG("\nJOJO  -->  Total data size %d is scheduled in slot %d", totalDataSizePerTTI, pdschTime.sfn*10 + pdschTime.slot);

   return ROK;
}

/*******************************************************************
 *
 * @brief UL scheduling
 *
 * @details
 *
 *    Function : schSliceBasedUlScheduling
 *
 *    Functionality: Beacuse each LC is associated with slice, this function
 *       fills and classifies the lcId of each UE into corresponding slice control block
 *
 * @params[in] Pointer to Cell Control Block
 *             Slot timing info
 *             UE ID
 *             Retransmission boolean
 *             The address of pointer to UL HARQ Process Control Block
 * @return true     - success
 *         false    - failure
 *
 * ****************************************************************/
bool schSliceBasedUlScheduling(SchCellCb *cell, SlotTimingInfo currTime, uint8_t ueId, bool isRetx, SchUlHqProcCb **hqP)
{
   bool k2Found = FALSE;
   uint8_t startSymb = 0, symbLen = 0;
   uint8_t k2TblIdx = 0, k2Index = 0, k2Val = 0;
   SchUeCb *ueCb = NULLP;
   SchK2TimingInfoTbl *k2InfoTbl=NULLP;
   SlotTimingInfo dciTime, puschTime;
   uint16_t startPrb = 0;
   uint16_t maxFreePRB = 0;
   uint16_t totalRemainingPrb = 0;
   uint16_t currSliceCnt = 0;
   SchSliceBasedCellCb *schSpcCell = NULLP;
   CmLList *sliceCbNode = NULLP; 
   SchSliceBasedSliceCb *sliceCb = NULLP;
   
   if(cell == NULLP)
   {
      DU_LOG("\nERROR  -->  SCH: schSliceBasedUlScheduling() : Cell is NULL");
      return false;
   }

   ueCb = &cell->ueCb[ueId-1];
   
   if(ueCb == NULLP)
   {
      DU_LOG("\nERROR  -->  SCH: schSliceBasedUlScheduling() : UE is NULL");
      return false;
   }

   if (isRetx == FALSE)
   {
      if (schUlGetAvlHqProcess(cell, ueCb, hqP) != ROK)
      {
         return RFAILED;
      }
   }

   /* Calculating time frame to send DCI for SR */
   ADD_DELTA_TO_TIME(currTime, dciTime, PHY_DELTA_DL + SCHED_DELTA, cell->numSlots);
#ifdef NR_TDD
   if(schGetSlotSymbFrmt(dciTime.slot, cell->slotFrmtBitMap) == DL_SLOT)
#endif
   {     
      if(ueCb->k2TblPrsnt)
         k2InfoTbl = &ueCb->k2InfoTbl;
      else
         k2InfoTbl =  &cell->k2InfoTbl;

      for(k2TblIdx = 0; k2TblIdx < k2InfoTbl->k2TimingInfo[dciTime.slot].numK2; k2TblIdx++)
      {
         k2Index = k2InfoTbl->k2TimingInfo[dciTime.slot].k2Indexes[k2TblIdx];

         if(!ueCb->k2TblPrsnt)
         {
            k2Val = cell->cellCfg.ulCfgCommon.schInitialUlBwp.puschCommon.timeDomRsrcAllocList[k2Index].k2;
            startSymb = cell->cellCfg.ulCfgCommon.schInitialUlBwp.puschCommon.timeDomRsrcAllocList[k2Index].startSymbol;
            symbLen = cell->cellCfg.ulCfgCommon.schInitialUlBwp.puschCommon.timeDomRsrcAllocList[k2Index].symbolLength;
         }
         else
         {
            k2Val = ueCb->ueCfg.spCellCfg.servCellRecfg.initUlBwp.puschCfg.timeDomRsrcAllocList[k2Index].k2;
            startSymb =  ueCb->ueCfg.spCellCfg.servCellRecfg.initUlBwp.puschCfg.timeDomRsrcAllocList[k2Index].startSymbol;
            symbLen =  ueCb->ueCfg.spCellCfg.servCellRecfg.initUlBwp.puschCfg.timeDomRsrcAllocList[k2Index].symbolLength;
         }
         /* Check for number of Symbol of PUSCH should be same as original in case of transmisson*/
         /* Calculating time frame to send PUSCH for SR */
         ADD_DELTA_TO_TIME(dciTime, puschTime, k2Val, cell->numSlots);
#ifdef NR_TDD
         if(schGetSlotSymbFrmt(puschTime.slot, cell->slotFrmtBitMap) == DL_SLOT)
            continue;
#endif
         if(cell->schUlSlotInfo[puschTime.slot]->puschUe != 0)
         {
            continue;
         }
         k2Found = true;
         if(hqP)
         {
            ADD_DELTA_TO_TIME(puschTime, (*hqP)->puschTime, 0, cell->numSlots);
         }
         break;
      }
   }

   schSpcCell = (SchSliceBasedCellCb *)cell->schSpcCell;
   sliceCbNode = schSpcCell->sliceCbList.first;

   maxFreePRB = searchLargestFreeBlock((*hqP)->hqEnt->cell, puschTime, &startPrb, DIR_UL);
   totalRemainingPrb = maxFreePRB;

   
   if (isRetx == FALSE)
   {

#ifdef SCH_MULTI_THREAD
      SchSliceBasedUlThreadArg *threadArg[schSpcCell->sliceCbList.count];
      pthread_t intraSliceThread[schSpcCell->sliceCbList.count];
      uint8_t threadRes;
#endif

      while(sliceCbNode)
      {
         sliceCb = (SchSliceBasedSliceCb *)sliceCbNode->node;
         
#ifdef SCH_MULTI_THREAD
         SCH_ALLOC(threadArg[currSliceCnt], sizeof(SchSliceBasedUlThreadArg));
         
         if(!threadArg[currSliceCnt])
         {
            DU_LOG("\nERROR  -->  SCH : Memory Allocation failed for thread argument");
            return false;
         }

         /* Pack the argument for thread function */
         threadArg[currSliceCnt]->cell = cell;
         threadArg[currSliceCnt]->puschTime = puschTime;
         threadArg[currSliceCnt]->puschNumSymbols = symbLen;
         threadArg[currSliceCnt]->totalRemainingPrb = &totalRemainingPrb;
         threadArg[currSliceCnt]->maxFreePRB = maxFreePRB;
         threadArg[currSliceCnt]->sliceCb = sliceCb;
         threadArg[currSliceCnt]->ueId = ueId;

         /* Run the intra-slice scheduling with multi-thread feature */
         threadRes = pthread_create(&intraSliceThread[currSliceCnt], NULL, schSliceBasedUlIntraSliceThreadScheduling, \
                                    (void *)threadArg[currSliceCnt]);

         if(threadRes != 0)
         {
            DU_LOG("\nERROR  -->  SCH : Thread Creation failed for UL intra-slice scheduling");
            return false;
         }

         currSliceCnt++;
         sliceCbNode = sliceCbNode->next;
      }

      for(int sliceCnt=0; sliceCnt < schSpcCell->sliceCbList.count; sliceCnt++)
      {
         if (pthread_join(intraSliceThread[sliceCnt], NULL)) 
         {
            DU_LOG("\nERROR  -->  SCH : Thread Join failed for UL intra-slice scheduling");
            return false;
         }

         /* Garbage collection */
         SCH_FREE(threadArg[sliceCnt], sizeof(SchSliceBasedUlThreadArg));
      }

#else
         if(schSliceBasedUlIntraSliceScheduling(cell, puschTime, symbLen, &totalRemainingPrb, maxFreePRB, sliceCb, ueId) != ROK)
         {
            DU_LOG("\nDennis --> UL Intra Slice Scheduling Failed");
            return false;
         }

         sliceCbNode = sliceCbNode->next;
      }
#endif

   }  

   if(schSliceBasedUlFinalScheduling(cell, puschTime, dciTime, startSymb, symbLen, ueId, isRetx, hqP, totalRemainingPrb, startPrb) != ROK)
   {
      DU_LOG("\nDennis --> UL Final Scheduling Failed");
      return false;
   }

   return true;
}

/*******************************************************************
 *
 * @brief Intra-slice scheduling
 *
 * @details
 *
 *    Function : schSliceBasedUlIntraSliceScheduling
 *
 *    Functionality: Beacuse each LC is associated with slice, this function
 *       fills and classifies the lcId of each UE into corresponding slice control block
 *
 * @params[in] Pointer to Cell Control Block
 *             Current Slot timing info
 *             PDCCH Slot timing info
 *             Number of PDSCH Symbols
 *             Max FreePRB Block
 *             Pointer to Slice Control Block
 *             UE ID
 * @return ROK     - success
 *         RFAILED - failure
 *
 * ****************************************************************/
uint8_t schSliceBasedUlIntraSliceScheduling(SchCellCb *cellCb, SlotTimingInfo puschTime, uint8_t puschNumSymbols, \
                                            uint16_t *totalRemainingPrb, uint16_t maxFreePRB, SchSliceBasedSliceCb *sliceCb, uint8_t ueId)
{  
   uint16_t crnti = 0;
   uint16_t minimumPrb = 0, remainingPrb = 0;
   uint16_t mcsIdx = 0;
   SchUeCb *ueCb = NULLP;
   DlMsgSchInfo *dciSlotAlloc;
   SchSliceBasedUeCb *ueSliceBasedCb = NULLP;

   /* Calculate the slice PRB quota according to RRMPolicyRatio and MaxFreePRB */
   sliceCb->dedicatedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.dedicatedRatio)*(maxFreePRB))/100);
   sliceCb->prioritizedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.minRatio - sliceCb->rrmPolicyRatioInfo.dedicatedRatio)\
                                             *(maxFreePRB))/100);
   sliceCb->sharedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.maxRatio - sliceCb->rrmPolicyRatioInfo.minRatio)\
                                          *(maxFreePRB))/100);
   minimumPrb = sliceCb->dedicatedPrb + sliceCb->prioritizedPrb;

   DU_LOG("\n\n===============Dennis  -->  SCH UL Intra-Slice : Start to run IntraSliceScheduling [SST:%d, MinimumPRB Quota:%d]===============", \
   sliceCb->snssai.sst, minimumPrb);

   /* TODO: It should support multi-UEs per TTI scheduling */
   //for(ueId=0; ueId<MAX_NUM_UE; ueId++)
   GET_CRNTI(crnti,ueId);
   ueCb = &cellCb->ueCb[ueId-1];
   ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;
         
   /* Update the requested BO of each LC in current slice */
   schSliceBasedUpdateLcListReqBo(&sliceCb->lcInfoList[ueId-1], ueCb, DIR_UL);

   if(minimumPrb != 0)
   {
      mcsIdx = ueCb->ueCfg.ulModInfo.mcsIndex;
      remainingPrb = minimumPrb;
      schSliceBasedPrbAllocUsingRRMPolicy(&sliceCb->lcInfoList[ueId-1], mcsIdx, puschNumSymbols, &remainingPrb, NULLP, &(ueCb->srRcvd));
   }

   sliceCb->allocatedPrb = minimumPrb - remainingPrb;
   DU_LOG("\nDennis  -->  SCH UL Intra-Slice Result : [SST: %d, Allocated PRB: %d, Unallocated PRB: %d]", sliceCb->snssai.sst, \
             sliceCb->allocatedPrb, remainingPrb);

   
   /* Deal with the problem which slice PRB quotas may be not integer */
   if(sliceCb->allocatedPrb > sliceCb->dedicatedPrb)
   {
      *totalRemainingPrb = *totalRemainingPrb - sliceCb->allocatedPrb;
   }
   else
   {
      *totalRemainingPrb = *totalRemainingPrb - sliceCb->dedicatedPrb;
   }

   return ROK;
}

/*******************************************************************
 *
 * @brief Intra-slice scheduling for multi-thread feature
 *
 * @details
 *
 *    Function : schSliceBasedUlIntraSliceThreadScheduling
 *
 *    Functionality: Beacuse each LC is associated with slice, this function
 *       fills and classifies the lcId of each UE into corresponding slice control block
 *
 * @params[in] Pointer to thread argument
 * @return void
 *
 * ****************************************************************/
void *schSliceBasedUlIntraSliceThreadScheduling(void *threadArg)
{
   uint16_t crnti = 0;
   uint16_t minimumPrb = 0, remainingPrb = 0;
   uint16_t mcsIdx = 0;
   SchUeCb *ueCb = NULLP;
   DlMsgSchInfo *dciSlotAlloc;
   SchSliceBasedUeCb *ueSliceBasedCb = NULLP;

   SchSliceBasedUlThreadArg *ulThreadArg;
   SchCellCb *cellCb;
   SlotTimingInfo puschTime;
   uint8_t puschNumSymbols;
   uint16_t *totalRemainingPrb;
   uint16_t maxFreePRB;
   SchSliceBasedSliceCb *sliceCb;
   uint8_t ueId;

   ulThreadArg = (SchSliceBasedUlThreadArg *)threadArg;
   cellCb = ulThreadArg->cell;
   puschTime = ulThreadArg->puschTime;
   puschNumSymbols = ulThreadArg->puschNumSymbols;
   totalRemainingPrb = ulThreadArg->totalRemainingPrb;
   maxFreePRB = ulThreadArg->maxFreePRB;
   sliceCb = ulThreadArg->sliceCb;
   ueId = ulThreadArg->ueId;

   /* Calculate the slice PRB quota according to RRMPolicyRatio and MaxFreePRB */
   sliceCb->dedicatedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.dedicatedRatio)*(maxFreePRB))/100);
   sliceCb->prioritizedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.minRatio - sliceCb->rrmPolicyRatioInfo.dedicatedRatio)\
                                             *(maxFreePRB))/100);
   sliceCb->sharedPrb = (uint16_t)(((sliceCb->rrmPolicyRatioInfo.maxRatio - sliceCb->rrmPolicyRatioInfo.minRatio)\
                                          *(maxFreePRB))/100);
   minimumPrb = sliceCb->dedicatedPrb + sliceCb->prioritizedPrb;

   DU_LOG("\n\n===============Dennis  -->  SCH UL Intra-Slice : Start to run IntraSliceScheduling [SST:%d, MinimumPRB Quota:%d]===============", \
   sliceCb->snssai.sst, minimumPrb);

   /* TODO: It should support multi-UEs per TTI scheduling */
   //for(ueId=0; ueId<MAX_NUM_UE; ueId++)
   GET_CRNTI(crnti,ueId);
   ueCb = &cellCb->ueCb[ueId-1];
   ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;
         
   /* Update the requested BO of each LC in current slice */
   schSliceBasedUpdateLcListReqBo(&sliceCb->lcInfoList[ueId-1], ueCb, DIR_UL);

   if(minimumPrb != 0)
   {
      mcsIdx = ueCb->ueCfg.ulModInfo.mcsIndex;
      remainingPrb = minimumPrb;
      schSliceBasedPrbAllocUsingRRMPolicy(&sliceCb->lcInfoList[ueId-1], mcsIdx, puschNumSymbols, &remainingPrb, NULLP, &(ueCb->srRcvd));
   }

   sliceCb->allocatedPrb = minimumPrb - remainingPrb;
   DU_LOG("\nDennis  -->  SCH UL Intra-Slice Result : [SST: %d, Allocated PRB: %d, Unallocated PRB: %d]", sliceCb->snssai.sst, \
             sliceCb->allocatedPrb, remainingPrb);

   
   /* Deal with the problem which slice PRB quotas may be not integer */
   if(sliceCb->allocatedPrb > sliceCb->dedicatedPrb)
   {
      *totalRemainingPrb = *totalRemainingPrb - sliceCb->allocatedPrb;
   }
   else
   {
      *totalRemainingPrb = *totalRemainingPrb - sliceCb->dedicatedPrb;
   }


   pthread_exit(NULL);  
   return ROK;
}

/*******************************************************************
 *
 * @brief Final scheduling
 *
 * @details
 *
 *    Function : schSliceBasedUlFinalScheduling
 *
 *    Functionality: 
 *             [Step1] Allocate the remaining resource from intra-slice scheduling to default slice
 *             [Step2] Allocate the remaining resource from intra-slice scheduling to dedicated slice
 *             [Step3] Fill the DCI according to the scheduling result
 *
 * @params[in] Pointer to Cell Control Block
 *             PUSCH Slot timing info
 *             DCI Slot timing info
 *             Number of PUSCH Symbols
 *             Max FreePRB Block
 *             Pointer to Slice Control Block
 *             UE ID
 *             Retranmission Flag
 *             Double Pointer to HARQ UL Process Controll Block
 *             Remaining PRBs after intra-slice scheduling
 *             Start PRB Index
 * @return ROK     - success
 *         RFAILED - failure
 *
 * ****************************************************************/
uint8_t schSliceBasedUlFinalScheduling(SchCellCb *cellCb, SlotTimingInfo puschTime, SlotTimingInfo dciTime, \
                  uint8_t puschStartSymbol, uint8_t puschNumSymbols, uint8_t ueId, \
                  bool isRetx, SchUlHqProcCb **hqP, uint16_t remainingPrb, uint16_t startPrb)
{  
   uint8_t lcIdx = 0;
   uint16_t mcsIdx = 0;
   uint16_t crnti = 0;
   uint16_t availablePrb = 0;
   uint32_t accumalatedSize = 0;
   SchUeCb *ueCb = NULLP;
   DciInfo  *dciInfo = NULLP;
   SchPuschInfo *puschInfo;
   SchSliceBasedCellCb *schSpcCell = NULLP;
   CmLList *sliceCbNode = NULLP; 
   CmLListCp defLcList;
   SchSliceBasedSliceCb *sliceCb = NULLP;
   SchSliceBasedUeCb *ueSliceBasedCb = NULLP;
   
   DU_LOG("\n\n===============Dennis  -->  SCH UL Final : Start to run final-scheduling [Remaining PRB is:%d]===============", remainingPrb);

   /* TODO: It should support multi-UEs per TTI scheduling */
   // For(loop the uePriorityList)
   GET_CRNTI(crnti,ueId);
   ueCb = &cellCb->ueCb[ueId-1];
   ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;

   mcsIdx = ueCb->ueCfg.ulModInfo.mcsIndex;
   if(remainingPrb != 0)
   {
      cmLListInit(&defLcList);

      /* Allocate the remaining PRB to default slice */
      for(lcIdx = 0; lcIdx < MAX_NUM_LOGICAL_CHANNEL_GROUPS; lcIdx++)
      {
         if(ueCb->ulInfo.ulLcCtxt[lcIdx].snssai == NULLP && ueCb->bsrInfo[lcIdx].dataVol != 0)
         {
            /*[Step2]: Update the reqPRB and Payloadsize for this LC in the appropriate List*/
            if(updateLcListReqPRB(&defLcList, ueCb->ulInfo.ulLcCtxt[lcIdx].lcId,\
                     ueCb->bsrInfo[lcIdx].dataVol) != ROK)
            {
               DU_LOG("\nERROR  --> SCH : Updation in LC List Failed");
            }
            else
            {
               DU_LOG("\nDennis  -->  SCH UL : Append LC to default LL [LCID, reqBO] [%d, %d]", lcIdx, \
               ueCb->bsrInfo[lcIdx].dataVol);
            }
         }
      }

      availablePrb = remainingPrb;
      schSliceBasedPrbAllocUsingRRMPolicy(&defLcList, mcsIdx, puschNumSymbols, &availablePrb, NULLP, &(ueCb->srRcvd));
      DU_LOG("\nDennis  -->  SCH UL Final Default Slice : [Allocated PRB: %d, Remaining PRB: %d]", remainingPrb - availablePrb, availablePrb);
      remainingPrb = availablePrb;
   }

   /* Allocate the remaining PRB to slice according to slice priority
    * I assume that slice priority is implicit in the RAN Control indication from RIC */
   schSpcCell = (SchSliceBasedCellCb *)cellCb->schSpcCell;
   sliceCbNode = schSpcCell->sliceCbList.first;

   while(sliceCbNode)
   {
      sliceCb = (SchSliceBasedSliceCb *)sliceCbNode->node;

      /* TODO: It should support multi-UEs per TTI scheduling */
      //For(loop the uePriorityList)
      GET_CRNTI(crnti,ueId);
      ueCb = &cellCb->ueCb[ueId-1];
      ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;
      
      DU_LOG("\n\n===============Dennis  -->  SCH UL Final : Start to run FinalScheduling [SST:%d, Shared PRB Quota:%d, Remaining PRB:%d]===============", \
      sliceCb->snssai.sst, sliceCb->sharedPrb, remainingPrb);

      if(remainingPrb != 0)
      {
         mcsIdx = ueCb->ueCfg.ulModInfo.mcsIndex;

         if(sliceCb->sharedPrb >= remainingPrb)
         {
            availablePrb = remainingPrb; 
            schSliceBasedPrbAllocUsingRRMPolicy(&sliceCb->lcInfoList[ueId-1], mcsIdx, puschNumSymbols, &availablePrb, NULLP, &(ueCb->srRcvd));
            sliceCb->allocatedPrb += remainingPrb - availablePrb;
            remainingPrb = availablePrb;
         }
         else
         {
            availablePrb = sliceCb->sharedPrb;
            schSliceBasedPrbAllocUsingRRMPolicy(&sliceCb->lcInfoList[ueId-1], mcsIdx, puschNumSymbols, &availablePrb, NULLP, &(ueCb->srRcvd));
            sliceCb->allocatedPrb += sliceCb->sharedPrb - availablePrb;
            remainingPrb = remainingPrb - (sliceCb->sharedPrb - availablePrb);
         }
      }
      DU_LOG("\nDennis  -->  SCH UL Final Scheduling Result : [SST: %d, Allocated PRB: %d, Remaining PRB: %d]", sliceCb->snssai.sst, \
             sliceCb->allocatedPrb, remainingPrb);
      sliceCbNode = sliceCbNode->next;
   }

   /* TODO: It should support multi-UEs per TTI scheduling */
   // For(loop the uePriorityList)
   GET_CRNTI(crnti,ueId);
   ueCb = &cellCb->ueCb[ueId-1];
   
   /*[Step5]:Traverse each LCID in LcList to calculate the exact Scheduled Bytes
    * using allocated BO per LC and Update dlMsgAlloc BO report for MAC */
   sliceCbNode = schSpcCell->sliceCbList.first;

   if (isRetx == FALSE)
   {
      /* Update default slice allocation result of accumalatedSize */
      if(defLcList.count != 0)
         schSliceBasedUpdateGrantSizeForBoRpt(&defLcList, NULLP, ueCb->bsrInfo, &accumalatedSize, FALSE);
      
      /* Update dedicated slice allocation result of accumalatedSize */
      while(sliceCbNode)
      {
         sliceCb = (SchSliceBasedSliceCb *)sliceCbNode->node;
         
         if(sliceCb->lcInfoList[ueId-1].count != 0)
            schSliceBasedUpdateGrantSizeForBoRpt(&sliceCb->lcInfoList[ueId-1], NULLP, ueCb->bsrInfo, &accumalatedSize, TRUE);
            
         sliceCbNode = sliceCbNode->next;
      }
   }

   if(!accumalatedSize)
   {
      if((ueCb->srRcvd) || (isRetx))
      {
         accumalatedSize = schCalcTbSize(UL_GRANT_SIZE);
         startPrb = MAX_NUM_RB;
      }
      else if(remainingPrb == 0)
      {
         /*Schedule the LC for next slot*/
         DU_LOG("\nERROR  --> SCH : NO FREE PRB!!");
         accumalatedSize = 0;
         return RFAILED;
      }
      else
      {
          /*Schedule the LC for next slot*/
         DU_LOG("\nDEBUG  -->  SCH : No LC has been scheduled");
         accumalatedSize = 0;
         return RFAILED;
      }    
   }

   if(accumalatedSize > 0)
   {
      SCH_ALLOC(dciInfo, sizeof(DciInfo));
      if(!dciInfo)
      {
         DU_LOG("\nERROR  -->  SCH : Memory Allocation failed for dciInfo alloc");
         cmLListDeleteLList(&defLcList);
         return RFAILED;
      }
      cellCb->schDlSlotInfo[dciTime.slot]->ulGrant = dciInfo;
      memset(dciInfo,0,sizeof(DciInfo));
      /* Update PUSCH allocation */
      if(schFillPuschAlloc(ueCb, puschTime, accumalatedSize, puschStartSymbol, puschNumSymbols, startPrb, isRetx, *hqP) == ROK)
      {
         if(cellCb->schUlSlotInfo[puschTime.slot]->schPuschInfo)
         {
            puschInfo = cellCb->schUlSlotInfo[puschTime.slot]->schPuschInfo;
            if(puschInfo != NULLP)
            {
               /* Fill DCI for UL grant */
               schFillUlDci(ueCb, puschInfo, dciInfo, isRetx, *hqP);
               ueCb->srRcvd = false;
               ueCb->bsrRcvd = false;
               cellCb->schUlSlotInfo[puschTime.slot]->puschUe = ueCb->ueId;
               cmLListAdd2Tail(&(ueCb->hqUlmap[puschTime.slot]->hqList), &(*hqP)->ulSlotLnk);                  
            }
         }
      }
   }
   cmLListDeleteLList(&defLcList);

   return ROK;
}

/*******************************************************************
 *
 * @brief Update the req BO for Lcinfo list for each slice
 *
 * @details
 *
 *    Function : schSliceBasedUpdateLcListReqBo
 *
 *    Functionality: Update the req BO for Lcinfo list for each slice
 * 
 * @params[in] Pointer to LC Info Control Block List
 *             Pointer to UE Control Block
 *             Direction
 * @return ROK     - success
 *         RFAILED - failure
 *
 * ****************************************************************/
uint8_t schSliceBasedUpdateLcListReqBo(CmLListCp *lcInfoList, SchUeCb *ueCb, Direction dir)
{
   CmLList *node = NULLP; 
   SchSliceBasedLcInfo *lcInfoNode = NULLP;
   uint8_t lcIdx;

   node = lcInfoList->first;

   if(!node)
   {
#ifdef SLICE_BASED_DEBUG_LOG
      DU_LOG("\nDennis  -->  Dedicated LC LL is empty");
#endif
      return RFAILED;
   }
   else
   {
      while (node)
      {
         lcInfoNode = (SchSliceBasedLcInfo *)node->node;

         lcIdx = lcInfoNode->lcId;

         if(dir == DIR_DL)
         {
            if(ueCb->dlInfo.dlLcCtxt[lcIdx].bo)
            {
               lcInfoNode->reqBO = ueCb->dlInfo.dlLcCtxt[lcIdx].bo + MAC_HDR_SIZE;
               lcInfoNode->allocBO = 0;
               lcInfoNode->allocPRB = 0;
#ifdef SLICE_BASED_DEBUG_LOG
               DU_LOG("\nDennis  -->  SCH Intra-Slice : Update reqBO of DL LC [LcID:%d, reqBO:%d]", lcIdx, lcInfoNode->reqBO);
#endif
            }
         }
         else if(dir == DIR_UL)
         {
            /*TODO: lcgIdx and LCID has been implemented as one to one mapping.
            * Need to check the mapping to figure out the LCID and lcgIdx once L2
            * spec specifies any logic*/
            if(lcIdx >= MAX_NUM_LOGICAL_CHANNEL_GROUPS)
            {
               DU_LOG("\nDennis  -->  SCH Intra-Slice : schSliceBasedUpdateLcListReqBo() LC Index is out of max number of LCG");
               node = node->next;
               continue;
            }
            else
            {
               if(ueCb->bsrInfo[lcIdx].dataVol)
               {
                  lcInfoNode->reqBO = ueCb->bsrInfo[lcIdx].dataVol;
                  lcInfoNode->allocBO = 0;
                  lcInfoNode->allocPRB = 0;
#ifdef SLICE_BASED_DEBUG_LOG
                  DU_LOG("\nDennis  -->  SCH Intra-Slice : Update reqBO of UL LC [LcID:%d, reqBO:%d]", lcIdx, lcInfoNode->reqBO);
#endif
               }
            }
            
         }
         
         node = node->next;
      }
   }

   return ROK;
}

/*******************************************************************
 *
 * @brief Allocate and estimate Prb for each LC within current slice
 *
 * @details
 *
 *    Function : schSliceBasedPrbAllocUsingRRMPolicy
 *
 *    Functionality: Allocate and estimated Prb for each LC within current slice
 * 
 * @params[in] Pointer to LC Info Control Block List
 *             MCS Index
 *             Number of PDSCH symbols
 *             Number of minimum PRB which is calculated according to RRMPolicyRatio
 *             srRcvd Flag[For UL] : Decision flag to add UL_GRANT_SIZE
 *             isTxPayloadLenAdded Flag: Check whether the TxPayload should be added to the first node in current slice
 * @return void
 *
 * ****************************************************************/
void schSliceBasedPrbAllocUsingRRMPolicy(CmLListCp *lcInfoList, uint16_t mcsIdx, uint8_t numSymbols, uint16_t *availablePrb, \
                                       bool *isTxPayloadLenAdded, bool *srRcvd)
{
   CmLList *node = NULLP;
   LcInfo *lcInfoNode = NULLP;
   uint16_t estPrb = 0;
   uint32_t allocBO = 0;

   if(lcInfoList == NULLP)
   {
      DU_LOG("\nERROR --> SCH: LcList not present");
      return;
   }
   node = lcInfoList->first;

   /*[Step1]*/
   while(node)
   {
#if 0
      /*For Debugging purpose*/
      printLcLL(lcLL);
#endif
      lcInfoNode = (LcInfo *)node->node;

      /*[Exit 1]: If available PRBs are exhausted*/
      /*Loop Exit: All resources exhausted*/
      if(*availablePrb == 0)
      {
#ifdef SLICE_BASED_DEBUG_LOG
         DU_LOG("\nDennis  -->  SCH: Dedicated resources exhausted for LC:%d",lcInfoNode->lcId);
#endif
         return;
      }

      if(lcInfoNode->reqBO != 0)
      {
         if((isTxPayloadLenAdded != NULLP) && (*isTxPayloadLenAdded == FALSE))
         {
            *isTxPayloadLenAdded = TRUE;
            DU_LOG("\nDEBUG  -->  SCH: LC:%d is the First node to be allocated which includes TX_PAYLOAD_HDR_LEN",\
                  lcInfoNode->lcId);
            allocBO = schSliceBasedcalculateEstimateTBSize((lcInfoNode->reqBO + TX_PAYLOAD_HDR_LEN), mcsIdx, numSymbols, *availablePrb, &estPrb);
            allocBO -= TX_PAYLOAD_HDR_LEN;
            lcInfoNode->allocBO += allocBO;
         }
         else if((srRcvd != NULLP) && (*srRcvd == TRUE))
         {
            DU_LOG("\nDEBUG  --> SCH: LC:%d is the First node to be allocated which includes UL_GRANT_SIZE",\
                  lcInfoNode->lcId);
            *srRcvd = FALSE;
            lcInfoNode->reqBO += UL_GRANT_SIZE;
            allocBO = schSliceBasedcalculateEstimateTBSize(lcInfoNode->reqBO, mcsIdx, numSymbols, *availablePrb, &estPrb);
            lcInfoNode->allocBO += allocBO;
         }
         else
         {
            allocBO = schSliceBasedcalculateEstimateTBSize(lcInfoNode->reqBO, mcsIdx, numSymbols, *availablePrb, &estPrb);
            lcInfoNode->allocBO += allocBO;
         }

         /*[Step6]:Re-adjust the availablePrb Count based on
         * estimated PRB allocated*/
         *availablePrb = *availablePrb - estPrb;
         
         /*[Step7]*/
         lcInfoNode->reqBO -= allocBO;  /*Update the reqBO with remaining bytes unallocated*/
         lcInfoNode->allocPRB += estPrb;
      }
      /*[Step8]:Next loop: Next LC to be picked from the list*/
      node = node->next; 
   }
   /*[Exit2]: All LCs are allocated in current slice*/
   return;

}

/*******************************************************************************************
 *
 * @brief Check the LC List and fill the LC and GrantSize to be sent to MAC as
 * BO Report
 *
 * @details
 *
 *    Function : schSliceBasedUpdateGrantSizeForBoRpt
 *
 *    Functionality:
 *             1. Check the LC List and fill the LC and GrantSize to be sent to MAC as
 *                BO Report in dlMsgAlloc Pointer
 *             2. Reset the lcInfoList after filling the scheduling result to DCI
 *
 * @params[in] I/P > lcLinkList pointer (LcInfo list)
 *             I/P & O/P > dlMsgAlloc[for DL](Pending LC to be added in this context) 
 *             I/P & O/P > BsrInfo (applicable for UL)
 *             I/P & O/P > accumalatedBOSize
 *             I/P > isDedicated Flag
 * @return void
 *
 * *******************************************************************************************/
void schSliceBasedUpdateGrantSizeForBoRpt(CmLListCp *lcLL, DlMsgSchInfo *dlMsgAlloc,\
                                    BsrInfo *bsrInfo, uint32_t *accumalatedBOSize, bool isDedicated)
{
   CmLList *node = NULLP, *next = NULLP;
   

   if(lcLL == NULLP)
   {
      DU_LOG("\nERROR --> SCH: LcList not present");
      return;
   }

   if(lcLL->count)
   {
      node = lcLL->first;
   }
   else
   {
      /*lcLL is empty*/
      return;
   }

   if(isDedicated)
   {
      SchSliceBasedLcInfo *lcNode = NULLP;

      while(node)
      {
         next = node->next;
         lcNode = (SchSliceBasedLcInfo *)node->node;
         if(lcNode != NULLP)
         {
            if(lcNode->reqBO != 0 || lcNode->allocBO != 0)
            {
               DU_LOG("\nINFO   -->  SCH : LcID:%d, [reqBO, allocBO, allocPRB]:[%d,%d,%d]",\
                  lcNode->lcId, lcNode->reqBO, lcNode->allocBO, lcNode->allocPRB);            
               if(dlMsgAlloc != NULLP)
               {

                  /*Add this LC to dlMsgAlloc so that if this LC gets allocated, BO
                  * report for allocation can be sent to MAC*/
                  dlMsgAlloc->numOfTbs = 1;
                  dlMsgAlloc->transportBlock[0].lcSchInfo[dlMsgAlloc->transportBlock[0].numLc].lcId = lcNode->lcId;
                  dlMsgAlloc->transportBlock[0].lcSchInfo[dlMsgAlloc->transportBlock[0].numLc].schBytes = lcNode->allocBO;

                  /*Calculate the Total Payload/BO size allocated*/
                  *accumalatedBOSize += dlMsgAlloc->transportBlock[0].lcSchInfo[dlMsgAlloc->transportBlock[0].numLc].schBytes; 

                  // DU_LOG("\nINFO   -->  SCH: Added in MAC BO report: LCID:%d,reqBO:%d,Idx:%d, TotalBO Size:%d",\
                        lcNode->lcId,lcNode->reqBO, dlMsgAlloc->transportBlock[0].numLc, *accumalatedBOSize);

                  dlMsgAlloc->transportBlock[0].numLc++;

                  lcNode->reqBO = 0;
                  lcNode->allocBO = 0;
                  lcNode->allocPRB = 0;
               }
               else if(bsrInfo != NULLP)
               {
                  *accumalatedBOSize += lcNode->allocBO;   
                  DU_LOG("\nINFO   --> SCH: UL : LCID:%d,reqBO:%d, TotalBO Size:%d",\
                        lcNode->lcId,lcNode->reqBO, *accumalatedBOSize);

                  bsrInfo[lcNode->lcId].dataVol = lcNode->reqBO;
                  lcNode->reqBO = 0;
                  lcNode->allocBO = 0;
                  lcNode->allocPRB = 0;
               }
            }
         }
         node = next;
      }/*End of while*/
   }
   else
   {
      LcInfo *lcNode = NULLP;
     
      while(node)
      {
         next = node->next;
         lcNode = (LcInfo *)node->node;
         if(lcNode != NULLP)
         {
            if(lcNode->reqBO != 0 || lcNode->allocBO != 0)
            {
               DU_LOG("\nINFO   -->  SCH : LcID:%d, [reqBO, allocBO, allocPRB]:[%d,%d,%d]",\
                  lcNode->lcId, lcNode->reqBO, lcNode->allocBO, lcNode->allocPRB);            
               if(dlMsgAlloc != NULLP)
               {

                  /*Add this LC to dlMsgAlloc so that if this LC gets allocated, BO
                  * report for allocation can be sent to MAC*/
                  dlMsgAlloc->numOfTbs = 1;
                  dlMsgAlloc->transportBlock[0].lcSchInfo[dlMsgAlloc->transportBlock[0].numLc].lcId = lcNode->lcId;
                  dlMsgAlloc->transportBlock[0].lcSchInfo[dlMsgAlloc->transportBlock[0].numLc].schBytes = lcNode->allocBO;

                  /*Calculate the Total Payload/BO size allocated*/
                  *accumalatedBOSize += dlMsgAlloc->transportBlock[0].lcSchInfo[dlMsgAlloc->transportBlock[0].numLc].schBytes; 

                  // DU_LOG("\nINFO   -->  SCH: Added in MAC BO report: LCID:%d,reqBO:%d,Idx:%d, TotalBO Size:%d",\
                  //       lcNode->lcId,lcNode->reqBO, dlMsgAlloc->transportBlock[0].numLc, *accumalatedBOSize);

                  dlMsgAlloc->transportBlock[0].numLc++;
                  handleLcLList(lcLL, lcNode->lcId, DELETE);
               }
               else if(bsrInfo != NULLP)
               {
                  *accumalatedBOSize += lcNode->allocBO;   
                  DU_LOG("\nINFO   --> SCH: UL : LCID:%d,reqBO:%d, TotalBO Size:%d",\
                        lcNode->lcId,lcNode->reqBO, *accumalatedBOSize);

                  bsrInfo[lcNode->lcId].dataVol = lcNode->reqBO;
                  handleLcLList(lcLL, lcNode->lcId, DELETE);
               }
            }
         }
         node = next;
      }/*End of while*/
   }

   return;
}

/*******************************************************************
 *
 * @brief Allocate and estimate Prb for each LC within current slice with Round Robin(RR) alogrithm
 *
 * @details
 *
 *    Function : schSliceBasedRoundRobinAlgoforLc
 *
 *    Functionality: Allocate the LCs with a fair algorithm within a UE
 * 
 * @params[in] Pointer to LC Info Control Block List
 *             MCS Index
 *             Number of PDSCH symbols
 *             Number of minimum PRB which is calculated according to RRMPolicyRatio
 *             srRcvd Flag[For UL] : Decision flag to add UL_GRANT_SIZE
 *             isTxPayloadLenAdded Flag: Check whether the TxPayload should be added to the first node in current slice
 * @return void
 *
 * ****************************************************************/
void schSliceBasedRoundRobinAlgoforLc(CmLListCp *lcInfoList, uint8_t numSymbols, uint16_t *availablePrb, \
                                       bool *isTxPayloadLenAdded, bool *srRcvd)
{
   CmLList *node = NULLP;
   SchSliceBasedLcInfo *lcInfoNode = NULLP;
   uint16_t estPrb = 0;
   uint32_t allocBO = 0;
   uint32_t totalTbs = 0;
   uint16_t quantum = 0;
   uint32_t quantumSize = 0;
   uint8_t remainingLc = 0;
   uint16_t mcsIdx;

   if(lcInfoList == NULLP)
   {
#ifdef SLICE_BASED_DEBUG_LOG
      DU_LOG("\nERROR --> SCH: LcList not present");
#endif

      return;
   }

   if(lcInfoList->count == 0)
   {
#ifdef SLICE_BASED_DEBUG_LOG
      DU_LOG("\nDennis --> SCH: There is no LC in lcInfoList");
#endif

      return;
   }

   remainingLc = lcInfoList->count;
   quantum = *availablePrb/lcInfoList->count;

   //DU_LOG("\nDennis --> SCH: Round Robin Algorithm [availablePRB: %d, Quantum: %d]", *availablePrb, quantum);

   node = lcInfoList->first;
   /*[Step1] Allocate the PRB equally among each LCs */
   while(node && quantum != 0)
   {
#if 0
      /*For Debugging purpose*/
      printLcLL(lcLL);
#endif
      lcInfoNode = (SchSliceBasedLcInfo *)node->node;

      /*[Exit 1]: If available PRBs are exhausted*/
      /*Loop Exit: All resources exhausted*/
      if(*availablePrb == 0)
      {
#ifdef SLICE_BASED_DEBUG_LOG
         DU_LOG("\nDennis  -->  SCH: Dedicated resources exhausted for LC:%d",lcInfoNode->lcId);
#endif
         return;
      }

      mcsIdx = lcInfoNode->ueCb->ueCfg.dlModInfo.mcsIndex;
      // quantumSize = schCalcTbSizeFromNPrb(quantum, mcsIdx, numSymbols);
      // quantumSize = quantumSize >> 3; /* Transfer from Bits to Bytes */
      if(lcInfoNode->reqBO != 0)
      {
         if((isTxPayloadLenAdded != NULLP) && (*isTxPayloadLenAdded == FALSE))
         {
            *isTxPayloadLenAdded = TRUE;
#ifdef SLICE_BASED_DEBUG_LOG
            DU_LOG("\nDEBUG  -->  SCH: LC:%d is the First node to be allocated which includes TX_PAYLOAD_HDR_LEN",\
                  lcInfoNode->lcId);
#endif
            allocBO = schSliceBasedcalculateEstimateTBSize(lcInfoNode->reqBO + TX_PAYLOAD_HDR_LEN, mcsIdx, numSymbols, quantum, &estPrb);
            allocBO = allocBO - TX_PAYLOAD_HDR_LEN;
            lcInfoNode->allocBO += allocBO;      
         }
         else if((srRcvd != NULLP) && (*srRcvd == TRUE))
         {
            DU_LOG("\nDEBUG  --> SCH: LC:%d is the First node to be allocated which includes UL_GRANT_SIZE",\
                  lcInfoNode->lcId);
            *srRcvd = FALSE;
            lcInfoNode->reqBO += UL_GRANT_SIZE;
            allocBO = schSliceBasedcalculateEstimateTBSize(lcInfoNode->reqBO, mcsIdx, numSymbols, quantum, &estPrb);
            lcInfoNode->allocBO += allocBO;
         }
         else
         {
            allocBO = schSliceBasedcalculateEstimateTBSize(lcInfoNode->reqBO, mcsIdx, numSymbols, quantum, &estPrb);
            lcInfoNode->allocBO += allocBO;
         }

         /*[Step6]:Re-adjust the availablePrb Count based on
         * estimated PRB allocated*/
         *availablePrb = *availablePrb - estPrb;
         
         /*[Step7]*/
         lcInfoNode->reqBO -= allocBO;  /*Update the reqBO with remaining bytes unallocated*/
         lcInfoNode->allocPRB += estPrb;
#ifdef SLICE_BASED_DEBUG_LOG
         DU_LOG("\nDennis  -->  SCH: Allocate LC [Algorithm: RR, lcId: %d, allocBO: %d, estPRB: %d]",lcInfoNode->lcId, allocBO, estPrb);
#endif

         if(lcInfoNode->reqBO == 0)
         {
            remainingLc--;
         }
      }
      else
      {
         remainingLc--;
      }
      /*[Step8]:Next loop: Next LC to be picked from the list*/
      node = node->next; 
   }

    /* If is there any LC which reqBO is not zero and there are remaining PRB,  allocate the remaing PRB to LC which has reqBO */
   if(remainingLc > 0 && *availablePrb)
   {
      node = lcInfoList->first;

      while(node)
      {
         lcInfoNode = (SchSliceBasedLcInfo *)node->node;

         if(*availablePrb == 0)
         {
#ifdef SLICE_BASED_DEBUG_LOG
            DU_LOG("\nDennis  -->  SCH: Dedicated resources exhausted for LC:%d",lcInfoNode->lcId);
#endif
            return;
         }

         mcsIdx = lcInfoNode->ueCb->ueCfg.dlModInfo.mcsIndex;
         if(lcInfoNode->reqBO != 0)
         {
            allocBO = schSliceBasedcalculateEstimateTBSize(lcInfoNode->reqBO, mcsIdx, numSymbols, *availablePrb, &estPrb);
            lcInfoNode->allocBO += allocBO;

            /*[Step6]:Re-adjust the availablePrb Count based on
            * estimated PRB allocated*/
            *availablePrb = *availablePrb - estPrb;
            
            /*[Step7]*/
            lcInfoNode->reqBO -= allocBO;  /*Update the reqBO with remaining bytes unallocated*/
            lcInfoNode->allocPRB += estPrb;
         }

#ifdef SLICE_BASED_DEBUG_LOG
         DU_LOG("\nDennis  -->  SCH: (Final) Allocate LC [Algorithm: RR, lcId: %d, allocBO: %d, estPRB: %d]",lcInfoNode->lcId, allocBO, estPrb);
#endif
         /*[Step8]:Next loop: Next LC to be picked from the list*/
         node = node->next; 
      }
   }
   /*[Exit2]: All LCs are allocated in current slice*/
   return;

}

/*******************************************************************
 *
 * @brief Allocate and estimate Prb for each LC within current slice with weighted fair queuing(WFQ) alogrithm
 *
 * @details
 *
 *    Function : schSliceBasedWeightedFairQueueAlgoforLc
 *
 *    Functionality: Allocate the LCs with a weighted fair queue within a UE
 * 
 * @params[in] Pointer to LC Info Control Block List
 *             MCS Index
 *             Number of PDSCH symbols
 *             Number of minimum PRB which is calculated according to RRMPolicyRatio
 *             srRcvd Flag[For UL] : Decision flag to add UL_GRANT_SIZE
 *             isTxPayloadLenAdded Flag: Check whether the TxPayload should be added to the first node in current slice
 * @return void
 *
 * ****************************************************************/
void schSliceBasedWeightedFairQueueAlgoforLc(CmLListCp *lcInfoList, uint8_t numSymbols, uint16_t *availablePrb, \
                                       bool *isTxPayloadLenAdded, bool *srRcvd)
{
   CmLList *node = NULLP;
   SchSliceBasedLcInfo *lcInfoNode = NULLP;

   uint16_t estPrb = 0;
   uint32_t allocBO = 0;
   uint16_t quantum = 0;
   uint32_t quantumSize = 0;
   uint8_t remainingLc = 0;
   uint16_t mcsIdx;
   uint16_t totalAvaiPrb = *availablePrb;

   if(lcInfoList == NULLP)
   {
      DU_LOG("\nERROR --> SCH: LcList not present");
      return;
   }

   if(lcInfoList->count == 0)
   {
#ifdef SLICE_BASED_DEBUG_LOG
      DU_LOG("\nDennis --> SCH: There is no LC in lcInfoList");
#endif
      return;
   }

   remainingLc = lcInfoList->count;

   //DU_LOG("\nDennis --> SCH: WFQ Algorithm [availablePRB: %d]", *availablePrb);

   node = lcInfoList->first;
   /*[Step1] Allocate the PRB equally among each LCs */
   while(node)
   {
#if 0
      /*For Debugging purpose*/
      printLcLL(lcLL);
#endif
      lcInfoNode = (SchSliceBasedLcInfo *)node->node;

      /*[Exit 1]: If available PRBs are exhausted*/
      /*Loop Exit: All resources exhausted*/
      if(*availablePrb == 0)
      {
#ifdef SLICE_BASED_DEBUG_LOG
         DU_LOG("\nDennis  -->  SCH: Dedicated resources exhausted for LC:%d",lcInfoNode->lcId);
#endif
         return;
      }

      mcsIdx = lcInfoNode->ueCb->ueCfg.dlModInfo.mcsIndex;

      if(lcInfoNode->reqBO != 0)
      {
         quantum = totalAvaiPrb * lcInfoNode->weight;

         /* Special case when totalAvaiPrb * lcInfoNode->weight < 1 */
         if(quantum == 0)
         {
            break;
         }

         if((isTxPayloadLenAdded != NULLP) && (*isTxPayloadLenAdded == FALSE))
         {
            *isTxPayloadLenAdded = TRUE;
            DU_LOG("\nDEBUG  -->  SCH: LC:%d is the First node to be allocated which includes TX_PAYLOAD_HDR_LEN",\
                  lcInfoNode->lcId);
            allocBO = schSliceBasedcalculateEstimateTBSize(lcInfoNode->reqBO + TX_PAYLOAD_HDR_LEN, mcsIdx, numSymbols, quantum, &estPrb);
            allocBO = allocBO - TX_PAYLOAD_HDR_LEN;
            lcInfoNode->allocBO += allocBO;
         }
         else if((srRcvd != NULLP) && (*srRcvd == TRUE))
         {
            DU_LOG("\nDEBUG  --> SCH: LC:%d is the First node to be allocated which includes UL_GRANT_SIZE",\
                  lcInfoNode->lcId);
            *srRcvd = FALSE;
            lcInfoNode->reqBO += UL_GRANT_SIZE;
            allocBO = schSliceBasedcalculateEstimateTBSize(lcInfoNode->reqBO, mcsIdx, numSymbols, quantum, &estPrb);
            lcInfoNode->allocBO += allocBO;
         }
         else
         {
            allocBO = schSliceBasedcalculateEstimateTBSize(lcInfoNode->reqBO, mcsIdx, numSymbols, quantum, &estPrb);
            lcInfoNode->allocBO += allocBO;
         }

         /*[Step6]:Re-adjust the availablePrb Count based on
         * estimated PRB allocated*/
         *availablePrb = *availablePrb - estPrb;
         
         lcInfoNode->reqBO -= allocBO;  /*Update the reqBO with remaining bytes unallocated*/
         lcInfoNode->allocPRB += estPrb;
#ifdef SLICE_BASED_DEBUG_LOG
         DU_LOG("\nDennis  -->  SCH: Allocate LC [Algorithm: WFQ, Priority Level: %d, lcId: %d, reqBO: %d, allocBO: %d, estPRB: %d]",\
               lcInfoNode->priorLevel, lcInfoNode->lcId, lcInfoNode->reqBO, allocBO, estPrb);
#endif

         if(lcInfoNode->reqBO == 0)
         {
            remainingLc--;
         }
      }
      else
      {
         remainingLc--;
      }
      /*[Step8]:Next loop: Next LC to be picked from the list*/
      node = node->next; 
   }

    /* If is there any LC which reqBO is not zero and there are remaining PRB,  allocate the remaing PRB to LC which has reqBO */
   if(remainingLc > 0 && *availablePrb)
   {
      node = lcInfoList->first;

      while(node)
      {
         lcInfoNode = (SchSliceBasedLcInfo *)node->node;

         if(*availablePrb == 0)
         {
#ifdef SLICE_BASED_DEBUG_LOG
            DU_LOG("\nDennis  -->  SCH: (Final) Dedicated resources exhausted for LC:%d",lcInfoNode->lcId);
#endif
            return;
         }

         mcsIdx = lcInfoNode->ueCb->ueCfg.dlModInfo.mcsIndex;
         if(lcInfoNode->reqBO != 0)
         {
            allocBO = schSliceBasedcalculateEstimateTBSize(lcInfoNode->reqBO, mcsIdx, numSymbols, *availablePrb, &estPrb);
            lcInfoNode->allocBO += allocBO;

            /*[Step6]:Re-adjust the availablePrb Count based on
            * estimated PRB allocated*/
            *availablePrb = *availablePrb - estPrb;
            
            /*[Step7]*/
            lcInfoNode->reqBO -= allocBO;  /*Update the reqBO with remaining bytes unallocated*/
            lcInfoNode->allocPRB += estPrb;
         }

#ifdef SLICE_BASED_DEBUG_LOG
         DU_LOG("\nDennis  -->  SCH: (Final) Allocate LC [Algorithm: RR, lcId: %d, allocBO: %d, estPRB: %d]",lcInfoNode->lcId, allocBO, estPrb);
#endif

         /*[Step8]:Next loop: Next LC to be picked from the list*/
         node = node->next; 
      }
   }
   /*[Exit2]: All LCs are allocated in current slice*/
   return;

}



/****************************************************************************
 *
 * @brief Calculate the Estimated TBS Size based on Spec 38.421 , Sec 5.3.1.2
 *
 * @details
 *
 *    Function : schSliceBasedcalculateEstimateTBSize
 *
 *    Functionality:
 *       TBS Size calculation requires numPRB. Since exactPRB for reqBO is unknown thus 
 *       will give the PRB value(from 0 to maxRB) one by one and 
 *       try to find the TBS size closest to reqBO
 *
 * @params[in] I/P > reqBO, mcsIdx, num PDSCH symbols, 
 *             I/P > maxRB: Maximum PRB count to reach for calculating the TBS
 *             O/P > estPrb : Suitable PRB count for reaching the correct TBS
 *       
 *
 * @return TBS Size > Size which will can be allocated for this LC
 *        
 *
 *************************************************************************/
uint32_t schSliceBasedcalculateEstimateTBSize(uint32_t reqBO, uint16_t mcsIdx, uint8_t numSymbols,\
                                   uint16_t maxPRB, uint16_t *estPrb)
{
   uint32_t tbs = 0, effecBO = 0;

   *estPrb = MIN_PRB;
   
   /*Loop Exit: [Special Case for maxPRB = 1]*/
   if(maxPRB == 1)
   {
      tbs = schCalcTbSizeFromNPrb(*estPrb, mcsIdx, numSymbols);
      tbs = tbs >> 3;
      effecBO = MIN(tbs,reqBO);
      return (effecBO);
   }

   /*Loop Exit: Either estPRB reaches the maxRB or TBS is found greater than equal to reqBO*/
   do
   {
      tbs = schCalcTbSizeFromNPrb(*estPrb, mcsIdx, numSymbols);

      /*TBS size calculated in above function is in Bits. 
       * So to convert it into Bytes , we right shift by 3. 
       * Eg: tbs=128 bits(1000 0000) ; Right Shift by 3: Tbs = 0001 0000(16 bytes)*/
      tbs = tbs >> 3;
      *estPrb += 1;
   }while((tbs < reqBO) && (*estPrb < maxPRB));

   /*Effective BO is the Grant which can be provided for this LC.
    * Here,it is decided based on whether we can fully cater its requirment (reqBO) 
    * or has to provide lesser grant due to resource limitation.
    * Thus effective BO/Grant for this LC will be min of TBS calculated and reqBO*/
   effecBO = MIN(tbs,reqBO);
   return (effecBO);
}

/*******************************************************************
 *
 * @brief Allocate resource for each UE and LC with RR algorithm
 *
 * @details
 *
 *    Function : schSliceBasedRoundRobinAlgo
 *
 *    Functionality: Allocate resource for each UE and LC with RR algorithm
 * 
 * @params[in] Pointer to Cell Control Block
 *             Pointer to UE List
 *             Pointer to LC Info Control Block List
 *             Number of PDSCH symbols
 *             Number of available PRBs
 *             Scheduling Method (0:Flat, 1:Hierarchy)
 *             srRcvd Flag[For UL] : Decision flag to add UL_GRANT_SIZE     
 * @return ROK
 *         RFAIL
 *
 * ****************************************************************/
uint8_t schSliceBasedRoundRobinAlgo(SchCellCb *cellCb, CmLListCp *ueList, CmLListCp *lcInfoList, uint8_t numSymbols, \
                                 uint16_t *availablePrb, SchAlgoMethod algoMethod, bool *srRcvd)
{
   SchUeCb *ueCb = NULLP;
   uint8_t  ueId;
   CmLList *ueNode;
   CmLList *lcNode;
   CmLList *next;
   CmLListCp casLcInfoList; /* Cascade LC Info LL */
   SchSliceBasedUeCb *ueSliceBasedCb = NULLP;
   uint16_t ueQuantum, remainingPrb;

   struct timespec start, end;
   double processTime;
   clock_gettime(1, &start);

   ueNode = ueList->first;

   if(algoMethod == HIERARCHY)
   {    
      ueQuantum = *availablePrb / ueList->count;

      while(ueNode)
      {
         ueId = *(uint8_t *)(ueNode->node);
         ueCb = &cellCb->ueCb[ueId-1];
         ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;    
         remainingPrb = ueQuantum;

         schSliceBasedRoundRobinAlgoforLc(&lcInfoList[ueId-1], numSymbols, &remainingPrb, \
                                          &ueSliceBasedCb->isTxPayloadLenAdded, srRcvd);
                 
         *availablePrb -= ueQuantum - remainingPrb;
         ueNode = ueNode->next;
      }

      /* If there are remaining PRBs, do the scheduling again */
      ueNode = ueList->first;
      while(ueNode && *availablePrb > 0)
      {
         ueId = *(uint8_t *)(ueNode->node);
         ueCb = &cellCb->ueCb[ueId-1];
         ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;

         schSliceBasedRoundRobinAlgoforLc(&lcInfoList[ueId-1], numSymbols, availablePrb, \
                                          &ueSliceBasedCb->isTxPayloadLenAdded, srRcvd);
               
         ueNode = ueNode->next;
      }     
   }

   else if(algoMethod == FLAT)
   {
      cmLListInit(&casLcInfoList);

      /* Cascade the LC Info List of each UEs */
      while(ueNode)
      {
         ueId = *(uint8_t *)(ueNode->node);
         ueCb = &cellCb->ueCb[ueId-1];
         ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;

         lcNode = lcInfoList[ueId-1].first;

         while(lcNode)
         {
            if(addNodeToLList(&casLcInfoList, lcNode->node, NULLP) != ROK)
            {
               DU_LOG("\nERROR  --> Dennis : Failed to add the LC Info in FLAT algorithm method");
            }
            lcNode = lcNode->next;
         }
         ueNode = ueNode->next;
      }

      /* Sort the cascade LC Info List in terms of priority level */
      schSliceBasedSortLcByPriorLevel(&casLcInfoList, 1);

      /* Allocate the resouce for cascade LC Info list */
      schSliceBasedRoundRobinAlgoforLc(&casLcInfoList, numSymbols, availablePrb, \
                                          &ueSliceBasedCb->isTxPayloadLenAdded, srRcvd);

      /* Free the cascade LC Info list */
      lcNode = casLcInfoList.first;
      while(lcNode)
      {
         next = lcNode->next;
         SCH_FREE(lcNode, sizeof(CmLList));
         lcNode = next;
      }
   }
   else
   {
      DU_LOG("\n In schSliceBasedRoundRobinAlgo(), invalid algoMethod");
   }
   clock_gettime(1, &end);
   processTime = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1000.0;
   DU_LOG("\nDennis  -->  Measurement : Processing Time of RR Scheduling Algorithm: %f us", processTime);
}

/*******************************************************************
 *
 * @brief Allocate resource for each UE and LC with WFQ(Weight Fair Queue) algorithm
 *
 * @details
 *
 *    Function : schSliceBasedWeightedFairQueueAlgo
 *
 *    Functionality: Allocate resource for each UE and LC with WFQ(Weight Fair Queue) algorithm
 * 
 * @params[in] Pointer to Cell Control Block
 *             Pointer to UE List
 *             Pointer to LC Info Control Block List
 *             Number of PDSCH symbols
 *             Number of available PRBs
 *             Scheduling Method (0:Flat, 1:Hierarchy)
 *             srRcvd Flag[For UL] : Decision flag to add UL_GRANT_SIZE     
 * @return ROK
 *         RFAILED
 *
 * ****************************************************************/
uint8_t schSliceBasedWeightedFairQueueAlgo(SchCellCb *cellCb, CmLListCp *ueList, CmLListCp *lcInfoList, uint8_t numSymbols, \
                                 uint16_t *availablePrb, SchAlgoMethod algoMethod, bool *srRcvd)
{
   SchUeCb *ueCb = NULLP;
   uint8_t  ueId;
   CmLList *ueNode;
   CmLList *lcNode;
   CmLList *next;
   CmLListCp casLcInfoList; /* Cascade LC Info LL */
   SchSliceBasedUeCb *ueSliceBasedCb = NULLP;
   SchSliceBasedLcInfo *lcInfoNode = NULLP;
   uint16_t ueQuantum, remainingPrb, totalAvaiPrb;
   float_t totalPriorityLevel = 0;

   totalAvaiPrb = *availablePrb;
   
   ueNode = ueList->first;

   if(algoMethod == HIERARCHY)
   {    
      
      while(ueNode)
      {
         ueId = *(uint8_t *)(ueNode->node);
         ueCb = &cellCb->ueCb[ueId-1];
         ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;
         ueQuantum = *availablePrb * ueSliceBasedCb->prbWeight;
         remainingPrb = ueQuantum;

         /* Although this is WFQ algorithm, but it is for UE level (HIERARCHY) */
         /* In LC level, we are still using RR */
         schSliceBasedRoundRobinAlgoforLc(&lcInfoList[ueId-1], numSymbols, &remainingPrb, \
                                          &ueSliceBasedCb->isTxPayloadLenAdded, srRcvd);
                 
         *availablePrb -= ueQuantum - remainingPrb;
         ueNode = ueNode->next;
      }

      /* If there are remaining PRBs, do the scheduling again */
      ueNode = ueList->first;
      while(ueNode && *availablePrb > 0)
      {
         ueId = *(uint8_t *)(ueNode->node);
         ueCb = &cellCb->ueCb[ueId-1];
         ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;

         schSliceBasedRoundRobinAlgoforLc(&lcInfoList[ueId-1], numSymbols, availablePrb, \
                                          &ueSliceBasedCb->isTxPayloadLenAdded, srRcvd);
               
         ueNode = ueNode->next;
      }     
   }

   else if(algoMethod == FLAT)
   {
      cmLListInit(&casLcInfoList);

      /* Cascade the LC Info List of each UEs */
      while(ueNode)
      {
         ueId = *(uint8_t *)(ueNode->node);
         ueCb = &cellCb->ueCb[ueId-1];
         ueSliceBasedCb = (SchSliceBasedUeCb *)ueCb->schSpcUeCb;

         lcNode = lcInfoList[ueId-1].first;

         while(lcNode)
         {
            lcInfoNode = (SchSliceBasedLcInfo *)lcNode->node;
            totalPriorityLevel += lcInfoNode->priorLevel;

            if(addNodeToLList(&casLcInfoList, lcNode->node, NULLP) != ROK)
            {
               DU_LOG("\nERROR  --> Dennis : Failed to add the LC Info in FLAT algorithm method");
            }
            lcNode = lcNode->next;
         }
         ueNode = ueNode->next;
      }

      /* Sort the cascade LC Info List in terms of priority level */
      schSliceBasedSortLcByPriorLevel(&casLcInfoList, totalPriorityLevel);

      /* Allocate the resouce for cascade LC Info list */
      schSliceBasedWeightedFairQueueAlgoforLc(&casLcInfoList, numSymbols, availablePrb, \
                                          &ueSliceBasedCb->isTxPayloadLenAdded, srRcvd);

      /* Free the cascade LC Info list */
      lcNode = casLcInfoList.first;
      while(lcNode)
      {
         next = lcNode->next;
         SCH_FREE(lcNode, sizeof(CmLList));
         lcNode = next;
      }
   }
   else
   {
      DU_LOG("\n In schSliceBasedRoundRobinAlgo(), invalid algoMethod");
   }
}

/*******************************************************************
 *
 * @brief 
 *
 * @details
 *
 *    Function : setRrmPolicyWithTimer
 *
 *    Functionality: 
 *
 * @params[in] Pointer to Cell
 *            
 * @return void
 *
 * ****************************************************************/
void setRrmPolicyWithTimer(SchCellCb *cell)
{
   SchSliceBasedCellCb  *schSpcCell;
   SchSliceBasedSliceCb *sliceCb = NULLP;
   CmLList *sliceCbNode = NULLP;

   schSpcCell = (SchSliceBasedCellCb *)cell->schSpcCell;

   schSpcCell->slot_ind_count++;

   if(schSpcCell->slot_ind_count >= 500)
   {
      schSpcCell->timer_sec++;
      DU_LOG("\nDennis --> Timer: %d s", schSpcCell->timer_sec);
      schSpcCell->slot_ind_count = 0;
   }

   if(schSpcCell->timer_sec == 20)
   {
      sliceCbNode = schSpcCell->sliceCbList.first;
      
      while(sliceCbNode)
      {
         sliceCb = (SchSliceBasedSliceCb *)sliceCbNode->node;
         
         /* Adjust the RRMPolicyRatio of first slice */
         if(sliceCbNode == schSpcCell->sliceCbList.first)
         {
            sliceCb->rrmPolicyRatioInfo.dedicatedRatio = 10;
            sliceCb->rrmPolicyRatioInfo.minRatio = 70;
            sliceCb->rrmPolicyRatioInfo.maxRatio = 100;
         }
         /* Adjust the RRMPolicyRatio of second slice */
         else
         {
            sliceCb->rrmPolicyRatioInfo.dedicatedRatio = 10;
            sliceCb->rrmPolicyRatioInfo.minRatio = 30;
            sliceCb->rrmPolicyRatioInfo.maxRatio = 100;
         }

         sliceCbNode = sliceCbNode->next;
      }
   }
   else if(schSpcCell->timer_sec == 40)
   {
      sliceCbNode = schSpcCell->sliceCbList.first;

      while(sliceCbNode)
      {
         sliceCb = (SchSliceBasedSliceCb *)sliceCbNode->node;
         
         /* Adjust the RRMPolicyRatio of first slice */
         if(sliceCbNode == schSpcCell->sliceCbList.first)
         {
            sliceCb->rrmPolicyRatioInfo.dedicatedRatio = 10;
            sliceCb->rrmPolicyRatioInfo.minRatio = 30;
            sliceCb->rrmPolicyRatioInfo.maxRatio = 100;
         }
         /* Adjust the RRMPolicyRatio of second slice */
         else
         {
            sliceCb->rrmPolicyRatioInfo.dedicatedRatio = 10;
            sliceCb->rrmPolicyRatioInfo.minRatio = 70;
            sliceCb->rrmPolicyRatioInfo.maxRatio = 100;
         }

         sliceCbNode = sliceCbNode->next;
      }   
   }
   else if(schSpcCell->timer_sec == 60)
   {    
      sliceCbNode = schSpcCell->sliceCbList.first;

      while(sliceCbNode)
      {
         sliceCb = (SchSliceBasedSliceCb *)sliceCbNode->node;
         
         /* Adjust the RRMPolicyRatio of first slice */
         if(sliceCbNode == schSpcCell->sliceCbList.first)
         {
            sliceCb->rrmPolicyRatioInfo.dedicatedRatio = 10;
            sliceCb->rrmPolicyRatioInfo.minRatio = 50;
            sliceCb->rrmPolicyRatioInfo.maxRatio = 100;
         }
         /* Adjust the RRMPolicyRatio of second slice */
         else
         {
            sliceCb->rrmPolicyRatioInfo.dedicatedRatio = 10;
            sliceCb->rrmPolicyRatioInfo.minRatio = 50;
            sliceCb->rrmPolicyRatioInfo.maxRatio = 100;
         }

         sliceCbNode = sliceCbNode->next;
      }

      schSpcCell->timer_sec = 0;
   }

   
   DU_LOG("");
}

/*******************************************************************
 *
 * @brief Initializes all function pointers to Slice Based function handler
 *
 * @details
 *
 *    Function : schSliceBasedAllApisInit
 *
 *    Functionality: Initializes all function pointers to Slice Based 
 *       function handler
 *
 * @params[in] Function pointer array
 * @return void
 *
 * ****************************************************************/
void schSliceBasedAllApisInit(SchAllApis *allSliceBasedApi)
{
    /* Interface API function pointers */
    allSliceBasedApi->SchCellCfgReq = schSliceBasedCellCfgReq;
    allSliceBasedApi->SchCellDeleteReq = schSliceBasedCellDelReq;
    allSliceBasedApi->SchAddUeConfigReq = SchSliceBasedAddUeConfigReq;
    allSliceBasedApi->SchModUeConfigReq = SchSliceBasedModUeConfigReq;
    allSliceBasedApi->SchUeDeleteReq = SchSliceBasedUeDeleteReq; 
    allSliceBasedApi->SchDlHarqInd = SchSliceBasedDlHarqInd; 
    allSliceBasedApi->SchCrcInd = schSliceBasedProcessCrcInd;
    allSliceBasedApi->SchRachInd = schSliceBasedProcessRachInd;
    allSliceBasedApi->SchPagingInd = schSliceBasedPagingInd;
    allSliceBasedApi->SchRachRsrcReq = schSliceBasedRachRsrcReq; 
    allSliceBasedApi->SchRachRsrcRel = schSliceBasedRachRsrcRel;
    allSliceBasedApi->SchDlRlcBoInfo = schSliceBasedDlRlcBoInfo;
    allSliceBasedApi->SchSrUciInd = schSliceBasedSrUciInd;
    allSliceBasedApi->SchBsr = schSliceBasedBsr;
    allSliceBasedApi->SchSliceCfgReq = SchSliceBasedSliceCfgReq;
    allSliceBasedApi->SchSliceRecfgReq = SchSliceBasedSliceRecfgReq;

    /* Internal API function pointers */
    allSliceBasedApi->SchAddToDlHqRetxList = schSliceBasedAddToDlHqRetxList;
    allSliceBasedApi->SchAddToUlHqRetxList = schSliceBasedAddToUlHqRetxList;
    allSliceBasedApi->SchRemoveFrmDlHqRetxList = schSliceBasedRemoveFrmDlHqRetxList;
    allSliceBasedApi->SchRemoveFrmUlHqRetxList = schSliceBasedRemoveFrmUlHqRetxList;
    allSliceBasedApi->SchAddUeToSchedule = schSliceBasedAddUeToSchedule;
    allSliceBasedApi->SchRemoveUeFrmScheduleLst = schSliceBasedRemoveUeFrmScheduleLst;
    allSliceBasedApi->SchInitDlHqProcCb = schSliceBasedInitDlHqProcCb;
    allSliceBasedApi->SchInitUlHqProcCb = schSliceBasedInitUlHqProcCb;
    allSliceBasedApi->SchFreeDlHqProcCb = schSliceBasedFreeDlHqProcCb;
    allSliceBasedApi->SchFreeUlHqProcCb = schSliceBasedFreeUlHqProcCb;
    allSliceBasedApi->SchDeleteDlHqProcCb = schSliceBasedDeleteDlHqProcCb;
    allSliceBasedApi->SchDeleteUlHqProcCb = schSliceBasedDeleteUlHqProcCb;
    allSliceBasedApi->SchScheduleSlot = schSliceBasedScheduleSlot;
    allSliceBasedApi->SchScheduleDlLc = schSliceBasedScheduleDlLc;
    allSliceBasedApi->SchScheduleUlLc = schSliceBasedScheduleUlLc;
}
/**********************************************************************
    End of file
**********************************************************************/

