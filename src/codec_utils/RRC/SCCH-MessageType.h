/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SCCH_MessageType_H_
#define	_SCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SCCH_MessageType_PR {
	SCCH_MessageType_PR_NOTHING,	/* No components present */
	SCCH_MessageType_PR_c1,
	SCCH_MessageType_PR_messageClassExtension
} SCCH_MessageType_PR;
typedef enum SCCH_MessageType__c1_PR {
	SCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	SCCH_MessageType__c1_PR_measurementReportSidelink,
	SCCH_MessageType__c1_PR_rrcReconfigurationSidelink,
	SCCH_MessageType__c1_PR_rrcReconfigurationCompleteSidelink,
	SCCH_MessageType__c1_PR_rrcReconfigurationFailureSidelink,
	SCCH_MessageType__c1_PR_ueCapabilityEnquirySidelink,
	SCCH_MessageType__c1_PR_ueCapabilityInformationSidelink,
	SCCH_MessageType__c1_PR_uuMessageTransferSidelink_r17,
	SCCH_MessageType__c1_PR_remoteUEInformationSidelink_r17
} SCCH_MessageType__c1_PR;
typedef enum SCCH_MessageType__messageClassExtension_PR {
	SCCH_MessageType__messageClassExtension_PR_NOTHING,	/* No components present */
	SCCH_MessageType__messageClassExtension_PR_c2,
	SCCH_MessageType__messageClassExtension_PR_messageClassExtensionFuture_r17
} SCCH_MessageType__messageClassExtension_PR;
typedef enum SCCH_MessageType__messageClassExtension__c2_PR {
	SCCH_MessageType__messageClassExtension__c2_PR_NOTHING,	/* No components present */
	SCCH_MessageType__messageClassExtension__c2_PR_notificationMessageSidelink_r17,
	SCCH_MessageType__messageClassExtension__c2_PR_ueAssistanceInformationSidelink_r17,
	SCCH_MessageType__messageClassExtension__c2_PR_spare6,
	SCCH_MessageType__messageClassExtension__c2_PR_spare5,
	SCCH_MessageType__messageClassExtension__c2_PR_spare4,
	SCCH_MessageType__messageClassExtension__c2_PR_spare3,
	SCCH_MessageType__messageClassExtension__c2_PR_spare2,
	SCCH_MessageType__messageClassExtension__c2_PR_spare1
} SCCH_MessageType__messageClassExtension__c2_PR;

/* Forward declarations */
struct MeasurementReportSidelink;
struct RRCReconfigurationSidelink;
struct RRCReconfigurationCompleteSidelink;
struct RRCReconfigurationFailureSidelink;
struct UECapabilityEnquirySidelink;
struct UECapabilityInformationSidelink;
struct UuMessageTransferSidelink_r17;
struct RemoteUEInformationSidelink_r17;
struct NotificationMessageSidelink_r17;
struct UEAssistanceInformationSidelink_r17;

/* SCCH-MessageType */
typedef struct SCCH_MessageType {
	SCCH_MessageType_PR present;
	union SCCH_MessageType_u {
		struct SCCH_MessageType__c1 {
			SCCH_MessageType__c1_PR present;
			union SCCH_MessageType__c1_u {
				struct MeasurementReportSidelink	*measurementReportSidelink;
				struct RRCReconfigurationSidelink	*rrcReconfigurationSidelink;
				struct RRCReconfigurationCompleteSidelink	*rrcReconfigurationCompleteSidelink;
				struct RRCReconfigurationFailureSidelink	*rrcReconfigurationFailureSidelink;
				struct UECapabilityEnquirySidelink	*ueCapabilityEnquirySidelink;
				struct UECapabilityInformationSidelink	*ueCapabilityInformationSidelink;
				struct UuMessageTransferSidelink_r17	*uuMessageTransferSidelink_r17;
				struct RemoteUEInformationSidelink_r17	*remoteUEInformationSidelink_r17;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *c1;
		struct SCCH_MessageType__messageClassExtension {
			SCCH_MessageType__messageClassExtension_PR present;
			union SCCH_MessageType__messageClassExtension_u {
				struct SCCH_MessageType__messageClassExtension__c2 {
					SCCH_MessageType__messageClassExtension__c2_PR present;
					union SCCH_MessageType__messageClassExtension__c2_u {
						struct NotificationMessageSidelink_r17	*notificationMessageSidelink_r17;
						struct UEAssistanceInformationSidelink_r17	*ueAssistanceInformationSidelink_r17;
						NULL_t	 spare6;
						NULL_t	 spare5;
						NULL_t	 spare4;
						NULL_t	 spare3;
						NULL_t	 spare2;
						NULL_t	 spare1;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *c2;
				struct SCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r17 {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *messageClassExtensionFuture_r17;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_SCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_SCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_SCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasurementReportSidelink.h"
#include "RRCReconfigurationSidelink.h"
#include "RRCReconfigurationCompleteSidelink.h"
#include "RRCReconfigurationFailureSidelink.h"
#include "UECapabilityEnquirySidelink.h"
#include "UECapabilityInformationSidelink.h"
#include "UuMessageTransferSidelink-r17.h"
#include "RemoteUEInformationSidelink-r17.h"
#include "NotificationMessageSidelink-r17.h"
#include "UEAssistanceInformationSidelink-r17.h"

#endif	/* _SCCH_MessageType_H_ */
#include <asn_internal.h>
