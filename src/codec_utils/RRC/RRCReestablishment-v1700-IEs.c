/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "RRCReestablishment-v1700-IEs.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_3 = {
	sizeof(struct RRCReestablishment_v1700_IEs__nonCriticalExtension),
	offsetof(struct RRCReestablishment_v1700_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_3 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_3,
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_3,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]), /* 2 */
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
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCReestablishment_v1700_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RRCReestablishment_v1700_IEs, sl_L2RemoteUE_Config_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_SL_L2RemoteUE_Config_r17,
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
		"sl-L2RemoteUE-Config-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCReestablishment_v1700_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_3,
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
static const int asn_MAP_RRCReestablishment_v1700_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RRCReestablishment_v1700_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCReestablishment_v1700_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-L2RemoteUE-Config-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCReestablishment_v1700_IEs_specs_1 = {
	sizeof(struct RRCReestablishment_v1700_IEs),
	offsetof(struct RRCReestablishment_v1700_IEs, _asn_ctx),
	asn_MAP_RRCReestablishment_v1700_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRCReestablishment_v1700_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCReestablishment_v1700_IEs = {
	"RRCReestablishment-v1700-IEs",
	"RRCReestablishment-v1700-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCReestablishment_v1700_IEs_tags_1,
	sizeof(asn_DEF_RRCReestablishment_v1700_IEs_tags_1)
		/sizeof(asn_DEF_RRCReestablishment_v1700_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCReestablishment_v1700_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCReestablishment_v1700_IEs_tags_1)
		/sizeof(asn_DEF_RRCReestablishment_v1700_IEs_tags_1[0]), /* 1 */
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
	asn_MBR_RRCReestablishment_v1700_IEs_1,
	2,	/* Elements count */
	&asn_SPC_RRCReestablishment_v1700_IEs_specs_1	/* Additional specs */
};

