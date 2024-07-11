/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "CG-ConfigInfo-v1640-IEs.h"

asn_TYPE_member_t asn_MBR_CG_ConfigInfo_v1640_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct CG_ConfigInfo_v1640_IEs, servCellInfoListMCG_NR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellInfoListMCG_NR_r16,
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
		"servCellInfoListMCG-NR-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct CG_ConfigInfo_v1640_IEs, servCellInfoListMCG_EUTRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellInfoListMCG_EUTRA_r16,
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
		"servCellInfoListMCG-EUTRA-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct CG_ConfigInfo_v1640_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CG_ConfigInfo_v1700_IEs,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_CG_ConfigInfo_v1640_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_CG_ConfigInfo_v1640_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CG_ConfigInfo_v1640_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servCellInfoListMCG-NR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* servCellInfoListMCG-EUTRA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_CG_ConfigInfo_v1640_IEs_specs_1 = {
	sizeof(struct CG_ConfigInfo_v1640_IEs),
	offsetof(struct CG_ConfigInfo_v1640_IEs, _asn_ctx),
	asn_MAP_CG_ConfigInfo_v1640_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CG_ConfigInfo_v1640_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CG_ConfigInfo_v1640_IEs = {
	"CG-ConfigInfo-v1640-IEs",
	"CG-ConfigInfo-v1640-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_CG_ConfigInfo_v1640_IEs_tags_1,
	sizeof(asn_DEF_CG_ConfigInfo_v1640_IEs_tags_1)
		/sizeof(asn_DEF_CG_ConfigInfo_v1640_IEs_tags_1[0]), /* 1 */
	asn_DEF_CG_ConfigInfo_v1640_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_CG_ConfigInfo_v1640_IEs_tags_1)
		/sizeof(asn_DEF_CG_ConfigInfo_v1640_IEs_tags_1[0]), /* 1 */
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
	asn_MBR_CG_ConfigInfo_v1640_IEs_1,
	3,	/* Elements count */
	&asn_SPC_CG_ConfigInfo_v1640_IEs_specs_1	/* Additional specs */
};

