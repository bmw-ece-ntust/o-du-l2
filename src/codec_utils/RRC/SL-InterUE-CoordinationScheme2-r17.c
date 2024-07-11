/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "SL-InterUE-CoordinationScheme2-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sl_DeltaRSRP_Thresh_v1720_constraint_15(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -30L && value <= 30L)) {
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
memb_sl_RB_SetPSFCH_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 10UL && size <= 275UL)) {
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
memb_sl_PSFCH_Occasion_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 1L)) {
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
memb_sl_OptionForCondition2_A_1_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 1L)) {
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
static asn_per_constraints_t asn_PER_type_sl_IUC_Scheme2_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_sl_TypeUE_A_r17_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_sl_SlotLevelResourceExclusion_r17_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_sl_IndicationUE_B_r17_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_sl_DeltaRSRP_Thresh_v1720_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -30,  30 }	/* (-30..30) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_sl_RB_SetPSFCH_r17_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  10,  275 }	/* (SIZE(10..275)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_sl_PSFCH_Occasion_r17_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_sl_OptionForCondition2_A_1_r17_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_sl_IUC_Scheme2_r17_value2enum_2[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_sl_IUC_Scheme2_r17_enum2value_2[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_IUC_Scheme2_r17_specs_2 = {
	asn_MAP_sl_IUC_Scheme2_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_IUC_Scheme2_r17_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_IUC_Scheme2_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_IUC_Scheme2_r17_2 = {
	"sl-IUC-Scheme2-r17",
	"sl-IUC-Scheme2-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_IUC_Scheme2_r17_tags_2,
	sizeof(asn_DEF_sl_IUC_Scheme2_r17_tags_2)
		/sizeof(asn_DEF_sl_IUC_Scheme2_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_sl_IUC_Scheme2_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_sl_IUC_Scheme2_r17_tags_2)
		/sizeof(asn_DEF_sl_IUC_Scheme2_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_sl_IUC_Scheme2_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_IUC_Scheme2_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sl_TypeUE_A_r17_value2enum_5[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_sl_TypeUE_A_r17_enum2value_5[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_TypeUE_A_r17_specs_5 = {
	asn_MAP_sl_TypeUE_A_r17_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_TypeUE_A_r17_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_TypeUE_A_r17_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_TypeUE_A_r17_5 = {
	"sl-TypeUE-A-r17",
	"sl-TypeUE-A-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_TypeUE_A_r17_tags_5,
	sizeof(asn_DEF_sl_TypeUE_A_r17_tags_5)
		/sizeof(asn_DEF_sl_TypeUE_A_r17_tags_5[0]) - 1, /* 1 */
	asn_DEF_sl_TypeUE_A_r17_tags_5,	/* Same as above */
	sizeof(asn_DEF_sl_TypeUE_A_r17_tags_5)
		/sizeof(asn_DEF_sl_TypeUE_A_r17_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_sl_TypeUE_A_r17_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_TypeUE_A_r17_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sl_SlotLevelResourceExclusion_r17_value2enum_8[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_sl_SlotLevelResourceExclusion_r17_enum2value_8[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_SlotLevelResourceExclusion_r17_specs_8 = {
	asn_MAP_sl_SlotLevelResourceExclusion_r17_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_SlotLevelResourceExclusion_r17_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_SlotLevelResourceExclusion_r17_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_SlotLevelResourceExclusion_r17_8 = {
	"sl-SlotLevelResourceExclusion-r17",
	"sl-SlotLevelResourceExclusion-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_SlotLevelResourceExclusion_r17_tags_8,
	sizeof(asn_DEF_sl_SlotLevelResourceExclusion_r17_tags_8)
		/sizeof(asn_DEF_sl_SlotLevelResourceExclusion_r17_tags_8[0]) - 1, /* 1 */
	asn_DEF_sl_SlotLevelResourceExclusion_r17_tags_8,	/* Same as above */
	sizeof(asn_DEF_sl_SlotLevelResourceExclusion_r17_tags_8)
		/sizeof(asn_DEF_sl_SlotLevelResourceExclusion_r17_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_sl_SlotLevelResourceExclusion_r17_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_SlotLevelResourceExclusion_r17_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sl_IndicationUE_B_r17_value2enum_11[] = {
	{ 0,	7,	"enabled" },
	{ 1,	8,	"disabled" }
};
static const unsigned int asn_MAP_sl_IndicationUE_B_r17_enum2value_11[] = {
	1,	/* disabled(1) */
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_sl_IndicationUE_B_r17_specs_11 = {
	asn_MAP_sl_IndicationUE_B_r17_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_sl_IndicationUE_B_r17_enum2value_11,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sl_IndicationUE_B_r17_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sl_IndicationUE_B_r17_11 = {
	"sl-IndicationUE-B-r17",
	"sl-IndicationUE-B-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_sl_IndicationUE_B_r17_tags_11,
	sizeof(asn_DEF_sl_IndicationUE_B_r17_tags_11)
		/sizeof(asn_DEF_sl_IndicationUE_B_r17_tags_11[0]) - 1, /* 1 */
	asn_DEF_sl_IndicationUE_B_r17_tags_11,	/* Same as above */
	sizeof(asn_DEF_sl_IndicationUE_B_r17_tags_11)
		/sizeof(asn_DEF_sl_IndicationUE_B_r17_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_sl_IndicationUE_B_r17_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sl_IndicationUE_B_r17_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_15[] = {
	{ ATF_POINTER, 1, offsetof(struct SL_InterUE_CoordinationScheme2_r17__ext1, sl_DeltaRSRP_Thresh_v1720),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_sl_DeltaRSRP_Thresh_v1720_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_sl_DeltaRSRP_Thresh_v1720_constraint_15
		},
		0, 0, /* No default value */
		"sl-DeltaRSRP-Thresh-v1720"
		},
};
static const int asn_MAP_ext1_oms_15[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sl-DeltaRSRP-Thresh-v1720 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_15 = {
	sizeof(struct SL_InterUE_CoordinationScheme2_r17__ext1),
	offsetof(struct SL_InterUE_CoordinationScheme2_r17__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_15,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_15,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_15 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_15,
	sizeof(asn_DEF_ext1_tags_15)
		/sizeof(asn_DEF_ext1_tags_15[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_15,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_15)
		/sizeof(asn_DEF_ext1_tags_15[0]), /* 2 */
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
	asn_MBR_ext1_15,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SL_InterUE_CoordinationScheme2_r17_1[] = {
	{ ATF_POINTER, 8, offsetof(struct SL_InterUE_CoordinationScheme2_r17, sl_IUC_Scheme2_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_IUC_Scheme2_r17_2,
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
		"sl-IUC-Scheme2-r17"
		},
	{ ATF_POINTER, 7, offsetof(struct SL_InterUE_CoordinationScheme2_r17, sl_RB_SetPSFCH_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_sl_RB_SetPSFCH_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_sl_RB_SetPSFCH_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-RB-SetPSFCH-r17"
		},
	{ ATF_POINTER, 6, offsetof(struct SL_InterUE_CoordinationScheme2_r17, sl_TypeUE_A_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_TypeUE_A_r17_5,
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
		"sl-TypeUE-A-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct SL_InterUE_CoordinationScheme2_r17, sl_PSFCH_Occasion_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_sl_PSFCH_Occasion_r17_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_sl_PSFCH_Occasion_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-PSFCH-Occasion-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct SL_InterUE_CoordinationScheme2_r17, sl_SlotLevelResourceExclusion_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_SlotLevelResourceExclusion_r17_8,
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
		"sl-SlotLevelResourceExclusion-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_InterUE_CoordinationScheme2_r17, sl_OptionForCondition2_A_1_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_sl_OptionForCondition2_A_1_r17_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_sl_OptionForCondition2_A_1_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-OptionForCondition2-A-1-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_InterUE_CoordinationScheme2_r17, sl_IndicationUE_B_r17),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sl_IndicationUE_B_r17_11,
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
		"sl-IndicationUE-B-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_InterUE_CoordinationScheme2_r17, ext1),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_ext1_15,
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
		"ext1"
		},
};
static const int asn_MAP_SL_InterUE_CoordinationScheme2_r17_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_SL_InterUE_CoordinationScheme2_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_InterUE_CoordinationScheme2_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-IUC-Scheme2-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-RB-SetPSFCH-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-TypeUE-A-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-PSFCH-Occasion-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sl-SlotLevelResourceExclusion-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sl-OptionForCondition2-A-1-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sl-IndicationUE-B-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_InterUE_CoordinationScheme2_r17_specs_1 = {
	sizeof(struct SL_InterUE_CoordinationScheme2_r17),
	offsetof(struct SL_InterUE_CoordinationScheme2_r17, _asn_ctx),
	asn_MAP_SL_InterUE_CoordinationScheme2_r17_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_SL_InterUE_CoordinationScheme2_r17_oms_1,	/* Optional members */
	7, 1,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_InterUE_CoordinationScheme2_r17 = {
	"SL-InterUE-CoordinationScheme2-r17",
	"SL-InterUE-CoordinationScheme2-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_InterUE_CoordinationScheme2_r17_tags_1,
	sizeof(asn_DEF_SL_InterUE_CoordinationScheme2_r17_tags_1)
		/sizeof(asn_DEF_SL_InterUE_CoordinationScheme2_r17_tags_1[0]), /* 1 */
	asn_DEF_SL_InterUE_CoordinationScheme2_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_InterUE_CoordinationScheme2_r17_tags_1)
		/sizeof(asn_DEF_SL_InterUE_CoordinationScheme2_r17_tags_1[0]), /* 1 */
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
	asn_MBR_SL_InterUE_CoordinationScheme2_r17_1,
	8,	/* Elements count */
	&asn_SPC_SL_InterUE_CoordinationScheme2_r17_specs_1	/* Additional specs */
};

