/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_BandParameters_v1710_H_
#define	_BandParameters_v1710_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BandParameters-v1710 */
typedef struct BandParameters_v1710 {
	struct BandParameters_v1710__srs_AntennaSwitchingBeyond4RX_r17 {
		BIT_STRING_t	 supportedSRS_TxPortSwitchBeyond4Rx_r17;
		long	*entryNumberAffectBeyond4Rx_r17;	/* OPTIONAL */
		long	*entryNumberSwitchBeyond4Rx_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_AntennaSwitchingBeyond4RX_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_v1710_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_v1710;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1710_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParameters_v1710_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _BandParameters_v1710_H_ */
#include <asn_internal.h>
