/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_BWP_Id_H_
#define	_BWP_Id_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BWP-Id */
typedef long	 BWP_Id_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BWP_Id_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BWP_Id;
asn_struct_free_f BWP_Id_free;
asn_struct_print_f BWP_Id_print;
asn_constr_check_f BWP_Id_constraint;
xer_type_decoder_f BWP_Id_decode_xer;
xer_type_encoder_f BWP_Id_encode_xer;
per_type_decoder_f BWP_Id_decode_uper;
per_type_encoder_f BWP_Id_encode_uper;
per_type_decoder_f BWP_Id_decode_aper;
per_type_encoder_f BWP_Id_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _BWP_Id_H_ */
#include <asn_internal.h>
