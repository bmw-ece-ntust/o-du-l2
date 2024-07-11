/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_MRDC_SecondaryCellGroupConfig_H_
#define	_MRDC_SecondaryCellGroupConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MRDC_SecondaryCellGroupConfig__mrdc_ReleaseAndAdd {
	MRDC_SecondaryCellGroupConfig__mrdc_ReleaseAndAdd_true	= 0
} e_MRDC_SecondaryCellGroupConfig__mrdc_ReleaseAndAdd;
typedef enum MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup_PR {
	MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup_PR_NOTHING,	/* No components present */
	MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup_PR_nr_SCG,
	MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup_PR_eutra_SCG
} MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup_PR;

/* MRDC-SecondaryCellGroupConfig */
typedef struct MRDC_SecondaryCellGroupConfig {
	long	*mrdc_ReleaseAndAdd;	/* OPTIONAL */
	struct MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup {
		MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup_PR present;
		union MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup_u {
			OCTET_STRING_t	 nr_SCG;
			OCTET_STRING_t	 eutra_SCG;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mrdc_SecondaryCellGroup;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MRDC_SecondaryCellGroupConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mrdc_ReleaseAndAdd_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MRDC_SecondaryCellGroupConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_MRDC_SecondaryCellGroupConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_MRDC_SecondaryCellGroupConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MRDC_SecondaryCellGroupConfig_H_ */
#include <asn_internal.h>
