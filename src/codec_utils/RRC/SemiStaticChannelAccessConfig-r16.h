/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SemiStaticChannelAccessConfig_r16_H_
#define	_SemiStaticChannelAccessConfig_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SemiStaticChannelAccessConfig_r16__period {
	SemiStaticChannelAccessConfig_r16__period_ms1	= 0,
	SemiStaticChannelAccessConfig_r16__period_ms2	= 1,
	SemiStaticChannelAccessConfig_r16__period_ms2dot5	= 2,
	SemiStaticChannelAccessConfig_r16__period_ms4	= 3,
	SemiStaticChannelAccessConfig_r16__period_ms5	= 4,
	SemiStaticChannelAccessConfig_r16__period_ms10	= 5
} e_SemiStaticChannelAccessConfig_r16__period;

/* SemiStaticChannelAccessConfig-r16 */
typedef struct SemiStaticChannelAccessConfig_r16 {
	long	 period;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SemiStaticChannelAccessConfig_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_period_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SemiStaticChannelAccessConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SemiStaticChannelAccessConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SemiStaticChannelAccessConfig_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SemiStaticChannelAccessConfig_r16_H_ */
#include <asn_internal.h>
