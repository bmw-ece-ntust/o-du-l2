/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "MeasObjectRxTxDiff-r17.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dl_Ref_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_dl_Ref_r17_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectRxTxDiff_r17__dl_Ref_r17, choice.prs_Ref_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"prs-Ref-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectRxTxDiff_r17__dl_Ref_r17, choice.csi_RS_Ref_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"csi-RS-Ref-r17"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_dl_Ref_r17_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* prs-Ref-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* csi-RS-Ref-r17 */
};
static asn_CHOICE_specifics_t asn_SPC_dl_Ref_r17_specs_2 = {
	sizeof(struct MeasObjectRxTxDiff_r17__dl_Ref_r17),
	offsetof(struct MeasObjectRxTxDiff_r17__dl_Ref_r17, _asn_ctx),
	offsetof(struct MeasObjectRxTxDiff_r17__dl_Ref_r17, present),
	sizeof(((struct MeasObjectRxTxDiff_r17__dl_Ref_r17 *)0)->present),
	asn_MAP_dl_Ref_r17_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_Ref_r17_2 = {
	"dl-Ref-r17",
	"dl-Ref-r17",
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
		&asn_PER_type_dl_Ref_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_dl_Ref_r17_2,
	2,	/* Elements count */
	&asn_SPC_dl_Ref_r17_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasObjectRxTxDiff_r17_1[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasObjectRxTxDiff_r17, dl_Ref_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dl_Ref_r17_2,
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
		"dl-Ref-r17"
		},
};
static const int asn_MAP_MeasObjectRxTxDiff_r17_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_MeasObjectRxTxDiff_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectRxTxDiff_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dl-Ref-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasObjectRxTxDiff_r17_specs_1 = {
	sizeof(struct MeasObjectRxTxDiff_r17),
	offsetof(struct MeasObjectRxTxDiff_r17, _asn_ctx),
	asn_MAP_MeasObjectRxTxDiff_r17_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_MeasObjectRxTxDiff_r17_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectRxTxDiff_r17 = {
	"MeasObjectRxTxDiff-r17",
	"MeasObjectRxTxDiff-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasObjectRxTxDiff_r17_tags_1,
	sizeof(asn_DEF_MeasObjectRxTxDiff_r17_tags_1)
		/sizeof(asn_DEF_MeasObjectRxTxDiff_r17_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectRxTxDiff_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectRxTxDiff_r17_tags_1)
		/sizeof(asn_DEF_MeasObjectRxTxDiff_r17_tags_1[0]), /* 1 */
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
	asn_MBR_MeasObjectRxTxDiff_r17_1,
	1,	/* Elements count */
	&asn_SPC_MeasObjectRxTxDiff_r17_specs_1	/* Additional specs */
};

