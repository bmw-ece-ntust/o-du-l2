/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MUSIM_GapInfo_r17_H_
#define	_MUSIM_GapInfo_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MUSIM_GapInfo_r17__musim_GapLength_r17 {
	MUSIM_GapInfo_r17__musim_GapLength_r17_ms3	= 0,
	MUSIM_GapInfo_r17__musim_GapLength_r17_ms4	= 1,
	MUSIM_GapInfo_r17__musim_GapLength_r17_ms6	= 2,
	MUSIM_GapInfo_r17__musim_GapLength_r17_ms10	= 3,
	MUSIM_GapInfo_r17__musim_GapLength_r17_ms20	= 4
} e_MUSIM_GapInfo_r17__musim_GapLength_r17;
typedef enum MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR {
	MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR_NOTHING,	/* No components present */
	MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR_ms20_r17,
	MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR_ms40_r17,
	MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR_ms80_r17,
	MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR_ms160_r17,
	MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR_ms320_r17,
	MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR_ms640_r17,
	MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR_ms1280_r17,
	MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR_ms2560_r17,
	MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR_ms5120_r17
	/* Extensions may appear below */
	
} MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR;

/* Forward declarations */
struct MUSIM_Starting_SFN_AndSubframe_r17;

/* MUSIM-GapInfo-r17 */
typedef struct MUSIM_GapInfo_r17 {
	struct MUSIM_Starting_SFN_AndSubframe_r17	*musim_Starting_SFN_AndSubframe_r17;	/* OPTIONAL */
	long	*musim_GapLength_r17;	/* OPTIONAL */
	struct MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17 {
		MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_PR present;
		union MUSIM_GapInfo_r17__musim_GapRepetitionAndOffset_r17_u {
			long	 ms20_r17;
			long	 ms40_r17;
			long	 ms80_r17;
			long	 ms160_r17;
			long	 ms320_r17;
			long	 ms640_r17;
			long	 ms1280_r17;
			long	 ms2560_r17;
			long	 ms5120_r17;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *musim_GapRepetitionAndOffset_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MUSIM_GapInfo_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_musim_GapLength_r17_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MUSIM_GapInfo_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_MUSIM_GapInfo_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_MUSIM_GapInfo_r17_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MUSIM-Starting-SFN-AndSubframe-r17.h"

#endif	/* _MUSIM_GapInfo_r17_H_ */
#include <asn_internal.h>
