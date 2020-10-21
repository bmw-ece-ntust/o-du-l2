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
/* This file defines API towards RLC interface */
#include "common_def.h"
#include "rgu.h"           /* RGU interface includes*/
#include "lkw.h"           /* LKW defines */
#include "ckw.h"           /* CKW defines */
#include "kwu.h"           /* KWU defines */
#include "kw_env.h"        /* RLC environment options */
#include "kw.h"            /* RLC defines */


/* header/extern include files (.x) */
#include "rgu.x"           
#include "lkw.x"           /* LKW */
#include "ckw.x"           /* CKW */
#include "kwu.x"           /* KWU */
#include "kw_err.h"
#include "kw.x"

#include "du_app_rlc_inf.h"
#include "rlc_mgr.h"

RlcDuUeCfgRsp rlcUeCfgRspOpts[] =
{
   packRlcDuUeCfgRsp,     /* 0 - loosely coupled */
   DuProcRlcUeCfgRsp,     /* 1 - tightly coupled */
   packRlcDuUeCfgRsp     /* 2 - LWLC loosely coupled */
};


/***********************************************************
 *
 * @brief  
 *
 *        Handler for the ue create response to DUAPP
 *
 * @b Description:
 *
 *        This function reports  ue create response to DUAPP
 *
 *  @param[in] post         Post structure  
 *  @param[in] cfgRsp       ue create Config Response
 *
 *  @return  uint16_t
 *      -# ROK 
 *      -# RFAILED
 *
 *************************************************************/
uint8_t SendRlcUeRspToDu(Pst *pst, RlcCfgCfmInfo *cfgRsp)
{
   /* jump to specific primitive depending on configured selector */
   uint8_t ret = ROK;
   RlcUeCfgRsp *ueRsp = NULLP;

   RLC_ALLOC_SHRABL_BUF(pst->region, pst->pool, ueRsp, sizeof(RlcUeCfgRsp));
   if(!ueRsp)
   {  
      DU_LOG("RLC: Memory allocation failed for ueRsp at SendRlcUeCreateRspToDu()");
      ret = RFAILED;
   }
   else
   {
      /* Mapping Old api to New Api */
      ret = fillRlcUeCfgRsp(ueRsp, cfgRsp);
      if(!ret)
      {
         ret = (*rlcUeCfgRspOpts[pst->selector])(pst, ueRsp);
         if(ret)
         {
            DU_LOG("RLC: Failed at SendRlcUeRspToDu()");
            RLC_FREE_SHRABL_BUF(pst->region, pst->pool, ueRsp, sizeof(RlcUeCfgRsp));
         }
      }
      else
      {
         DU_LOG("RLC: Failed at fillRlcUeCfgRsp() for event %d", pst->event);
         RLC_FREE_SHRABL_BUF(pst->region, pst->pool, ueRsp, sizeof(RlcUeCfgRsp));
      }
   }
   return ret;
} /* end of SendRlcUeRspToDu */

/**********************************************************************
         End of file
**********************************************************************/
