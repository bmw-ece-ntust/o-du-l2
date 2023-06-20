/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Descriptions"
 * 	found in "../../ASN1_Input/E2APV0300.asn1"
 * 	`asn1c -D ../../E2_v3.0_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_InitiatingMessageE2_H_
#define	_InitiatingMessageE2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCodeE2.h"
#include "CriticalityE2.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "RICsubscriptionRequest.h"
#include "RICsubscriptionResponse.h"
#include "RICsubscriptionFailure.h"
#include "RICsubscriptionDeleteRequest.h"
#include "RICsubscriptionDeleteResponse.h"
#include "RICsubscriptionDeleteFailure.h"
#include "RICsubscriptionModificationRequest.h"
#include "RICsubscriptionModificationResponse.h"
#include "RICsubscriptionModificationFailure.h"
#include "RICsubscriptionModificationRequired.h"
#include "RICsubscriptionModificationConfirm.h"
#include "RICsubscriptionModificationRefuse.h"
#include "RICQueryRequest.h"
#include "RICQueryResponse.h"
#include "RICQueryFailure.h"
#include "RICserviceUpdate.h"
#include "RICserviceUpdateAcknowledge.h"
#include "RICserviceUpdateFailure.h"
#include "RICcontrolRequest.h"
#include "RICcontrolAcknowledge.h"
#include "RICcontrolFailure.h"
#include "E2setupRequest.h"
#include "E2setupResponse.h"
#include "E2setupFailure.h"
#include "E2nodeConfigurationUpdate.h"
#include "E2nodeConfigurationUpdateAcknowledge.h"
#include "E2nodeConfigurationUpdateFailure.h"
#include "E2connectionUpdate.h"
#include "E2connectionUpdateAcknowledge.h"
#include "E2connectionUpdateFailure.h"
#include "ResetRequestE2.h"
#include "ResetResponseE2.h"
#include "E2RemovalRequest.h"
#include "E2RemovalResponse.h"
#include "E2RemovalFailure.h"
#include "RICindication.h"
#include "RICserviceQuery.h"
#include "ErrorIndicationE2.h"
#include "RICsubscriptionDeleteRequired.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InitiatingMessageE2__value_PR {
	InitiatingMessageE2__value_PR_NOTHING,	/* No components present */
	InitiatingMessageE2__value_PR_RICsubscriptionRequest,
	InitiatingMessageE2__value_PR_RICsubscriptionDeleteRequest,
	InitiatingMessageE2__value_PR_RICsubscriptionModificationRequest,
	InitiatingMessageE2__value_PR_RICsubscriptionModificationRequired,
	InitiatingMessageE2__value_PR_RICQueryRequest,
	InitiatingMessageE2__value_PR_RICserviceUpdate,
	InitiatingMessageE2__value_PR_RICcontrolRequest,
	InitiatingMessageE2__value_PR_E2setupRequest,
	InitiatingMessageE2__value_PR_E2nodeConfigurationUpdate,
	InitiatingMessageE2__value_PR_E2connectionUpdate,
	InitiatingMessageE2__value_PR_ResetRequestE2,
	InitiatingMessageE2__value_PR_E2RemovalRequest,
	InitiatingMessageE2__value_PR_RICindication,
	InitiatingMessageE2__value_PR_RICserviceQuery,
	InitiatingMessageE2__value_PR_ErrorIndicationE2,
	InitiatingMessageE2__value_PR_RICsubscriptionDeleteRequired
} InitiatingMessageE2__value_PR;

/* InitiatingMessageE2 */
typedef struct InitiatingMessageE2 {
	ProcedureCodeE2_t	 procedureCode;
	CriticalityE2_t	 criticality;
	struct InitiatingMessageE2__value {
		InitiatingMessageE2__value_PR present;
		union InitiatingMessageE2__value_u {
			RICsubscriptionRequest_t	 RICsubscriptionRequest;
			RICsubscriptionDeleteRequest_t	 RICsubscriptionDeleteRequest;
			RICsubscriptionModificationRequest_t	 RICsubscriptionModificationRequest;
			RICsubscriptionModificationRequired_t	 RICsubscriptionModificationRequired;
			RICQueryRequest_t	 RICQueryRequest;
			RICserviceUpdate_t	 RICserviceUpdate;
			RICcontrolRequest_t	 RICcontrolRequest;
			E2setupRequest_t	 E2setupRequest;
			E2nodeConfigurationUpdate_t	 E2nodeConfigurationUpdate;
			E2connectionUpdate_t	 E2connectionUpdate;
			ResetRequestE2_t	 ResetRequestE2;
			E2RemovalRequest_t	 E2RemovalRequest;
			RICindication_t	 RICindication;
			RICserviceQuery_t	 RICserviceQuery;
			ErrorIndicationE2_t	 ErrorIndicationE2;
			RICsubscriptionDeleteRequired_t	 RICsubscriptionDeleteRequired;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitiatingMessageE2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitiatingMessageE2;
extern asn_SEQUENCE_specifics_t asn_SPC_InitiatingMessageE2_specs_1;
extern asn_TYPE_member_t asn_MBR_InitiatingMessageE2_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _InitiatingMessageE2_H_ */
#include <asn_internal.h>
