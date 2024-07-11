/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "SL-RLC-ConfigPC5-r16.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_SL_RLC_ConfigPC5_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_sl_AM_RLC_r16_2[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_RLC_ConfigPC5_r16__sl_AM_RLC_r16, sl_SN_FieldLengthAM_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SN_FieldLengthAM,
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
		"sl-SN-FieldLengthAM-r16"
		},
};
static const int asn_MAP_sl_AM_RLC_r16_oms_2[] = { 0 };
static const ber_tlv_tag_t asn_DEF_sl_AM_RLC_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_sl_AM_RLC_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sl-SN-FieldLengthAM-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_sl_AM_RLC_r16_specs_2 = {
	sizeof(struct SL_RLC_ConfigPC5_r16__sl_AM_RLC_r16),
	offsetof(struct SL_RLC_ConfigPC5_r16__sl_AM_RLC_r16, _asn_ctx),
	asn_MAP_sl_AM_RLC_r16_tag2el_2,
	1,	/* Count of tags in the map */
	asn_MAP_sl_AM_RLC_r16_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_AM_RLC_r16_2 = {
	"sl-AM-RLC-r16",
	"sl-AM-RLC-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_sl_AM_RLC_r16_tags_2,
	sizeof(asn_DEF_sl_AM_RLC_r16_tags_2)
		/sizeof(asn_DEF_sl_AM_RLC_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_sl_AM_RLC_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_sl_AM_RLC_r16_tags_2)
		/sizeof(asn_DEF_sl_AM_RLC_r16_tags_2[0]), /* 2 */
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
	asn_MBR_sl_AM_RLC_r16_2,
	1,	/* Elements count */
	&asn_SPC_sl_AM_RLC_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sl_UM_Bi_Directional_RLC_r16_5[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_RLC_ConfigPC5_r16__sl_UM_Bi_Directional_RLC_r16, sl_SN_FieldLengthUM_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SN_FieldLengthUM,
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
		"sl-SN-FieldLengthUM-r16"
		},
};
static const int asn_MAP_sl_UM_Bi_Directional_RLC_r16_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_sl_UM_Bi_Directional_RLC_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_sl_UM_Bi_Directional_RLC_r16_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sl-SN-FieldLengthUM-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_sl_UM_Bi_Directional_RLC_r16_specs_5 = {
	sizeof(struct SL_RLC_ConfigPC5_r16__sl_UM_Bi_Directional_RLC_r16),
	offsetof(struct SL_RLC_ConfigPC5_r16__sl_UM_Bi_Directional_RLC_r16, _asn_ctx),
	asn_MAP_sl_UM_Bi_Directional_RLC_r16_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_sl_UM_Bi_Directional_RLC_r16_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_UM_Bi_Directional_RLC_r16_5 = {
	"sl-UM-Bi-Directional-RLC-r16",
	"sl-UM-Bi-Directional-RLC-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_sl_UM_Bi_Directional_RLC_r16_tags_5,
	sizeof(asn_DEF_sl_UM_Bi_Directional_RLC_r16_tags_5)
		/sizeof(asn_DEF_sl_UM_Bi_Directional_RLC_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_sl_UM_Bi_Directional_RLC_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_sl_UM_Bi_Directional_RLC_r16_tags_5)
		/sizeof(asn_DEF_sl_UM_Bi_Directional_RLC_r16_tags_5[0]), /* 2 */
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
	asn_MBR_sl_UM_Bi_Directional_RLC_r16_5,
	1,	/* Elements count */
	&asn_SPC_sl_UM_Bi_Directional_RLC_r16_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sl_UM_Uni_Directional_RLC_r16_8[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_RLC_ConfigPC5_r16__sl_UM_Uni_Directional_RLC_r16, sl_SN_FieldLengthUM_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SN_FieldLengthUM,
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
		"sl-SN-FieldLengthUM-r16"
		},
};
static const int asn_MAP_sl_UM_Uni_Directional_RLC_r16_oms_8[] = { 0 };
static const ber_tlv_tag_t asn_DEF_sl_UM_Uni_Directional_RLC_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_sl_UM_Uni_Directional_RLC_r16_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sl-SN-FieldLengthUM-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_sl_UM_Uni_Directional_RLC_r16_specs_8 = {
	sizeof(struct SL_RLC_ConfigPC5_r16__sl_UM_Uni_Directional_RLC_r16),
	offsetof(struct SL_RLC_ConfigPC5_r16__sl_UM_Uni_Directional_RLC_r16, _asn_ctx),
	asn_MAP_sl_UM_Uni_Directional_RLC_r16_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_sl_UM_Uni_Directional_RLC_r16_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_UM_Uni_Directional_RLC_r16_8 = {
	"sl-UM-Uni-Directional-RLC-r16",
	"sl-UM-Uni-Directional-RLC-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_sl_UM_Uni_Directional_RLC_r16_tags_8,
	sizeof(asn_DEF_sl_UM_Uni_Directional_RLC_r16_tags_8)
		/sizeof(asn_DEF_sl_UM_Uni_Directional_RLC_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_sl_UM_Uni_Directional_RLC_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_sl_UM_Uni_Directional_RLC_r16_tags_8)
		/sizeof(asn_DEF_sl_UM_Uni_Directional_RLC_r16_tags_8[0]), /* 2 */
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
	asn_MBR_sl_UM_Uni_Directional_RLC_r16_8,
	1,	/* Elements count */
	&asn_SPC_sl_UM_Uni_Directional_RLC_r16_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_RLC_ConfigPC5_r16_1[] = {
	{ ATF_POINTER, 0, offsetof(struct SL_RLC_ConfigPC5_r16, choice.sl_AM_RLC_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sl_AM_RLC_r16_2,
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
		"sl-AM-RLC-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct SL_RLC_ConfigPC5_r16, choice.sl_UM_Bi_Directional_RLC_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_sl_UM_Bi_Directional_RLC_r16_5,
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
		"sl-UM-Bi-Directional-RLC-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct SL_RLC_ConfigPC5_r16, choice.sl_UM_Uni_Directional_RLC_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_sl_UM_Uni_Directional_RLC_r16_8,
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
		"sl-UM-Uni-Directional-RLC-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SL_RLC_ConfigPC5_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-AM-RLC-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-UM-Bi-Directional-RLC-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sl-UM-Uni-Directional-RLC-r16 */
};
asn_CHOICE_specifics_t asn_SPC_SL_RLC_ConfigPC5_r16_specs_1 = {
	sizeof(struct SL_RLC_ConfigPC5_r16),
	offsetof(struct SL_RLC_ConfigPC5_r16, _asn_ctx),
	offsetof(struct SL_RLC_ConfigPC5_r16, present),
	sizeof(((struct SL_RLC_ConfigPC5_r16 *)0)->present),
	asn_MAP_SL_RLC_ConfigPC5_r16_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SL_RLC_ConfigPC5_r16 = {
	"SL-RLC-ConfigPC5-r16",
	"SL-RLC-ConfigPC5-r16",
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
		&asn_PER_type_SL_RLC_ConfigPC5_r16_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_SL_RLC_ConfigPC5_r16_1,
	3,	/* Elements count */
	&asn_SPC_SL_RLC_ConfigPC5_r16_specs_1	/* Additional specs */
};

