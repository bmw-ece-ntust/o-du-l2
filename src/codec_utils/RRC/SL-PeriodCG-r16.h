/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SL_PeriodCG_r16_H_
#define	_SL_PeriodCG_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_PeriodCG_r16_PR {
	SL_PeriodCG_r16_PR_NOTHING,	/* No components present */
	SL_PeriodCG_r16_PR_sl_PeriodCG1_r16,
	SL_PeriodCG_r16_PR_sl_PeriodCG2_r16
} SL_PeriodCG_r16_PR;
typedef enum SL_PeriodCG_r16__sl_PeriodCG1_r16 {
	SL_PeriodCG_r16__sl_PeriodCG1_r16_ms100	= 0,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_ms200	= 1,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_ms300	= 2,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_ms400	= 3,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_ms500	= 4,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_ms600	= 5,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_ms700	= 6,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_ms800	= 7,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_ms900	= 8,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_ms1000	= 9,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_spare6	= 10,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_spare5	= 11,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_spare4	= 12,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_spare3	= 13,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_spare2	= 14,
	SL_PeriodCG_r16__sl_PeriodCG1_r16_spare1	= 15
} e_SL_PeriodCG_r16__sl_PeriodCG1_r16;

/* SL-PeriodCG-r16 */
typedef struct SL_PeriodCG_r16 {
	SL_PeriodCG_r16_PR present;
	union SL_PeriodCG_r16_u {
		long	 sl_PeriodCG1_r16;
		long	 sl_PeriodCG2_r16;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PeriodCG_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_PeriodCG1_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_PeriodCG_r16;
extern asn_CHOICE_specifics_t asn_SPC_SL_PeriodCG_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PeriodCG_r16_1[2];
extern asn_per_constraints_t asn_PER_type_SL_PeriodCG_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PeriodCG_r16_H_ */
#include <asn_internal.h>
