/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_ReportConfigNR_H_
#define	_ReportConfigNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportConfigNR__reportType_PR {
	ReportConfigNR__reportType_PR_NOTHING,	/* No components present */
	ReportConfigNR__reportType_PR_periodical,
	ReportConfigNR__reportType_PR_eventTriggered,
	/* Extensions may appear below */
	ReportConfigNR__reportType_PR_reportCGI,
	ReportConfigNR__reportType_PR_reportSFTD,
	ReportConfigNR__reportType_PR_condTriggerConfig_r16,
	ReportConfigNR__reportType_PR_cli_Periodical_r16,
	ReportConfigNR__reportType_PR_cli_EventTriggered_r16,
	ReportConfigNR__reportType_PR_rxTxPeriodical_r17
} ReportConfigNR__reportType_PR;

/* Forward declarations */
struct PeriodicalReportConfig;
struct EventTriggerConfig;
struct ReportCGI;
struct ReportSFTD_NR;
struct CondTriggerConfig_r16;
struct CLI_PeriodicalReportConfig_r16;
struct CLI_EventTriggerConfig_r16;
struct RxTxPeriodical_r17;

/* ReportConfigNR */
typedef struct ReportConfigNR {
	struct ReportConfigNR__reportType {
		ReportConfigNR__reportType_PR present;
		union ReportConfigNR__reportType_u {
			struct PeriodicalReportConfig	*periodical;
			struct EventTriggerConfig	*eventTriggered;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct ReportCGI	*reportCGI;
			struct ReportSFTD_NR	*reportSFTD;
			struct CondTriggerConfig_r16	*condTriggerConfig_r16;
			struct CLI_PeriodicalReportConfig_r16	*cli_Periodical_r16;
			struct CLI_EventTriggerConfig_r16	*cli_EventTriggered_r16;
			struct RxTxPeriodical_r17	*rxTxPeriodical_r17;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportConfigNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportConfigNR;
extern asn_SEQUENCE_specifics_t asn_SPC_ReportConfigNR_specs_1;
extern asn_TYPE_member_t asn_MBR_ReportConfigNR_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PeriodicalReportConfig.h"
#include "EventTriggerConfig.h"
#include "ReportCGI.h"
#include "ReportSFTD-NR.h"
#include "CondTriggerConfig-r16.h"
#include "CLI-PeriodicalReportConfig-r16.h"
#include "CLI-EventTriggerConfig-r16.h"
#include "RxTxPeriodical-r17.h"

#endif	/* _ReportConfigNR_H_ */
#include <asn_internal.h>
