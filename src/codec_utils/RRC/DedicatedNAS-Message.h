/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_DedicatedNAS_Message_H_
#define	_DedicatedNAS_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DedicatedNAS-Message */
typedef OCTET_STRING_t	 DedicatedNAS_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DedicatedNAS_Message;
asn_struct_free_f DedicatedNAS_Message_free;
asn_struct_print_f DedicatedNAS_Message_print;
asn_constr_check_f DedicatedNAS_Message_constraint;
xer_type_decoder_f DedicatedNAS_Message_decode_xer;
xer_type_encoder_f DedicatedNAS_Message_encode_xer;
per_type_decoder_f DedicatedNAS_Message_decode_uper;
per_type_encoder_f DedicatedNAS_Message_encode_uper;
per_type_decoder_f DedicatedNAS_Message_decode_aper;
per_type_encoder_f DedicatedNAS_Message_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DedicatedNAS_Message_H_ */
#include <asn_internal.h>
