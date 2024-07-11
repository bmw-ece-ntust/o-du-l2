/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "SL-ConfiguredGrantConfigList-r16.h"

static int
memb_sl_ConfiguredGrantConfigToReleaseList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 8UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sl_ConfiguredGrantConfigToAddModList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 8UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_sl_ConfiguredGrantConfigToReleaseList_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_sl_ConfiguredGrantConfigToAddModList_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_sl_ConfiguredGrantConfigToReleaseList_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_sl_ConfiguredGrantConfigToAddModList_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_sl_ConfiguredGrantConfigToReleaseList_r16_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SL_ConfigIndexCG_r16,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sl_ConfiguredGrantConfigToReleaseList_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sl_ConfiguredGrantConfigToReleaseList_r16_specs_2 = {
	sizeof(struct SL_ConfiguredGrantConfigList_r16__sl_ConfiguredGrantConfigToReleaseList_r16),
	offsetof(struct SL_ConfiguredGrantConfigList_r16__sl_ConfiguredGrantConfigToReleaseList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_ConfiguredGrantConfigToReleaseList_r16_2 = {
	"sl-ConfiguredGrantConfigToReleaseList-r16",
	"sl-ConfiguredGrantConfigToReleaseList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sl_ConfiguredGrantConfigToReleaseList_r16_tags_2,
	sizeof(asn_DEF_sl_ConfiguredGrantConfigToReleaseList_r16_tags_2)
		/sizeof(asn_DEF_sl_ConfiguredGrantConfigToReleaseList_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_sl_ConfiguredGrantConfigToReleaseList_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_sl_ConfiguredGrantConfigToReleaseList_r16_tags_2)
		/sizeof(asn_DEF_sl_ConfiguredGrantConfigToReleaseList_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_sl_ConfiguredGrantConfigToReleaseList_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_sl_ConfiguredGrantConfigToReleaseList_r16_2,
	1,	/* Single element */
	&asn_SPC_sl_ConfiguredGrantConfigToReleaseList_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sl_ConfiguredGrantConfigToAddModList_r16_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SL_ConfiguredGrantConfig_r16,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sl_ConfiguredGrantConfigToAddModList_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sl_ConfiguredGrantConfigToAddModList_r16_specs_4 = {
	sizeof(struct SL_ConfiguredGrantConfigList_r16__sl_ConfiguredGrantConfigToAddModList_r16),
	offsetof(struct SL_ConfiguredGrantConfigList_r16__sl_ConfiguredGrantConfigToAddModList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_ConfiguredGrantConfigToAddModList_r16_4 = {
	"sl-ConfiguredGrantConfigToAddModList-r16",
	"sl-ConfiguredGrantConfigToAddModList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sl_ConfiguredGrantConfigToAddModList_r16_tags_4,
	sizeof(asn_DEF_sl_ConfiguredGrantConfigToAddModList_r16_tags_4)
		/sizeof(asn_DEF_sl_ConfiguredGrantConfigToAddModList_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_sl_ConfiguredGrantConfigToAddModList_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_sl_ConfiguredGrantConfigToAddModList_r16_tags_4)
		/sizeof(asn_DEF_sl_ConfiguredGrantConfigToAddModList_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_sl_ConfiguredGrantConfigToAddModList_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_sl_ConfiguredGrantConfigToAddModList_r16_4,
	1,	/* Single element */
	&asn_SPC_sl_ConfiguredGrantConfigToAddModList_r16_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_ConfiguredGrantConfigList_r16_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SL_ConfiguredGrantConfigList_r16, sl_ConfiguredGrantConfigToReleaseList_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sl_ConfiguredGrantConfigToReleaseList_r16_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_sl_ConfiguredGrantConfigToReleaseList_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_sl_ConfiguredGrantConfigToReleaseList_r16_constraint_1
		},
		0, 0, /* No default value */
		"sl-ConfiguredGrantConfigToReleaseList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_ConfiguredGrantConfigList_r16, sl_ConfiguredGrantConfigToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_sl_ConfiguredGrantConfigToAddModList_r16_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_sl_ConfiguredGrantConfigToAddModList_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_sl_ConfiguredGrantConfigToAddModList_r16_constraint_1
		},
		0, 0, /* No default value */
		"sl-ConfiguredGrantConfigToAddModList-r16"
		},
};
static const int asn_MAP_SL_ConfiguredGrantConfigList_r16_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SL_ConfiguredGrantConfigList_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_ConfiguredGrantConfigList_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-ConfiguredGrantConfigToReleaseList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sl-ConfiguredGrantConfigToAddModList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_ConfiguredGrantConfigList_r16_specs_1 = {
	sizeof(struct SL_ConfiguredGrantConfigList_r16),
	offsetof(struct SL_ConfiguredGrantConfigList_r16, _asn_ctx),
	asn_MAP_SL_ConfiguredGrantConfigList_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SL_ConfiguredGrantConfigList_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_ConfiguredGrantConfigList_r16 = {
	"SL-ConfiguredGrantConfigList-r16",
	"SL-ConfiguredGrantConfigList-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_ConfiguredGrantConfigList_r16_tags_1,
	sizeof(asn_DEF_SL_ConfiguredGrantConfigList_r16_tags_1)
		/sizeof(asn_DEF_SL_ConfiguredGrantConfigList_r16_tags_1[0]), /* 1 */
	asn_DEF_SL_ConfiguredGrantConfigList_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_ConfiguredGrantConfigList_r16_tags_1)
		/sizeof(asn_DEF_SL_ConfiguredGrantConfigList_r16_tags_1[0]), /* 1 */
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
	asn_MBR_SL_ConfiguredGrantConfigList_r16_1,
	2,	/* Elements count */
	&asn_SPC_SL_ConfiguredGrantConfigList_r16_specs_1	/* Additional specs */
};

