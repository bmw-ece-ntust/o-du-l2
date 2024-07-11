/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_RepFactorAndTimeGap_r17_H_
#define	_RepFactorAndTimeGap_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RepFactorAndTimeGap_r17__repetitionFactor_r17 {
	RepFactorAndTimeGap_r17__repetitionFactor_r17_n2	= 0,
	RepFactorAndTimeGap_r17__repetitionFactor_r17_n4	= 1,
	RepFactorAndTimeGap_r17__repetitionFactor_r17_n6	= 2,
	RepFactorAndTimeGap_r17__repetitionFactor_r17_n8	= 3,
	RepFactorAndTimeGap_r17__repetitionFactor_r17_n16	= 4,
	RepFactorAndTimeGap_r17__repetitionFactor_r17_n32	= 5,
	RepFactorAndTimeGap_r17__repetitionFactor_r17_spare2	= 6,
	RepFactorAndTimeGap_r17__repetitionFactor_r17_spare1	= 7
} e_RepFactorAndTimeGap_r17__repetitionFactor_r17;
typedef enum RepFactorAndTimeGap_r17__timeGap_r17 {
	RepFactorAndTimeGap_r17__timeGap_r17_s1	= 0,
	RepFactorAndTimeGap_r17__timeGap_r17_s2	= 1,
	RepFactorAndTimeGap_r17__timeGap_r17_s4	= 2,
	RepFactorAndTimeGap_r17__timeGap_r17_s8	= 3,
	RepFactorAndTimeGap_r17__timeGap_r17_s16	= 4,
	RepFactorAndTimeGap_r17__timeGap_r17_s32	= 5,
	RepFactorAndTimeGap_r17__timeGap_r17_spare2	= 6,
	RepFactorAndTimeGap_r17__timeGap_r17_spare1	= 7
} e_RepFactorAndTimeGap_r17__timeGap_r17;

/* RepFactorAndTimeGap-r17 */
typedef struct RepFactorAndTimeGap_r17 {
	long	 repetitionFactor_r17;
	long	 timeGap_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RepFactorAndTimeGap_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_repetitionFactor_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_timeGap_r17_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RepFactorAndTimeGap_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_RepFactorAndTimeGap_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_RepFactorAndTimeGap_r17_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RepFactorAndTimeGap_r17_H_ */
#include <asn_internal.h>
