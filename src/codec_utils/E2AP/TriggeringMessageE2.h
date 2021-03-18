/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-CommonDataTypes"
 * 	found in "E2AP.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_TriggeringMessageE2_H_
#define	_TriggeringMessageE2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TriggeringMessageE2 {
	TriggeringMessageE2_initiating_message	= 0,
	TriggeringMessageE2_successful_outcome	= 1,
	TriggeringMessageE2_unsuccessfull_outcome	= 2
} e_TriggeringMessageE2;

/* TriggeringMessageE2 */
typedef long	 TriggeringMessageE2_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TriggeringMessageE2_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TriggeringMessageE2;
extern const asn_INTEGER_specifics_t asn_SPC_TriggeringMessageE2_specs_1;
asn_struct_free_f TriggeringMessageE2_free;
asn_struct_print_f TriggeringMessageE2_print;
asn_constr_check_f TriggeringMessageE2_constraint;
ber_type_decoder_f TriggeringMessageE2_decode_ber;
der_type_encoder_f TriggeringMessageE2_encode_der;
xer_type_decoder_f TriggeringMessageE2_decode_xer;
xer_type_encoder_f TriggeringMessageE2_encode_xer;
oer_type_decoder_f TriggeringMessageE2_decode_oer;
oer_type_encoder_f TriggeringMessageE2_encode_oer;
per_type_decoder_f TriggeringMessageE2_decode_uper;
per_type_encoder_f TriggeringMessageE2_encode_uper;
per_type_decoder_f TriggeringMessageE2_decode_aper;
per_type_encoder_f TriggeringMessageE2_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TriggeringMessageE2_H_ */
#include <asn_internal.h>
