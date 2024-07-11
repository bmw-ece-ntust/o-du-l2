/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "PUSCH-ConfigCommon.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_msg3_DeltaPreamble_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1L && value <= 6L)) {
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
memb_p0_NominalWithGrant_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -202L && value <= 24L)) {
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
static asn_per_constraints_t asn_PER_type_groupHoppingEnabledTransformPrecoding_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_msg3_DeltaPreamble_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -1,  6 }	/* (-1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_p0_NominalWithGrant_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -202,  24 }	/* (-202..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_groupHoppingEnabledTransformPrecoding_value2enum_2[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_groupHoppingEnabledTransformPrecoding_enum2value_2[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_groupHoppingEnabledTransformPrecoding_specs_2 = {
	asn_MAP_groupHoppingEnabledTransformPrecoding_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_groupHoppingEnabledTransformPrecoding_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_groupHoppingEnabledTransformPrecoding_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_groupHoppingEnabledTransformPrecoding_2 = {
	"groupHoppingEnabledTransformPrecoding",
	"groupHoppingEnabledTransformPrecoding",
	&asn_OP_NativeEnumerated,
	asn_DEF_groupHoppingEnabledTransformPrecoding_tags_2,
	sizeof(asn_DEF_groupHoppingEnabledTransformPrecoding_tags_2)
		/sizeof(asn_DEF_groupHoppingEnabledTransformPrecoding_tags_2[0]) - 1, /* 1 */
	asn_DEF_groupHoppingEnabledTransformPrecoding_tags_2,	/* Same as above */
	sizeof(asn_DEF_groupHoppingEnabledTransformPrecoding_tags_2)
		/sizeof(asn_DEF_groupHoppingEnabledTransformPrecoding_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_groupHoppingEnabledTransformPrecoding_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_groupHoppingEnabledTransformPrecoding_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUSCH_ConfigCommon_1[] = {
	{ ATF_POINTER, 4, offsetof(struct PUSCH_ConfigCommon, groupHoppingEnabledTransformPrecoding),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_groupHoppingEnabledTransformPrecoding_2,
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
		"groupHoppingEnabledTransformPrecoding"
		},
	{ ATF_POINTER, 3, offsetof(struct PUSCH_ConfigCommon, pusch_TimeDomainAllocationList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_TimeDomainResourceAllocationList,
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
		"pusch-TimeDomainAllocationList"
		},
	{ ATF_POINTER, 2, offsetof(struct PUSCH_ConfigCommon, msg3_DeltaPreamble),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_msg3_DeltaPreamble_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_msg3_DeltaPreamble_constraint_1
		},
		0, 0, /* No default value */
		"msg3-DeltaPreamble"
		},
	{ ATF_POINTER, 1, offsetof(struct PUSCH_ConfigCommon, p0_NominalWithGrant),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_p0_NominalWithGrant_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_p0_NominalWithGrant_constraint_1
		},
		0, 0, /* No default value */
		"p0-NominalWithGrant"
		},
};
static const int asn_MAP_PUSCH_ConfigCommon_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_PUSCH_ConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUSCH_ConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* groupHoppingEnabledTransformPrecoding */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pusch-TimeDomainAllocationList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* msg3-DeltaPreamble */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* p0-NominalWithGrant */
};
asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigCommon_specs_1 = {
	sizeof(struct PUSCH_ConfigCommon),
	offsetof(struct PUSCH_ConfigCommon, _asn_ctx),
	asn_MAP_PUSCH_ConfigCommon_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PUSCH_ConfigCommon_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigCommon = {
	"PUSCH-ConfigCommon",
	"PUSCH-ConfigCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_PUSCH_ConfigCommon_tags_1,
	sizeof(asn_DEF_PUSCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_PUSCH_ConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUSCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigCommon_tags_1[0]), /* 1 */
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
	asn_MBR_PUSCH_ConfigCommon_1,
	4,	/* Elements count */
	&asn_SPC_PUSCH_ConfigCommon_specs_1	/* Additional specs */
};

