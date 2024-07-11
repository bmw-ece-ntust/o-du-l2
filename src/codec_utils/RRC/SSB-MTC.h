/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_SSB_MTC_H_
#define	_SSB_MTC_H_


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
typedef enum SSB_MTC__periodicityAndOffset_PR {
	SSB_MTC__periodicityAndOffset_PR_NOTHING,	/* No components present */
	SSB_MTC__periodicityAndOffset_PR_sf5,
	SSB_MTC__periodicityAndOffset_PR_sf10,
	SSB_MTC__periodicityAndOffset_PR_sf20,
	SSB_MTC__periodicityAndOffset_PR_sf40,
	SSB_MTC__periodicityAndOffset_PR_sf80,
	SSB_MTC__periodicityAndOffset_PR_sf160
} SSB_MTC__periodicityAndOffset_PR;
typedef enum SSB_MTC__duration {
	SSB_MTC__duration_sf1	= 0,
	SSB_MTC__duration_sf2	= 1,
	SSB_MTC__duration_sf3	= 2,
	SSB_MTC__duration_sf4	= 3,
	SSB_MTC__duration_sf5	= 4
} e_SSB_MTC__duration;

/* SSB-MTC */
typedef struct SSB_MTC {
	struct SSB_MTC__periodicityAndOffset {
		SSB_MTC__periodicityAndOffset_PR present;
		union SSB_MTC__periodicityAndOffset_u {
			long	 sf5;
			long	 sf10;
			long	 sf20;
			long	 sf40;
			long	 sf80;
			long	 sf160;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} periodicityAndOffset;
	long	 duration;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSB_MTC_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_duration_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SSB_MTC;
extern asn_SEQUENCE_specifics_t asn_SPC_SSB_MTC_specs_1;
extern asn_TYPE_member_t asn_MBR_SSB_MTC_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SSB_MTC_H_ */
#include <asn_internal.h>
