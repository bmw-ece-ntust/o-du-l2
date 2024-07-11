/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "BandCombination-UplinkTxSwitch-v1720.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_uplinkTxSwitching_OptionSupport2T2T_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_uplinkTxSwitching_OptionSupport2T2T_r17_value2enum_3[] = {
	{ 0,	10,	"switchedUL" },
	{ 1,	6,	"dualUL" },
	{ 2,	4,	"both" }
};
static const unsigned int asn_MAP_uplinkTxSwitching_OptionSupport2T2T_r17_enum2value_3[] = {
	2,	/* both(2) */
	1,	/* dualUL(1) */
	0	/* switchedUL(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_uplinkTxSwitching_OptionSupport2T2T_r17_specs_3 = {
	asn_MAP_uplinkTxSwitching_OptionSupport2T2T_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_uplinkTxSwitching_OptionSupport2T2T_r17_enum2value_3,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_uplinkTxSwitching_OptionSupport2T2T_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uplinkTxSwitching_OptionSupport2T2T_r17_3 = {
	"uplinkTxSwitching-OptionSupport2T2T-r17",
	"uplinkTxSwitching-OptionSupport2T2T-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_uplinkTxSwitching_OptionSupport2T2T_r17_tags_3,
	sizeof(asn_DEF_uplinkTxSwitching_OptionSupport2T2T_r17_tags_3)
		/sizeof(asn_DEF_uplinkTxSwitching_OptionSupport2T2T_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_uplinkTxSwitching_OptionSupport2T2T_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_uplinkTxSwitching_OptionSupport2T2T_r17_tags_3)
		/sizeof(asn_DEF_uplinkTxSwitching_OptionSupport2T2T_r17_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_uplinkTxSwitching_OptionSupport2T2T_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_uplinkTxSwitching_OptionSupport2T2T_r17_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandCombination_UplinkTxSwitch_v1720_1[] = {
	{ ATF_POINTER, 2, offsetof(struct BandCombination_UplinkTxSwitch_v1720, bandCombination_v1720),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandCombination_v1720,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"bandCombination-v1720"
		},
	{ ATF_POINTER, 1, offsetof(struct BandCombination_UplinkTxSwitch_v1720, uplinkTxSwitching_OptionSupport2T2T_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_uplinkTxSwitching_OptionSupport2T2T_r17_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"uplinkTxSwitching-OptionSupport2T2T-r17"
		},
};
static const int asn_MAP_BandCombination_UplinkTxSwitch_v1720_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_BandCombination_UplinkTxSwitch_v1720_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandCombination_UplinkTxSwitch_v1720_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandCombination-v1720 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkTxSwitching-OptionSupport2T2T-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandCombination_UplinkTxSwitch_v1720_specs_1 = {
	sizeof(struct BandCombination_UplinkTxSwitch_v1720),
	offsetof(struct BandCombination_UplinkTxSwitch_v1720, _asn_ctx),
	asn_MAP_BandCombination_UplinkTxSwitch_v1720_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_BandCombination_UplinkTxSwitch_v1720_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandCombination_UplinkTxSwitch_v1720 = {
	"BandCombination-UplinkTxSwitch-v1720",
	"BandCombination-UplinkTxSwitch-v1720",
	&asn_OP_SEQUENCE,
	asn_DEF_BandCombination_UplinkTxSwitch_v1720_tags_1,
	sizeof(asn_DEF_BandCombination_UplinkTxSwitch_v1720_tags_1)
		/sizeof(asn_DEF_BandCombination_UplinkTxSwitch_v1720_tags_1[0]), /* 1 */
	asn_DEF_BandCombination_UplinkTxSwitch_v1720_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombination_UplinkTxSwitch_v1720_tags_1)
		/sizeof(asn_DEF_BandCombination_UplinkTxSwitch_v1720_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BandCombination_UplinkTxSwitch_v1720_1,
	2,	/* Elements count */
	&asn_SPC_BandCombination_UplinkTxSwitch_v1720_specs_1	/* Additional specs */
};

