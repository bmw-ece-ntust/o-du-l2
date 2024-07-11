/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "MeasResultsPerCellIdleNR-r16.h"

static asn_TYPE_member_t asn_MBR_measIdleResultNR_r16_3[] = {
	{ ATF_POINTER, 3, offsetof(struct MeasResultsPerCellIdleNR_r16__measIdleResultNR_r16, rsrp_Result_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
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
		"rsrp-Result-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasResultsPerCellIdleNR_r16__measIdleResultNR_r16, rsrq_Result_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
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
		"rsrq-Result-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultsPerCellIdleNR_r16__measIdleResultNR_r16, resultsSSB_Indexes_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResultsPerSSB_IndexList_r16,
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
		"resultsSSB-Indexes-r16"
		},
};
static const int asn_MAP_measIdleResultNR_r16_oms_3[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_measIdleResultNR_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measIdleResultNR_r16_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrp-Result-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsrq-Result-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* resultsSSB-Indexes-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measIdleResultNR_r16_specs_3 = {
	sizeof(struct MeasResultsPerCellIdleNR_r16__measIdleResultNR_r16),
	offsetof(struct MeasResultsPerCellIdleNR_r16__measIdleResultNR_r16, _asn_ctx),
	asn_MAP_measIdleResultNR_r16_tag2el_3,
	3,	/* Count of tags in the map */
	asn_MAP_measIdleResultNR_r16_oms_3,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measIdleResultNR_r16_3 = {
	"measIdleResultNR-r16",
	"measIdleResultNR-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_measIdleResultNR_r16_tags_3,
	sizeof(asn_DEF_measIdleResultNR_r16_tags_3)
		/sizeof(asn_DEF_measIdleResultNR_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_measIdleResultNR_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_measIdleResultNR_r16_tags_3)
		/sizeof(asn_DEF_measIdleResultNR_r16_tags_3[0]), /* 2 */
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
	asn_MBR_measIdleResultNR_r16_3,
	3,	/* Elements count */
	&asn_SPC_measIdleResultNR_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasResultsPerCellIdleNR_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultsPerCellIdleNR_r16, physCellId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
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
		"physCellId-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultsPerCellIdleNR_r16, measIdleResultNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_measIdleResultNR_r16_3,
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
		"measIdleResultNR-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasResultsPerCellIdleNR_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultsPerCellIdleNR_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measIdleResultNR-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultsPerCellIdleNR_r16_specs_1 = {
	sizeof(struct MeasResultsPerCellIdleNR_r16),
	offsetof(struct MeasResultsPerCellIdleNR_r16, _asn_ctx),
	asn_MAP_MeasResultsPerCellIdleNR_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultsPerCellIdleNR_r16 = {
	"MeasResultsPerCellIdleNR-r16",
	"MeasResultsPerCellIdleNR-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultsPerCellIdleNR_r16_tags_1,
	sizeof(asn_DEF_MeasResultsPerCellIdleNR_r16_tags_1)
		/sizeof(asn_DEF_MeasResultsPerCellIdleNR_r16_tags_1[0]), /* 1 */
	asn_DEF_MeasResultsPerCellIdleNR_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultsPerCellIdleNR_r16_tags_1)
		/sizeof(asn_DEF_MeasResultsPerCellIdleNR_r16_tags_1[0]), /* 1 */
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
	asn_MBR_MeasResultsPerCellIdleNR_r16_1,
	2,	/* Elements count */
	&asn_SPC_MeasResultsPerCellIdleNR_r16_specs_1	/* Additional specs */
};

