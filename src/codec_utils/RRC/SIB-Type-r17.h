/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SIB_Type_r17_H_
#define	_SIB_Type_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB_Type_r17 {
	SIB_Type_r17_sibType2	= 0,
	SIB_Type_r17_sibType3	= 1,
	SIB_Type_r17_sibType4	= 2,
	SIB_Type_r17_sibType5	= 3,
	SIB_Type_r17_sibType9	= 4,
	SIB_Type_r17_sibType10_v1610	= 5,
	SIB_Type_r17_sibType11_v1610	= 6,
	SIB_Type_r17_sibType12_v1610	= 7,
	SIB_Type_r17_sibType13_v1610	= 8,
	SIB_Type_r17_sibType14_v1610	= 9,
	SIB_Type_r17_spare6	= 10,
	SIB_Type_r17_spare5	= 11,
	SIB_Type_r17_spare4	= 12,
	SIB_Type_r17_spare3	= 13,
	SIB_Type_r17_spare2	= 14,
	SIB_Type_r17_spare1	= 15
} e_SIB_Type_r17;

/* SIB-Type-r17 */
typedef long	 SIB_Type_r17_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SIB_Type_r17_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SIB_Type_r17;
extern const asn_INTEGER_specifics_t asn_SPC_SIB_Type_r17_specs_1;
asn_struct_free_f SIB_Type_r17_free;
asn_struct_print_f SIB_Type_r17_print;
asn_constr_check_f SIB_Type_r17_constraint;
xer_type_decoder_f SIB_Type_r17_decode_xer;
xer_type_encoder_f SIB_Type_r17_encode_xer;
per_type_decoder_f SIB_Type_r17_decode_uper;
per_type_encoder_f SIB_Type_r17_encode_uper;
per_type_decoder_f SIB_Type_r17_decode_aper;
per_type_encoder_f SIB_Type_r17_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_Type_r17_H_ */
#include <asn_internal.h>
