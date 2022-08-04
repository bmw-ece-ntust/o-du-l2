/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_UL_DataSplitThreshold_H_
#define	_UL_DataSplitThreshold_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_DataSplitThreshold {
	UL_DataSplitThreshold_b0	= 0,
	UL_DataSplitThreshold_b100	= 1,
	UL_DataSplitThreshold_b200	= 2,
	UL_DataSplitThreshold_b400	= 3,
	UL_DataSplitThreshold_b800	= 4,
	UL_DataSplitThreshold_b1600	= 5,
	UL_DataSplitThreshold_b3200	= 6,
	UL_DataSplitThreshold_b6400	= 7,
	UL_DataSplitThreshold_b12800	= 8,
	UL_DataSplitThreshold_b25600	= 9,
	UL_DataSplitThreshold_b51200	= 10,
	UL_DataSplitThreshold_b102400	= 11,
	UL_DataSplitThreshold_b204800	= 12,
	UL_DataSplitThreshold_b409600	= 13,
	UL_DataSplitThreshold_b819200	= 14,
	UL_DataSplitThreshold_b1228800	= 15,
	UL_DataSplitThreshold_b1638400	= 16,
	UL_DataSplitThreshold_b2457600	= 17,
	UL_DataSplitThreshold_b3276800	= 18,
	UL_DataSplitThreshold_b4096000	= 19,
	UL_DataSplitThreshold_b4915200	= 20,
	UL_DataSplitThreshold_b5734400	= 21,
	UL_DataSplitThreshold_b6553600	= 22,
	UL_DataSplitThreshold_infinity	= 23,
	UL_DataSplitThreshold_spare8	= 24,
	UL_DataSplitThreshold_spare7	= 25,
	UL_DataSplitThreshold_spare6	= 26,
	UL_DataSplitThreshold_spare5	= 27,
	UL_DataSplitThreshold_spare4	= 28,
	UL_DataSplitThreshold_spare3	= 29,
	UL_DataSplitThreshold_spare2	= 30,
	UL_DataSplitThreshold_spare1	= 31
} e_UL_DataSplitThreshold;

/* UL-DataSplitThreshold */
typedef long	 UL_DataSplitThreshold_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UL_DataSplitThreshold_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UL_DataSplitThreshold;
extern const asn_INTEGER_specifics_t asn_SPC_UL_DataSplitThreshold_specs_1;
asn_struct_free_f UL_DataSplitThreshold_free;
asn_struct_print_f UL_DataSplitThreshold_print;
asn_constr_check_f UL_DataSplitThreshold_constraint;
ber_type_decoder_f UL_DataSplitThreshold_decode_ber;
der_type_encoder_f UL_DataSplitThreshold_encode_der;
xer_type_decoder_f UL_DataSplitThreshold_decode_xer;
xer_type_encoder_f UL_DataSplitThreshold_encode_xer;
oer_type_decoder_f UL_DataSplitThreshold_decode_oer;
oer_type_encoder_f UL_DataSplitThreshold_encode_oer;
per_type_decoder_f UL_DataSplitThreshold_decode_uper;
per_type_encoder_f UL_DataSplitThreshold_encode_uper;
per_type_decoder_f UL_DataSplitThreshold_decode_aper;
per_type_encoder_f UL_DataSplitThreshold_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DataSplitThreshold_H_ */
#include <asn_internal.h>
