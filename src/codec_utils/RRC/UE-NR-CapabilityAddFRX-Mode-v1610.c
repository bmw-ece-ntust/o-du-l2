/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "UE-NR-CapabilityAddFRX-Mode-v1610.h"

asn_TYPE_member_t asn_MBR_UE_NR_CapabilityAddFRX_Mode_v1610_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_NR_CapabilityAddFRX_Mode_v1610, powSav_ParametersFRX_Diff_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PowSav_ParametersFRX_Diff_r16,
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
		"powSav-ParametersFRX-Diff-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_NR_CapabilityAddFRX_Mode_v1610, mac_ParametersFRX_Diff_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_ParametersFRX_Diff_r16,
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
		"mac-ParametersFRX-Diff-r16"
		},
};
static const int asn_MAP_UE_NR_CapabilityAddFRX_Mode_v1610_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UE_NR_CapabilityAddFRX_Mode_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_NR_CapabilityAddFRX_Mode_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* powSav-ParametersFRX-Diff-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mac-ParametersFRX-Diff-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_NR_CapabilityAddFRX_Mode_v1610_specs_1 = {
	sizeof(struct UE_NR_CapabilityAddFRX_Mode_v1610),
	offsetof(struct UE_NR_CapabilityAddFRX_Mode_v1610, _asn_ctx),
	asn_MAP_UE_NR_CapabilityAddFRX_Mode_v1610_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_NR_CapabilityAddFRX_Mode_v1610_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_NR_CapabilityAddFRX_Mode_v1610 = {
	"UE-NR-CapabilityAddFRX-Mode-v1610",
	"UE-NR-CapabilityAddFRX-Mode-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_NR_CapabilityAddFRX_Mode_v1610_tags_1,
	sizeof(asn_DEF_UE_NR_CapabilityAddFRX_Mode_v1610_tags_1)
		/sizeof(asn_DEF_UE_NR_CapabilityAddFRX_Mode_v1610_tags_1[0]), /* 1 */
	asn_DEF_UE_NR_CapabilityAddFRX_Mode_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_NR_CapabilityAddFRX_Mode_v1610_tags_1)
		/sizeof(asn_DEF_UE_NR_CapabilityAddFRX_Mode_v1610_tags_1[0]), /* 1 */
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
	asn_MBR_UE_NR_CapabilityAddFRX_Mode_v1610_1,
	2,	/* Elements count */
	&asn_SPC_UE_NR_CapabilityAddFRX_Mode_v1610_specs_1	/* Additional specs */
};

