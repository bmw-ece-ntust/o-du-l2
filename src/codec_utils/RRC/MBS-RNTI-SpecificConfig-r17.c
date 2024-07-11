/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "MBS-RNTI-SpecificConfig-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_groupCommon_RNTI_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_harq_FeedbackEnablerMulticast_r17_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_harq_FeedbackOptionMulticast_r17_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_pdsch_AggregationFactor_r17_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_groupCommon_RNTI_r17_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17, choice.g_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
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
		"g-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17, choice.g_CS_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
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
		"g-CS-RNTI"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_groupCommon_RNTI_r17_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* g-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* g-CS-RNTI */
};
static asn_CHOICE_specifics_t asn_SPC_groupCommon_RNTI_r17_specs_3 = {
	sizeof(struct MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17),
	offsetof(struct MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17, _asn_ctx),
	offsetof(struct MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17, present),
	sizeof(((struct MBS_RNTI_SpecificConfig_r17__groupCommon_RNTI_r17 *)0)->present),
	asn_MAP_groupCommon_RNTI_r17_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_groupCommon_RNTI_r17_3 = {
	"groupCommon-RNTI-r17",
	"groupCommon-RNTI-r17",
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
		&asn_PER_type_groupCommon_RNTI_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_groupCommon_RNTI_r17_3,
	2,	/* Elements count */
	&asn_SPC_groupCommon_RNTI_r17_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_harq_FeedbackEnablerMulticast_r17_value2enum_7[] = {
	{ 0,	11,	"dci-enabler" },
	{ 1,	7,	"enabled" }
};
static const unsigned int asn_MAP_harq_FeedbackEnablerMulticast_r17_enum2value_7[] = {
	0,	/* dci-enabler(0) */
	1	/* enabled(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_harq_FeedbackEnablerMulticast_r17_specs_7 = {
	asn_MAP_harq_FeedbackEnablerMulticast_r17_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_harq_FeedbackEnablerMulticast_r17_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_harq_FeedbackEnablerMulticast_r17_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_harq_FeedbackEnablerMulticast_r17_7 = {
	"harq-FeedbackEnablerMulticast-r17",
	"harq-FeedbackEnablerMulticast-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_harq_FeedbackEnablerMulticast_r17_tags_7,
	sizeof(asn_DEF_harq_FeedbackEnablerMulticast_r17_tags_7)
		/sizeof(asn_DEF_harq_FeedbackEnablerMulticast_r17_tags_7[0]) - 1, /* 1 */
	asn_DEF_harq_FeedbackEnablerMulticast_r17_tags_7,	/* Same as above */
	sizeof(asn_DEF_harq_FeedbackEnablerMulticast_r17_tags_7)
		/sizeof(asn_DEF_harq_FeedbackEnablerMulticast_r17_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_harq_FeedbackEnablerMulticast_r17_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_harq_FeedbackEnablerMulticast_r17_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_harq_FeedbackOptionMulticast_r17_value2enum_10[] = {
	{ 0,	8,	"ack-nack" },
	{ 1,	9,	"nack-only" }
};
static const unsigned int asn_MAP_harq_FeedbackOptionMulticast_r17_enum2value_10[] = {
	0,	/* ack-nack(0) */
	1	/* nack-only(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_harq_FeedbackOptionMulticast_r17_specs_10 = {
	asn_MAP_harq_FeedbackOptionMulticast_r17_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_harq_FeedbackOptionMulticast_r17_enum2value_10,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_harq_FeedbackOptionMulticast_r17_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_harq_FeedbackOptionMulticast_r17_10 = {
	"harq-FeedbackOptionMulticast-r17",
	"harq-FeedbackOptionMulticast-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_harq_FeedbackOptionMulticast_r17_tags_10,
	sizeof(asn_DEF_harq_FeedbackOptionMulticast_r17_tags_10)
		/sizeof(asn_DEF_harq_FeedbackOptionMulticast_r17_tags_10[0]) - 1, /* 1 */
	asn_DEF_harq_FeedbackOptionMulticast_r17_tags_10,	/* Same as above */
	sizeof(asn_DEF_harq_FeedbackOptionMulticast_r17_tags_10)
		/sizeof(asn_DEF_harq_FeedbackOptionMulticast_r17_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_harq_FeedbackOptionMulticast_r17_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_harq_FeedbackOptionMulticast_r17_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdsch_AggregationFactor_r17_value2enum_13[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n8" }
};
static const unsigned int asn_MAP_pdsch_AggregationFactor_r17_enum2value_13[] = {
	0,	/* n2(0) */
	1,	/* n4(1) */
	2	/* n8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdsch_AggregationFactor_r17_specs_13 = {
	asn_MAP_pdsch_AggregationFactor_r17_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_pdsch_AggregationFactor_r17_enum2value_13,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdsch_AggregationFactor_r17_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_AggregationFactor_r17_13 = {
	"pdsch-AggregationFactor-r17",
	"pdsch-AggregationFactor-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdsch_AggregationFactor_r17_tags_13,
	sizeof(asn_DEF_pdsch_AggregationFactor_r17_tags_13)
		/sizeof(asn_DEF_pdsch_AggregationFactor_r17_tags_13[0]) - 1, /* 1 */
	asn_DEF_pdsch_AggregationFactor_r17_tags_13,	/* Same as above */
	sizeof(asn_DEF_pdsch_AggregationFactor_r17_tags_13)
		/sizeof(asn_DEF_pdsch_AggregationFactor_r17_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_pdsch_AggregationFactor_r17_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdsch_AggregationFactor_r17_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBS_RNTI_SpecificConfig_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBS_RNTI_SpecificConfig_r17, mbs_RNTI_SpecificConfigId_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBS_RNTI_SpecificConfigId_r17,
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
		"mbs-RNTI-SpecificConfigId-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBS_RNTI_SpecificConfig_r17, groupCommon_RNTI_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_groupCommon_RNTI_r17_3,
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
		"groupCommon-RNTI-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct MBS_RNTI_SpecificConfig_r17, drx_ConfigPTM_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_DRX_ConfigPTM_r17,
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
		"drx-ConfigPTM-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct MBS_RNTI_SpecificConfig_r17, harq_FeedbackEnablerMulticast_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_harq_FeedbackEnablerMulticast_r17_7,
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
		"harq-FeedbackEnablerMulticast-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct MBS_RNTI_SpecificConfig_r17, harq_FeedbackOptionMulticast_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_harq_FeedbackOptionMulticast_r17_10,
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
		"harq-FeedbackOptionMulticast-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct MBS_RNTI_SpecificConfig_r17, pdsch_AggregationFactor_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdsch_AggregationFactor_r17_13,
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
		"pdsch-AggregationFactor-r17"
		},
};
static const int asn_MAP_MBS_RNTI_SpecificConfig_r17_oms_1[] = { 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_MBS_RNTI_SpecificConfig_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBS_RNTI_SpecificConfig_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbs-RNTI-SpecificConfigId-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* groupCommon-RNTI-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* drx-ConfigPTM-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* harq-FeedbackEnablerMulticast-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* harq-FeedbackOptionMulticast-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* pdsch-AggregationFactor-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBS_RNTI_SpecificConfig_r17_specs_1 = {
	sizeof(struct MBS_RNTI_SpecificConfig_r17),
	offsetof(struct MBS_RNTI_SpecificConfig_r17, _asn_ctx),
	asn_MAP_MBS_RNTI_SpecificConfig_r17_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_MBS_RNTI_SpecificConfig_r17_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBS_RNTI_SpecificConfig_r17 = {
	"MBS-RNTI-SpecificConfig-r17",
	"MBS-RNTI-SpecificConfig-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_MBS_RNTI_SpecificConfig_r17_tags_1,
	sizeof(asn_DEF_MBS_RNTI_SpecificConfig_r17_tags_1)
		/sizeof(asn_DEF_MBS_RNTI_SpecificConfig_r17_tags_1[0]), /* 1 */
	asn_DEF_MBS_RNTI_SpecificConfig_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBS_RNTI_SpecificConfig_r17_tags_1)
		/sizeof(asn_DEF_MBS_RNTI_SpecificConfig_r17_tags_1[0]), /* 1 */
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
	asn_MBR_MBS_RNTI_SpecificConfig_r17_1,
	6,	/* Elements count */
	&asn_SPC_MBS_RNTI_SpecificConfig_r17_specs_1	/* Additional specs */
};

