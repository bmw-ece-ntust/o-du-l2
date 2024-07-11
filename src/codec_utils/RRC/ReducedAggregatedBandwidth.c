/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "ReducedAggregatedBandwidth.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_ReducedAggregatedBandwidth_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  11 }	/* (0..11) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_ReducedAggregatedBandwidth_value2enum_1[] = {
	{ 0,	4,	"mhz0" },
	{ 1,	5,	"mhz10" },
	{ 2,	5,	"mhz20" },
	{ 3,	5,	"mhz30" },
	{ 4,	5,	"mhz40" },
	{ 5,	5,	"mhz50" },
	{ 6,	5,	"mhz60" },
	{ 7,	5,	"mhz80" },
	{ 8,	6,	"mhz100" },
	{ 9,	6,	"mhz200" },
	{ 10,	6,	"mhz300" },
	{ 11,	6,	"mhz400" }
};
static const unsigned int asn_MAP_ReducedAggregatedBandwidth_enum2value_1[] = {
	0,	/* mhz0(0) */
	1,	/* mhz10(1) */
	8,	/* mhz100(8) */
	2,	/* mhz20(2) */
	9,	/* mhz200(9) */
	3,	/* mhz30(3) */
	10,	/* mhz300(10) */
	4,	/* mhz40(4) */
	11,	/* mhz400(11) */
	5,	/* mhz50(5) */
	6,	/* mhz60(6) */
	7	/* mhz80(7) */
};
const asn_INTEGER_specifics_t asn_SPC_ReducedAggregatedBandwidth_specs_1 = {
	asn_MAP_ReducedAggregatedBandwidth_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ReducedAggregatedBandwidth_enum2value_1,	/* N => "tag"; sorted by N */
	12,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ReducedAggregatedBandwidth_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ReducedAggregatedBandwidth = {
	"ReducedAggregatedBandwidth",
	"ReducedAggregatedBandwidth",
	&asn_OP_NativeEnumerated,
	asn_DEF_ReducedAggregatedBandwidth_tags_1,
	sizeof(asn_DEF_ReducedAggregatedBandwidth_tags_1)
		/sizeof(asn_DEF_ReducedAggregatedBandwidth_tags_1[0]), /* 1 */
	asn_DEF_ReducedAggregatedBandwidth_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReducedAggregatedBandwidth_tags_1)
		/sizeof(asn_DEF_ReducedAggregatedBandwidth_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ReducedAggregatedBandwidth_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ReducedAggregatedBandwidth_specs_1	/* Additional specs */
};

