/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "FeatureSetUplinkPerCC-v1540.h"

static int
memb_maxNumberSRS_ResourcePerSet_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 4L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_maxNumberSimultaneousSRS_ResourceTx_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 4L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_maxNumberSRS_ResourcePerSet_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_maxNumberSimultaneousSRS_ResourceTx_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_mimo_NonCB_PUSCH_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureSetUplinkPerCC_v1540__mimo_NonCB_PUSCH, maxNumberSRS_ResourcePerSet),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_maxNumberSRS_ResourcePerSet_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_maxNumberSRS_ResourcePerSet_constraint_2
		},
		0, 0, /* No default value */
		"maxNumberSRS-ResourcePerSet"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureSetUplinkPerCC_v1540__mimo_NonCB_PUSCH, maxNumberSimultaneousSRS_ResourceTx),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_maxNumberSimultaneousSRS_ResourceTx_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_maxNumberSimultaneousSRS_ResourceTx_constraint_2
		},
		0, 0, /* No default value */
		"maxNumberSimultaneousSRS-ResourceTx"
		},
};
static const ber_tlv_tag_t asn_DEF_mimo_NonCB_PUSCH_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_mimo_NonCB_PUSCH_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberSRS-ResourcePerSet */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* maxNumberSimultaneousSRS-ResourceTx */
};
static asn_SEQUENCE_specifics_t asn_SPC_mimo_NonCB_PUSCH_specs_2 = {
	sizeof(struct FeatureSetUplinkPerCC_v1540__mimo_NonCB_PUSCH),
	offsetof(struct FeatureSetUplinkPerCC_v1540__mimo_NonCB_PUSCH, _asn_ctx),
	asn_MAP_mimo_NonCB_PUSCH_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mimo_NonCB_PUSCH_2 = {
	"mimo-NonCB-PUSCH",
	"mimo-NonCB-PUSCH",
	&asn_OP_SEQUENCE,
	asn_DEF_mimo_NonCB_PUSCH_tags_2,
	sizeof(asn_DEF_mimo_NonCB_PUSCH_tags_2)
		/sizeof(asn_DEF_mimo_NonCB_PUSCH_tags_2[0]) - 1, /* 1 */
	asn_DEF_mimo_NonCB_PUSCH_tags_2,	/* Same as above */
	sizeof(asn_DEF_mimo_NonCB_PUSCH_tags_2)
		/sizeof(asn_DEF_mimo_NonCB_PUSCH_tags_2[0]), /* 2 */
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
	asn_MBR_mimo_NonCB_PUSCH_2,
	2,	/* Elements count */
	&asn_SPC_mimo_NonCB_PUSCH_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FeatureSetUplinkPerCC_v1540_1[] = {
	{ ATF_POINTER, 1, offsetof(struct FeatureSetUplinkPerCC_v1540, mimo_NonCB_PUSCH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_mimo_NonCB_PUSCH_2,
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
		"mimo-NonCB-PUSCH"
		},
};
static const int asn_MAP_FeatureSetUplinkPerCC_v1540_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_FeatureSetUplinkPerCC_v1540_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FeatureSetUplinkPerCC_v1540_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mimo-NonCB-PUSCH */
};
asn_SEQUENCE_specifics_t asn_SPC_FeatureSetUplinkPerCC_v1540_specs_1 = {
	sizeof(struct FeatureSetUplinkPerCC_v1540),
	offsetof(struct FeatureSetUplinkPerCC_v1540, _asn_ctx),
	asn_MAP_FeatureSetUplinkPerCC_v1540_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_FeatureSetUplinkPerCC_v1540_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FeatureSetUplinkPerCC_v1540 = {
	"FeatureSetUplinkPerCC-v1540",
	"FeatureSetUplinkPerCC-v1540",
	&asn_OP_SEQUENCE,
	asn_DEF_FeatureSetUplinkPerCC_v1540_tags_1,
	sizeof(asn_DEF_FeatureSetUplinkPerCC_v1540_tags_1)
		/sizeof(asn_DEF_FeatureSetUplinkPerCC_v1540_tags_1[0]), /* 1 */
	asn_DEF_FeatureSetUplinkPerCC_v1540_tags_1,	/* Same as above */
	sizeof(asn_DEF_FeatureSetUplinkPerCC_v1540_tags_1)
		/sizeof(asn_DEF_FeatureSetUplinkPerCC_v1540_tags_1[0]), /* 1 */
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
	asn_MBR_FeatureSetUplinkPerCC_v1540_1,
	1,	/* Elements count */
	&asn_SPC_FeatureSetUplinkPerCC_v1540_specs_1	/* Additional specs */
};

