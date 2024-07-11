/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Descriptions"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_InitiatingMessage_H_
#define	_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCode.h"
#include "Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "Reset.h"
#include "ResetAcknowledge.h"
#include "F1SetupRequest.h"
#include "F1SetupResponse.h"
#include "F1SetupFailure.h"
#include "GNBDUConfigurationUpdate.h"
#include "GNBDUConfigurationUpdateAcknowledge.h"
#include "GNBDUConfigurationUpdateFailure.h"
#include "GNBCUConfigurationUpdate.h"
#include "GNBCUConfigurationUpdateAcknowledge.h"
#include "GNBCUConfigurationUpdateFailure.h"
#include "UEContextSetupRequest.h"
#include "UEContextSetupResponse.h"
#include "UEContextSetupFailure.h"
#include "UEContextReleaseCommand.h"
#include "UEContextReleaseComplete.h"
#include "UEContextModificationRequest.h"
#include "UEContextModificationResponse.h"
#include "UEContextModificationFailure.h"
#include "UEContextModificationRequired.h"
#include "UEContextModificationConfirm.h"
#include "UEContextModificationRefuse.h"
#include "WriteReplaceWarningRequest.h"
#include "WriteReplaceWarningResponse.h"
#include "PWSCancelRequest.h"
#include "PWSCancelResponse.h"
#include "GNBDUResourceCoordinationRequest.h"
#include "GNBDUResourceCoordinationResponse.h"
#include "ErrorIndication.h"
#include "UEContextReleaseRequest.h"
#include "DLRRCMessageTransfer.h"
#include "ULRRCMessageTransfer.h"
#include "UEInactivityNotification.h"
#include "PrivateMessage.h"
#include "InitialULRRCMessageTransfer.h"
#include "SystemInformationDeliveryCommand.h"
#include "PagingF1AP.h"
#include "Notify.h"
#include "PWSRestartIndication.h"
#include "PWSFailureIndication.h"
#include "GNBDUStatusIndication.h"
#include "RRCDeliveryReport.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InitiatingMessage__value_PR {
	InitiatingMessage__value_PR_NOTHING,	/* No components present */
	InitiatingMessage__value_PR_Reset,
	InitiatingMessage__value_PR_F1SetupRequest,
	InitiatingMessage__value_PR_GNBDUConfigurationUpdate,
	InitiatingMessage__value_PR_GNBCUConfigurationUpdate,
	InitiatingMessage__value_PR_UEContextSetupRequest,
	InitiatingMessage__value_PR_UEContextReleaseCommand,
	InitiatingMessage__value_PR_UEContextModificationRequest,
	InitiatingMessage__value_PR_UEContextModificationRequired,
	InitiatingMessage__value_PR_WriteReplaceWarningRequest,
	InitiatingMessage__value_PR_PWSCancelRequest,
	InitiatingMessage__value_PR_GNBDUResourceCoordinationRequest,
	InitiatingMessage__value_PR_ErrorIndication,
	InitiatingMessage__value_PR_UEContextReleaseRequest,
	InitiatingMessage__value_PR_DLRRCMessageTransfer,
	InitiatingMessage__value_PR_ULRRCMessageTransfer,
	InitiatingMessage__value_PR_UEInactivityNotification,
	InitiatingMessage__value_PR_PrivateMessage,
	InitiatingMessage__value_PR_InitialULRRCMessageTransfer,
	InitiatingMessage__value_PR_SystemInformationDeliveryCommand,
	InitiatingMessage__value_PR_Paging,
	InitiatingMessage__value_PR_Notify,
	InitiatingMessage__value_PR_PWSRestartIndication,
	InitiatingMessage__value_PR_PWSFailureIndication,
	InitiatingMessage__value_PR_GNBDUStatusIndication,
	InitiatingMessage__value_PR_RRCDeliveryReport
} InitiatingMessage__value_PR;

/* InitiatingMessage */
typedef struct InitiatingMessage {
	ProcedureCode_t	 procedureCode;
	Criticality_t	 criticality;
	struct InitiatingMessage__value {
		InitiatingMessage__value_PR present;
		union InitiatingMessage__value_u {
			Reset_t	 Reset;
			F1SetupRequest_t	 F1SetupRequest;
			GNBDUConfigurationUpdate_t	 GNBDUConfigurationUpdate;
			GNBCUConfigurationUpdate_t	 GNBCUConfigurationUpdate;
			UEContextSetupRequest_t	 UEContextSetupRequest;
			UEContextReleaseCommand_t	 UEContextReleaseCommand;
			UEContextModificationRequest_t	 UEContextModificationRequest;
			UEContextModificationRequired_t	 UEContextModificationRequired;
			WriteReplaceWarningRequest_t	 WriteReplaceWarningRequest;
			PWSCancelRequest_t	 PWSCancelRequest;
			GNBDUResourceCoordinationRequest_t	 GNBDUResourceCoordinationRequest;
			ErrorIndication_t	 ErrorIndication;
			UEContextReleaseRequest_t	 UEContextReleaseRequest;
			DLRRCMessageTransfer_t	 DLRRCMessageTransfer;
			ULRRCMessageTransfer_t	 ULRRCMessageTransfer;
			UEInactivityNotification_t	 UEInactivityNotification;
			PrivateMessage_t	 PrivateMessage;
			InitialULRRCMessageTransfer_t	 InitialULRRCMessageTransfer;
			SystemInformationDeliveryCommand_t	 SystemInformationDeliveryCommand;
			Paging_t	 Paging;
			Notify_t	 Notify;
			PWSRestartIndication_t	 PWSRestartIndication;
			PWSFailureIndication_t	 PWSFailureIndication;
			GNBDUStatusIndication_t	 GNBDUStatusIndication;
			RRCDeliveryReport_t	 RRCDeliveryReport;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _InitiatingMessage_H_ */
#include <asn_internal.h>
