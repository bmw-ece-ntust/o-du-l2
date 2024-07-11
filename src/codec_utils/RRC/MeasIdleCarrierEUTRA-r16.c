/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "MeasIdleCarrierEUTRA-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_reportQuantitiesEUTRA_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_reportQuantitiesEUTRA_r16_value2enum_5[] = {
	{ 0,	4,	"rsrp" },
	{ 1,	4,	"rsrq" },
	{ 2,	4,	"both" }
};
static const unsigned int asn_MAP_reportQuantitiesEUTRA_r16_enum2value_5[] = {
	2,	/* both(2) */
	0,	/* rsrp(0) */
	1	/* rsrq(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_reportQuantitiesEUTRA_r16_specs_5 = {
	asn_MAP_reportQuantitiesEUTRA_r16_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_reportQuantitiesEUTRA_r16_enum2value_5,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reportQuantitiesEUTRA_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportQuantitiesEUTRA_r16_5 = {
	"reportQuantitiesEUTRA-r16",
	"reportQuantitiesEUTRA-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_reportQuantitiesEUTRA_r16_tags_5,
	sizeof(asn_DEF_reportQuantitiesEUTRA_r16_tags_5)
		/sizeof(asn_DEF_reportQuantitiesEUTRA_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_reportQuantitiesEUTRA_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_reportQuantitiesEUTRA_r16_tags_5)
		/sizeof(asn_DEF_reportQuantitiesEUTRA_r16_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_reportQuantitiesEUTRA_r16_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reportQuantitiesEUTRA_r16_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_qualityThresholdEUTRA_r16_9[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasIdleCarrierEUTRA_r16__qualityThresholdEUTRA_r16, idleRSRP_Threshold_EUTRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_RangeEUTRA,
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
		"idleRSRP-Threshold-EUTRA-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierEUTRA_r16__qualityThresholdEUTRA_r16, idleRSRQ_Threshold_EUTRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_RangeEUTRA_r16,
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
		"idleRSRQ-Threshold-EUTRA-r16"
		},
};
static const int asn_MAP_qualityThresholdEUTRA_r16_oms_9[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_qualityThresholdEUTRA_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_qualityThresholdEUTRA_r16_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idleRSRP-Threshold-EUTRA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* idleRSRQ-Threshold-EUTRA-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_qualityThresholdEUTRA_r16_specs_9 = {
	sizeof(struct MeasIdleCarrierEUTRA_r16__qualityThresholdEUTRA_r16),
	offsetof(struct MeasIdleCarrierEUTRA_r16__qualityThresholdEUTRA_r16, _asn_ctx),
	asn_MAP_qualityThresholdEUTRA_r16_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_qualityThresholdEUTRA_r16_oms_9,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_qualityThresholdEUTRA_r16_9 = {
	"qualityThresholdEUTRA-r16",
	"qualityThresholdEUTRA-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_qualityThresholdEUTRA_r16_tags_9,
	sizeof(asn_DEF_qualityThresholdEUTRA_r16_tags_9)
		/sizeof(asn_DEF_qualityThresholdEUTRA_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_qualityThresholdEUTRA_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_qualityThresholdEUTRA_r16_tags_9)
		/sizeof(asn_DEF_qualityThresholdEUTRA_r16_tags_9[0]), /* 2 */
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
	asn_MBR_qualityThresholdEUTRA_r16_9,
	2,	/* Elements count */
	&asn_SPC_qualityThresholdEUTRA_r16_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasIdleCarrierEUTRA_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdleCarrierEUTRA_r16, carrierFreqEUTRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
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
		"carrierFreqEUTRA-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdleCarrierEUTRA_r16, allowedMeasBandwidth_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_AllowedMeasBandwidth,
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
		"allowedMeasBandwidth-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierEUTRA_r16, measCellListEUTRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellListEUTRA_r16,
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
		"measCellListEUTRA-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdleCarrierEUTRA_r16, reportQuantitiesEUTRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reportQuantitiesEUTRA_r16_5,
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
		"reportQuantitiesEUTRA-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierEUTRA_r16, qualityThresholdEUTRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_qualityThresholdEUTRA_r16_9,
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
		"qualityThresholdEUTRA-r16"
		},
};
static const int asn_MAP_MeasIdleCarrierEUTRA_r16_oms_1[] = { 2, 4 };
static const ber_tlv_tag_t asn_DEF_MeasIdleCarrierEUTRA_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasIdleCarrierEUTRA_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreqEUTRA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allowedMeasBandwidth-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measCellListEUTRA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reportQuantitiesEUTRA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* qualityThresholdEUTRA-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasIdleCarrierEUTRA_r16_specs_1 = {
	sizeof(struct MeasIdleCarrierEUTRA_r16),
	offsetof(struct MeasIdleCarrierEUTRA_r16, _asn_ctx),
	asn_MAP_MeasIdleCarrierEUTRA_r16_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_MeasIdleCarrierEUTRA_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasIdleCarrierEUTRA_r16 = {
	"MeasIdleCarrierEUTRA-r16",
	"MeasIdleCarrierEUTRA-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasIdleCarrierEUTRA_r16_tags_1,
	sizeof(asn_DEF_MeasIdleCarrierEUTRA_r16_tags_1)
		/sizeof(asn_DEF_MeasIdleCarrierEUTRA_r16_tags_1[0]), /* 1 */
	asn_DEF_MeasIdleCarrierEUTRA_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasIdleCarrierEUTRA_r16_tags_1)
		/sizeof(asn_DEF_MeasIdleCarrierEUTRA_r16_tags_1[0]), /* 1 */
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
	asn_MBR_MeasIdleCarrierEUTRA_r16_1,
	5,	/* Elements count */
	&asn_SPC_MeasIdleCarrierEUTRA_r16_specs_1	/* Additional specs */
};

