/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "ResultsPerSSB-IndexIdle-r16.h"

static asn_TYPE_member_t asn_MBR_ssb_Results_r16_3[] = {
	{ ATF_POINTER, 2, offsetof(struct ResultsPerSSB_IndexIdle_r16__ssb_Results_r16, ssb_RSRP_Result_r16),
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
		"ssb-RSRP-Result-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct ResultsPerSSB_IndexIdle_r16__ssb_Results_r16, ssb_RSRQ_Result_r16),
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
		"ssb-RSRQ-Result-r16"
		},
};
static const int asn_MAP_ssb_Results_r16_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ssb_Results_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ssb_Results_r16_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-RSRP-Result-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ssb-RSRQ-Result-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ssb_Results_r16_specs_3 = {
	sizeof(struct ResultsPerSSB_IndexIdle_r16__ssb_Results_r16),
	offsetof(struct ResultsPerSSB_IndexIdle_r16__ssb_Results_r16, _asn_ctx),
	asn_MAP_ssb_Results_r16_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_ssb_Results_r16_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssb_Results_r16_3 = {
	"ssb-Results-r16",
	"ssb-Results-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_ssb_Results_r16_tags_3,
	sizeof(asn_DEF_ssb_Results_r16_tags_3)
		/sizeof(asn_DEF_ssb_Results_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_ssb_Results_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_ssb_Results_r16_tags_3)
		/sizeof(asn_DEF_ssb_Results_r16_tags_3[0]), /* 2 */
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
	asn_MBR_ssb_Results_r16_3,
	2,	/* Elements count */
	&asn_SPC_ssb_Results_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ResultsPerSSB_IndexIdle_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ResultsPerSSB_IndexIdle_r16, ssb_Index_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_Index,
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
		"ssb-Index-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct ResultsPerSSB_IndexIdle_r16, ssb_Results_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ssb_Results_r16_3,
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
		"ssb-Results-r16"
		},
};
static const int asn_MAP_ResultsPerSSB_IndexIdle_r16_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_ResultsPerSSB_IndexIdle_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ResultsPerSSB_IndexIdle_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-Index-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ssb-Results-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_ResultsPerSSB_IndexIdle_r16_specs_1 = {
	sizeof(struct ResultsPerSSB_IndexIdle_r16),
	offsetof(struct ResultsPerSSB_IndexIdle_r16, _asn_ctx),
	asn_MAP_ResultsPerSSB_IndexIdle_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ResultsPerSSB_IndexIdle_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ResultsPerSSB_IndexIdle_r16 = {
	"ResultsPerSSB-IndexIdle-r16",
	"ResultsPerSSB-IndexIdle-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_ResultsPerSSB_IndexIdle_r16_tags_1,
	sizeof(asn_DEF_ResultsPerSSB_IndexIdle_r16_tags_1)
		/sizeof(asn_DEF_ResultsPerSSB_IndexIdle_r16_tags_1[0]), /* 1 */
	asn_DEF_ResultsPerSSB_IndexIdle_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_ResultsPerSSB_IndexIdle_r16_tags_1)
		/sizeof(asn_DEF_ResultsPerSSB_IndexIdle_r16_tags_1[0]), /* 1 */
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
	asn_MBR_ResultsPerSSB_IndexIdle_r16_1,
	2,	/* Elements count */
	&asn_SPC_ResultsPerSSB_IndexIdle_r16_specs_1	/* Additional specs */
};

