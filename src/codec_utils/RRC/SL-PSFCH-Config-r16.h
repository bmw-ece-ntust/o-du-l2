/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SL_PSFCH_Config_r16_H_
#define	_SL_PSFCH_Config_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_PSFCH_Config_r16__sl_PSFCH_Period_r16 {
	SL_PSFCH_Config_r16__sl_PSFCH_Period_r16_sl0	= 0,
	SL_PSFCH_Config_r16__sl_PSFCH_Period_r16_sl1	= 1,
	SL_PSFCH_Config_r16__sl_PSFCH_Period_r16_sl2	= 2,
	SL_PSFCH_Config_r16__sl_PSFCH_Period_r16_sl4	= 3
} e_SL_PSFCH_Config_r16__sl_PSFCH_Period_r16;
typedef enum SL_PSFCH_Config_r16__sl_NumMuxCS_Pair_r16 {
	SL_PSFCH_Config_r16__sl_NumMuxCS_Pair_r16_n1	= 0,
	SL_PSFCH_Config_r16__sl_NumMuxCS_Pair_r16_n2	= 1,
	SL_PSFCH_Config_r16__sl_NumMuxCS_Pair_r16_n3	= 2,
	SL_PSFCH_Config_r16__sl_NumMuxCS_Pair_r16_n6	= 3
} e_SL_PSFCH_Config_r16__sl_NumMuxCS_Pair_r16;
typedef enum SL_PSFCH_Config_r16__sl_MinTimeGapPSFCH_r16 {
	SL_PSFCH_Config_r16__sl_MinTimeGapPSFCH_r16_sl2	= 0,
	SL_PSFCH_Config_r16__sl_MinTimeGapPSFCH_r16_sl3	= 1
} e_SL_PSFCH_Config_r16__sl_MinTimeGapPSFCH_r16;
typedef enum SL_PSFCH_Config_r16__sl_PSFCH_CandidateResourceType_r16 {
	SL_PSFCH_Config_r16__sl_PSFCH_CandidateResourceType_r16_startSubCH	= 0,
	SL_PSFCH_Config_r16__sl_PSFCH_CandidateResourceType_r16_allocSubCH	= 1
} e_SL_PSFCH_Config_r16__sl_PSFCH_CandidateResourceType_r16;

/* SL-PSFCH-Config-r16 */
typedef struct SL_PSFCH_Config_r16 {
	long	*sl_PSFCH_Period_r16;	/* OPTIONAL */
	BIT_STRING_t	*sl_PSFCH_RB_Set_r16;	/* OPTIONAL */
	long	*sl_NumMuxCS_Pair_r16;	/* OPTIONAL */
	long	*sl_MinTimeGapPSFCH_r16;	/* OPTIONAL */
	long	*sl_PSFCH_HopID_r16;	/* OPTIONAL */
	long	*sl_PSFCH_CandidateResourceType_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_PSFCH_Config_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_PSFCH_Period_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_NumMuxCS_Pair_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_MinTimeGapPSFCH_r16_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sl_PSFCH_CandidateResourceType_r16_17;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_PSFCH_Config_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_PSFCH_Config_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_PSFCH_Config_r16_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_PSFCH_Config_r16_H_ */
#include <asn_internal.h>
