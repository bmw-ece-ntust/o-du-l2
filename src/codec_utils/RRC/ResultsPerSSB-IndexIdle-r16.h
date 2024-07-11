/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_ResultsPerSSB_IndexIdle_r16_H_
#define	_ResultsPerSSB_IndexIdle_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SSB-Index.h"
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ResultsPerSSB-IndexIdle-r16 */
typedef struct ResultsPerSSB_IndexIdle_r16 {
	SSB_Index_t	 ssb_Index_r16;
	struct ResultsPerSSB_IndexIdle_r16__ssb_Results_r16 {
		RSRP_Range_t	*ssb_RSRP_Result_r16;	/* OPTIONAL */
		RSRQ_Range_t	*ssb_RSRQ_Result_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ssb_Results_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResultsPerSSB_IndexIdle_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResultsPerSSB_IndexIdle_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_ResultsPerSSB_IndexIdle_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_ResultsPerSSB_IndexIdle_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ResultsPerSSB_IndexIdle_r16_H_ */
#include <asn_internal.h>
