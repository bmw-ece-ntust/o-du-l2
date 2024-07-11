/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "DelayBudgetReport.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_type1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  16 }	/* (0..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_DelayBudgetReport_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_type1_value2enum_2[] = {
	{ 0,	11,	"msMinus1280" },
	{ 1,	10,	"msMinus640" },
	{ 2,	10,	"msMinus320" },
	{ 3,	10,	"msMinus160" },
	{ 4,	9,	"msMinus80" },
	{ 5,	9,	"msMinus60" },
	{ 6,	9,	"msMinus40" },
	{ 7,	9,	"msMinus20" },
	{ 8,	3,	"ms0" },
	{ 9,	4,	"ms20" },
	{ 10,	4,	"ms40" },
	{ 11,	4,	"ms60" },
	{ 12,	4,	"ms80" },
	{ 13,	5,	"ms160" },
	{ 14,	5,	"ms320" },
	{ 15,	5,	"ms640" },
	{ 16,	6,	"ms1280" }
};
static const unsigned int asn_MAP_type1_enum2value_2[] = {
	8,	/* ms0(8) */
	16,	/* ms1280(16) */
	13,	/* ms160(13) */
	9,	/* ms20(9) */
	14,	/* ms320(14) */
	10,	/* ms40(10) */
	11,	/* ms60(11) */
	15,	/* ms640(15) */
	12,	/* ms80(12) */
	0,	/* msMinus1280(0) */
	3,	/* msMinus160(3) */
	7,	/* msMinus20(7) */
	2,	/* msMinus320(2) */
	6,	/* msMinus40(6) */
	5,	/* msMinus60(5) */
	1,	/* msMinus640(1) */
	4	/* msMinus80(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_type1_specs_2 = {
	asn_MAP_type1_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_type1_enum2value_2,	/* N => "tag"; sorted by N */
	17,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_type1_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_type1_2 = {
	"type1",
	"type1",
	&asn_OP_NativeEnumerated,
	asn_DEF_type1_tags_2,
	sizeof(asn_DEF_type1_tags_2)
		/sizeof(asn_DEF_type1_tags_2[0]) - 1, /* 1 */
	asn_DEF_type1_tags_2,	/* Same as above */
	sizeof(asn_DEF_type1_tags_2)
		/sizeof(asn_DEF_type1_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_type1_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_type1_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DelayBudgetReport_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DelayBudgetReport, choice.type1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_type1_2,
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
		"type1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_DelayBudgetReport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* type1 */
};
asn_CHOICE_specifics_t asn_SPC_DelayBudgetReport_specs_1 = {
	sizeof(struct DelayBudgetReport),
	offsetof(struct DelayBudgetReport, _asn_ctx),
	offsetof(struct DelayBudgetReport, present),
	sizeof(((struct DelayBudgetReport *)0)->present),
	asn_MAP_DelayBudgetReport_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DelayBudgetReport = {
	"DelayBudgetReport",
	"DelayBudgetReport",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_DelayBudgetReport_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_DelayBudgetReport_1,
	1,	/* Elements count */
	&asn_SPC_DelayBudgetReport_specs_1	/* Additional specs */
};

