/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "RRM-MeasRelaxationReportingConfig-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_s_SearchDeltaP_Stationary_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_t_SearchDeltaP_Stationary_r17_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_s_SearchDeltaP_Stationary_r17_value2enum_2[] = {
	{ 0,	3,	"dB2" },
	{ 1,	3,	"dB3" },
	{ 2,	3,	"dB6" },
	{ 3,	3,	"dB9" },
	{ 4,	4,	"dB12" },
	{ 5,	4,	"dB15" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_s_SearchDeltaP_Stationary_r17_enum2value_2[] = {
	4,	/* dB12(4) */
	5,	/* dB15(5) */
	0,	/* dB2(0) */
	1,	/* dB3(1) */
	2,	/* dB6(2) */
	3,	/* dB9(3) */
	7,	/* spare1(7) */
	6	/* spare2(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_s_SearchDeltaP_Stationary_r17_specs_2 = {
	asn_MAP_s_SearchDeltaP_Stationary_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_s_SearchDeltaP_Stationary_r17_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_s_SearchDeltaP_Stationary_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_s_SearchDeltaP_Stationary_r17_2 = {
	"s-SearchDeltaP-Stationary-r17",
	"s-SearchDeltaP-Stationary-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_s_SearchDeltaP_Stationary_r17_tags_2,
	sizeof(asn_DEF_s_SearchDeltaP_Stationary_r17_tags_2)
		/sizeof(asn_DEF_s_SearchDeltaP_Stationary_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_s_SearchDeltaP_Stationary_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_s_SearchDeltaP_Stationary_r17_tags_2)
		/sizeof(asn_DEF_s_SearchDeltaP_Stationary_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_s_SearchDeltaP_Stationary_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_s_SearchDeltaP_Stationary_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_t_SearchDeltaP_Stationary_r17_value2enum_11[] = {
	{ 0,	2,	"s5" },
	{ 1,	3,	"s10" },
	{ 2,	3,	"s20" },
	{ 3,	3,	"s30" },
	{ 4,	3,	"s60" },
	{ 5,	4,	"s120" },
	{ 6,	4,	"s180" },
	{ 7,	4,	"s240" },
	{ 8,	4,	"s300" },
	{ 9,	6,	"spare7" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_t_SearchDeltaP_Stationary_r17_enum2value_11[] = {
	1,	/* s10(1) */
	5,	/* s120(5) */
	6,	/* s180(6) */
	2,	/* s20(2) */
	7,	/* s240(7) */
	3,	/* s30(3) */
	8,	/* s300(8) */
	0,	/* s5(0) */
	4,	/* s60(4) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10,	/* spare6(10) */
	9	/* spare7(9) */
};
static const asn_INTEGER_specifics_t asn_SPC_t_SearchDeltaP_Stationary_r17_specs_11 = {
	asn_MAP_t_SearchDeltaP_Stationary_r17_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_t_SearchDeltaP_Stationary_r17_enum2value_11,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_t_SearchDeltaP_Stationary_r17_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t_SearchDeltaP_Stationary_r17_11 = {
	"t-SearchDeltaP-Stationary-r17",
	"t-SearchDeltaP-Stationary-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_t_SearchDeltaP_Stationary_r17_tags_11,
	sizeof(asn_DEF_t_SearchDeltaP_Stationary_r17_tags_11)
		/sizeof(asn_DEF_t_SearchDeltaP_Stationary_r17_tags_11[0]) - 1, /* 1 */
	asn_DEF_t_SearchDeltaP_Stationary_r17_tags_11,	/* Same as above */
	sizeof(asn_DEF_t_SearchDeltaP_Stationary_r17_tags_11)
		/sizeof(asn_DEF_t_SearchDeltaP_Stationary_r17_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_t_SearchDeltaP_Stationary_r17_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t_SearchDeltaP_Stationary_r17_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRM_MeasRelaxationReportingConfig_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRM_MeasRelaxationReportingConfig_r17, s_SearchDeltaP_Stationary_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_s_SearchDeltaP_Stationary_r17_2,
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
		"s-SearchDeltaP-Stationary-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRM_MeasRelaxationReportingConfig_r17, t_SearchDeltaP_Stationary_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t_SearchDeltaP_Stationary_r17_11,
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
		"t-SearchDeltaP-Stationary-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_RRM_MeasRelaxationReportingConfig_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRM_MeasRelaxationReportingConfig_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s-SearchDeltaP-Stationary-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* t-SearchDeltaP-Stationary-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_RRM_MeasRelaxationReportingConfig_r17_specs_1 = {
	sizeof(struct RRM_MeasRelaxationReportingConfig_r17),
	offsetof(struct RRM_MeasRelaxationReportingConfig_r17, _asn_ctx),
	asn_MAP_RRM_MeasRelaxationReportingConfig_r17_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRM_MeasRelaxationReportingConfig_r17 = {
	"RRM-MeasRelaxationReportingConfig-r17",
	"RRM-MeasRelaxationReportingConfig-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_RRM_MeasRelaxationReportingConfig_r17_tags_1,
	sizeof(asn_DEF_RRM_MeasRelaxationReportingConfig_r17_tags_1)
		/sizeof(asn_DEF_RRM_MeasRelaxationReportingConfig_r17_tags_1[0]), /* 1 */
	asn_DEF_RRM_MeasRelaxationReportingConfig_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRM_MeasRelaxationReportingConfig_r17_tags_1)
		/sizeof(asn_DEF_RRM_MeasRelaxationReportingConfig_r17_tags_1[0]), /* 1 */
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
	asn_MBR_RRM_MeasRelaxationReportingConfig_r17_1,
	2,	/* Elements count */
	&asn_SPC_RRM_MeasRelaxationReportingConfig_r17_specs_1	/* Additional specs */
};

