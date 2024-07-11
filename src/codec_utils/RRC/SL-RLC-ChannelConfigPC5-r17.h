/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SL_RLC_ChannelConfigPC5_r17_H_
#define	_SL_RLC_ChannelConfigPC5_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-RLC-ChannelID-r17.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_RLC_ConfigPC5_r16;
struct SL_LogicalChannelConfigPC5_r16;

/* SL-RLC-ChannelConfigPC5-r17 */
typedef struct SL_RLC_ChannelConfigPC5_r17 {
	SL_RLC_ChannelID_r17_t	 sl_RLC_ChannelID_PC5_r17;
	struct SL_RLC_ConfigPC5_r16	*sl_RLC_ConfigPC5_r17;	/* OPTIONAL */
	struct SL_LogicalChannelConfigPC5_r16	*sl_MAC_LogicalChannelConfigPC5_r17;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_RLC_ChannelConfigPC5_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_RLC_ChannelConfigPC5_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_RLC_ChannelConfigPC5_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_RLC_ChannelConfigPC5_r17_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SL-RLC-ConfigPC5-r16.h"
#include "SL-LogicalChannelConfigPC5-r16.h"

#endif	/* _SL_RLC_ChannelConfigPC5_r17_H_ */
#include <asn_internal.h>
