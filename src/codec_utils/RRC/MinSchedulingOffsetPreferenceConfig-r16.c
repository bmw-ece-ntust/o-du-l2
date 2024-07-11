/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "MinSchedulingOffsetPreferenceConfig-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_minSchedulingOffsetPreferenceProhibitTimer_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_minSchedulingOffsetPreferenceProhibitTimer_r16_value2enum_2[] = {
	{ 0,	2,	"s0" },
	{ 1,	6,	"s0dot5" },
	{ 2,	2,	"s1" },
	{ 3,	2,	"s2" },
	{ 4,	2,	"s3" },
	{ 5,	2,	"s4" },
	{ 6,	2,	"s5" },
	{ 7,	2,	"s6" },
	{ 8,	2,	"s7" },
	{ 9,	2,	"s8" },
	{ 10,	2,	"s9" },
	{ 11,	3,	"s10" },
	{ 12,	3,	"s20" },
	{ 13,	3,	"s30" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_minSchedulingOffsetPreferenceProhibitTimer_r16_enum2value_2[] = {
	0,	/* s0(0) */
	1,	/* s0dot5(1) */
	2,	/* s1(2) */
	11,	/* s10(11) */
	3,	/* s2(3) */
	12,	/* s20(12) */
	4,	/* s3(4) */
	13,	/* s30(13) */
	5,	/* s4(5) */
	6,	/* s5(6) */
	7,	/* s6(7) */
	8,	/* s7(8) */
	9,	/* s8(9) */
	10,	/* s9(10) */
	15,	/* spare1(15) */
	14	/* spare2(14) */
};
static const asn_INTEGER_specifics_t asn_SPC_minSchedulingOffsetPreferenceProhibitTimer_r16_specs_2 = {
	asn_MAP_minSchedulingOffsetPreferenceProhibitTimer_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_minSchedulingOffsetPreferenceProhibitTimer_r16_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_minSchedulingOffsetPreferenceProhibitTimer_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_minSchedulingOffsetPreferenceProhibitTimer_r16_2 = {
	"minSchedulingOffsetPreferenceProhibitTimer-r16",
	"minSchedulingOffsetPreferenceProhibitTimer-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_minSchedulingOffsetPreferenceProhibitTimer_r16_tags_2,
	sizeof(asn_DEF_minSchedulingOffsetPreferenceProhibitTimer_r16_tags_2)
		/sizeof(asn_DEF_minSchedulingOffsetPreferenceProhibitTimer_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_minSchedulingOffsetPreferenceProhibitTimer_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_minSchedulingOffsetPreferenceProhibitTimer_r16_tags_2)
		/sizeof(asn_DEF_minSchedulingOffsetPreferenceProhibitTimer_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_minSchedulingOffsetPreferenceProhibitTimer_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_minSchedulingOffsetPreferenceProhibitTimer_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MinSchedulingOffsetPreferenceConfig_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MinSchedulingOffsetPreferenceConfig_r16, minSchedulingOffsetPreferenceProhibitTimer_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_minSchedulingOffsetPreferenceProhibitTimer_r16_2,
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
		"minSchedulingOffsetPreferenceProhibitTimer-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_MinSchedulingOffsetPreferenceConfig_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MinSchedulingOffsetPreferenceConfig_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* minSchedulingOffsetPreferenceProhibitTimer-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_MinSchedulingOffsetPreferenceConfig_r16_specs_1 = {
	sizeof(struct MinSchedulingOffsetPreferenceConfig_r16),
	offsetof(struct MinSchedulingOffsetPreferenceConfig_r16, _asn_ctx),
	asn_MAP_MinSchedulingOffsetPreferenceConfig_r16_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MinSchedulingOffsetPreferenceConfig_r16 = {
	"MinSchedulingOffsetPreferenceConfig-r16",
	"MinSchedulingOffsetPreferenceConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_MinSchedulingOffsetPreferenceConfig_r16_tags_1,
	sizeof(asn_DEF_MinSchedulingOffsetPreferenceConfig_r16_tags_1)
		/sizeof(asn_DEF_MinSchedulingOffsetPreferenceConfig_r16_tags_1[0]), /* 1 */
	asn_DEF_MinSchedulingOffsetPreferenceConfig_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_MinSchedulingOffsetPreferenceConfig_r16_tags_1)
		/sizeof(asn_DEF_MinSchedulingOffsetPreferenceConfig_r16_tags_1[0]), /* 1 */
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
	asn_MBR_MinSchedulingOffsetPreferenceConfig_r16_1,
	1,	/* Elements count */
	&asn_SPC_MinSchedulingOffsetPreferenceConfig_r16_specs_1	/* Additional specs */
};

