/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_CLI_EventTriggerConfig_r16_H_
#define	_CLI_EventTriggerConfig_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReportInterval.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "MeasTriggerQuantityCLI-r16.h"
#include <BOOLEAN.h>
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CLI_EventTriggerConfig_r16__eventId_r16_PR {
	CLI_EventTriggerConfig_r16__eventId_r16_PR_NOTHING,	/* No components present */
	CLI_EventTriggerConfig_r16__eventId_r16_PR_eventI1_r16
	/* Extensions may appear below */
	
} CLI_EventTriggerConfig_r16__eventId_r16_PR;
typedef enum CLI_EventTriggerConfig_r16__reportAmount_r16 {
	CLI_EventTriggerConfig_r16__reportAmount_r16_r1	= 0,
	CLI_EventTriggerConfig_r16__reportAmount_r16_r2	= 1,
	CLI_EventTriggerConfig_r16__reportAmount_r16_r4	= 2,
	CLI_EventTriggerConfig_r16__reportAmount_r16_r8	= 3,
	CLI_EventTriggerConfig_r16__reportAmount_r16_r16	= 4,
	CLI_EventTriggerConfig_r16__reportAmount_r16_r32	= 5,
	CLI_EventTriggerConfig_r16__reportAmount_r16_r64	= 6,
	CLI_EventTriggerConfig_r16__reportAmount_r16_infinity	= 7
} e_CLI_EventTriggerConfig_r16__reportAmount_r16;

/* CLI-EventTriggerConfig-r16 */
typedef struct CLI_EventTriggerConfig_r16 {
	struct CLI_EventTriggerConfig_r16__eventId_r16 {
		CLI_EventTriggerConfig_r16__eventId_r16_PR present;
		union CLI_EventTriggerConfig_r16__eventId_r16_u {
			struct CLI_EventTriggerConfig_r16__eventId_r16__eventI1_r16 {
				MeasTriggerQuantityCLI_r16_t	 i1_Threshold_r16;
				BOOLEAN_t	 reportOnLeave_r16;
				Hysteresis_t	 hysteresis_r16;
				TimeToTrigger_t	 timeToTrigger_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventI1_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} eventId_r16;
	ReportInterval_t	 reportInterval_r16;
	long	 reportAmount_r16;
	long	 maxReportCLI_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CLI_EventTriggerConfig_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAmount_r16_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CLI_EventTriggerConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_CLI_EventTriggerConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_CLI_EventTriggerConfig_r16_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CLI_EventTriggerConfig_r16_H_ */
#include <asn_internal.h>
