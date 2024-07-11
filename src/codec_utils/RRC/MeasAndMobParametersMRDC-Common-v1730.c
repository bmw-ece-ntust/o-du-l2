/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "MeasAndMobParametersMRDC-Common-v1730.h"

static int
memb_fr1_Only_r17_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 32L)) {
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
memb_fr2_Only_r17_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 32L)) {
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
memb_fr1_AndFR2_r17_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 32L)) {
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
static asn_per_constraints_t asn_PER_memb_fr1_Only_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_fr2_Only_r17_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_fr1_AndFR2_r17_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_independentGapConfig_maxCC_r17_2[] = {
	{ ATF_POINTER, 3, offsetof(struct MeasAndMobParametersMRDC_Common_v1730__independentGapConfig_maxCC_r17, fr1_Only_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_fr1_Only_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_fr1_Only_r17_constraint_2
		},
		0, 0, /* No default value */
		"fr1-Only-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasAndMobParametersMRDC_Common_v1730__independentGapConfig_maxCC_r17, fr2_Only_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_fr2_Only_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_fr2_Only_r17_constraint_2
		},
		0, 0, /* No default value */
		"fr2-Only-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasAndMobParametersMRDC_Common_v1730__independentGapConfig_maxCC_r17, fr1_AndFR2_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_fr1_AndFR2_r17_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_fr1_AndFR2_r17_constraint_2
		},
		0, 0, /* No default value */
		"fr1-AndFR2-r17"
		},
};
static const int asn_MAP_independentGapConfig_maxCC_r17_oms_2[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_independentGapConfig_maxCC_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_independentGapConfig_maxCC_r17_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fr1-Only-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* fr2-Only-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* fr1-AndFR2-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_independentGapConfig_maxCC_r17_specs_2 = {
	sizeof(struct MeasAndMobParametersMRDC_Common_v1730__independentGapConfig_maxCC_r17),
	offsetof(struct MeasAndMobParametersMRDC_Common_v1730__independentGapConfig_maxCC_r17, _asn_ctx),
	asn_MAP_independentGapConfig_maxCC_r17_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_independentGapConfig_maxCC_r17_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_independentGapConfig_maxCC_r17_2 = {
	"independentGapConfig-maxCC-r17",
	"independentGapConfig-maxCC-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_independentGapConfig_maxCC_r17_tags_2,
	sizeof(asn_DEF_independentGapConfig_maxCC_r17_tags_2)
		/sizeof(asn_DEF_independentGapConfig_maxCC_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_independentGapConfig_maxCC_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_independentGapConfig_maxCC_r17_tags_2)
		/sizeof(asn_DEF_independentGapConfig_maxCC_r17_tags_2[0]), /* 2 */
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
	asn_MBR_independentGapConfig_maxCC_r17_2,
	3,	/* Elements count */
	&asn_SPC_independentGapConfig_maxCC_r17_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasAndMobParametersMRDC_Common_v1730_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasAndMobParametersMRDC_Common_v1730, independentGapConfig_maxCC_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_independentGapConfig_maxCC_r17_2,
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
		"independentGapConfig-maxCC-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasAndMobParametersMRDC_Common_v1730_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasAndMobParametersMRDC_Common_v1730_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* independentGapConfig-maxCC-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasAndMobParametersMRDC_Common_v1730_specs_1 = {
	sizeof(struct MeasAndMobParametersMRDC_Common_v1730),
	offsetof(struct MeasAndMobParametersMRDC_Common_v1730, _asn_ctx),
	asn_MAP_MeasAndMobParametersMRDC_Common_v1730_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasAndMobParametersMRDC_Common_v1730 = {
	"MeasAndMobParametersMRDC-Common-v1730",
	"MeasAndMobParametersMRDC-Common-v1730",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasAndMobParametersMRDC_Common_v1730_tags_1,
	sizeof(asn_DEF_MeasAndMobParametersMRDC_Common_v1730_tags_1)
		/sizeof(asn_DEF_MeasAndMobParametersMRDC_Common_v1730_tags_1[0]), /* 1 */
	asn_DEF_MeasAndMobParametersMRDC_Common_v1730_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasAndMobParametersMRDC_Common_v1730_tags_1)
		/sizeof(asn_DEF_MeasAndMobParametersMRDC_Common_v1730_tags_1[0]), /* 1 */
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
	asn_MBR_MeasAndMobParametersMRDC_Common_v1730_1,
	1,	/* Elements count */
	&asn_SPC_MeasAndMobParametersMRDC_Common_v1730_specs_1	/* Additional specs */
};

