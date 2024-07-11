/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "SIB1-v1700-IEs.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_hyperSFN_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 10UL)) {
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
static asn_per_constraints_t asn_PER_type_hsdn_Cell_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_eDRX_AllowedIdle_r17_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_eDRX_AllowedInactive_r17_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_intraFreqReselectionRedCap_r17_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_cellBarredNTN_r17_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_hyperSFN_r17_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_hsdn_Cell_r17_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_hsdn_Cell_r17_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_hsdn_Cell_r17_specs_2 = {
	asn_MAP_hsdn_Cell_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_hsdn_Cell_r17_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_hsdn_Cell_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hsdn_Cell_r17_2 = {
	"hsdn-Cell-r17",
	"hsdn-Cell-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_hsdn_Cell_r17_tags_2,
	sizeof(asn_DEF_hsdn_Cell_r17_tags_2)
		/sizeof(asn_DEF_hsdn_Cell_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_hsdn_Cell_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_hsdn_Cell_r17_tags_2)
		/sizeof(asn_DEF_hsdn_Cell_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_hsdn_Cell_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_hsdn_Cell_r17_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_uac_BarringInfo_v1700_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SIB1_v1700_IEs__uac_BarringInfo_v1700, uac_BarringInfoSetList_v1700),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UAC_BarringInfoSetList_v1700,
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
		"uac-BarringInfoSetList-v1700"
		},
};
static const ber_tlv_tag_t asn_DEF_uac_BarringInfo_v1700_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_uac_BarringInfo_v1700_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* uac-BarringInfoSetList-v1700 */
};
static asn_SEQUENCE_specifics_t asn_SPC_uac_BarringInfo_v1700_specs_4 = {
	sizeof(struct SIB1_v1700_IEs__uac_BarringInfo_v1700),
	offsetof(struct SIB1_v1700_IEs__uac_BarringInfo_v1700, _asn_ctx),
	asn_MAP_uac_BarringInfo_v1700_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uac_BarringInfo_v1700_4 = {
	"uac-BarringInfo-v1700",
	"uac-BarringInfo-v1700",
	&asn_OP_SEQUENCE,
	asn_DEF_uac_BarringInfo_v1700_tags_4,
	sizeof(asn_DEF_uac_BarringInfo_v1700_tags_4)
		/sizeof(asn_DEF_uac_BarringInfo_v1700_tags_4[0]) - 1, /* 1 */
	asn_DEF_uac_BarringInfo_v1700_tags_4,	/* Same as above */
	sizeof(asn_DEF_uac_BarringInfo_v1700_tags_4)
		/sizeof(asn_DEF_uac_BarringInfo_v1700_tags_4[0]), /* 2 */
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
	asn_MBR_uac_BarringInfo_v1700_4,
	1,	/* Elements count */
	&asn_SPC_uac_BarringInfo_v1700_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_featurePriorities_r17_8[] = {
	{ ATF_POINTER, 4, offsetof(struct SIB1_v1700_IEs__featurePriorities_r17, redCapPriority_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FeaturePriority_r17,
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
		"redCapPriority-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct SIB1_v1700_IEs__featurePriorities_r17, slicingPriority_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FeaturePriority_r17,
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
		"slicingPriority-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct SIB1_v1700_IEs__featurePriorities_r17, msg3_Repetitions_Priority_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FeaturePriority_r17,
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
		"msg3-Repetitions-Priority-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB1_v1700_IEs__featurePriorities_r17, sdt_Priority_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FeaturePriority_r17,
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
		"sdt-Priority-r17"
		},
};
static const int asn_MAP_featurePriorities_r17_oms_8[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_featurePriorities_r17_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_featurePriorities_r17_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* redCapPriority-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* slicingPriority-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* msg3-Repetitions-Priority-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sdt-Priority-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_featurePriorities_r17_specs_8 = {
	sizeof(struct SIB1_v1700_IEs__featurePriorities_r17),
	offsetof(struct SIB1_v1700_IEs__featurePriorities_r17, _asn_ctx),
	asn_MAP_featurePriorities_r17_tag2el_8,
	4,	/* Count of tags in the map */
	asn_MAP_featurePriorities_r17_oms_8,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_featurePriorities_r17_8 = {
	"featurePriorities-r17",
	"featurePriorities-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_featurePriorities_r17_tags_8,
	sizeof(asn_DEF_featurePriorities_r17_tags_8)
		/sizeof(asn_DEF_featurePriorities_r17_tags_8[0]) - 1, /* 1 */
	asn_DEF_featurePriorities_r17_tags_8,	/* Same as above */
	sizeof(asn_DEF_featurePriorities_r17_tags_8)
		/sizeof(asn_DEF_featurePriorities_r17_tags_8[0]), /* 2 */
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
	asn_MBR_featurePriorities_r17_8,
	4,	/* Elements count */
	&asn_SPC_featurePriorities_r17_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_eDRX_AllowedIdle_r17_value2enum_15[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_eDRX_AllowedIdle_r17_enum2value_15[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_eDRX_AllowedIdle_r17_specs_15 = {
	asn_MAP_eDRX_AllowedIdle_r17_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_eDRX_AllowedIdle_r17_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eDRX_AllowedIdle_r17_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eDRX_AllowedIdle_r17_15 = {
	"eDRX-AllowedIdle-r17",
	"eDRX-AllowedIdle-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_eDRX_AllowedIdle_r17_tags_15,
	sizeof(asn_DEF_eDRX_AllowedIdle_r17_tags_15)
		/sizeof(asn_DEF_eDRX_AllowedIdle_r17_tags_15[0]) - 1, /* 1 */
	asn_DEF_eDRX_AllowedIdle_r17_tags_15,	/* Same as above */
	sizeof(asn_DEF_eDRX_AllowedIdle_r17_tags_15)
		/sizeof(asn_DEF_eDRX_AllowedIdle_r17_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_eDRX_AllowedIdle_r17_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eDRX_AllowedIdle_r17_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_eDRX_AllowedInactive_r17_value2enum_17[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_eDRX_AllowedInactive_r17_enum2value_17[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_eDRX_AllowedInactive_r17_specs_17 = {
	asn_MAP_eDRX_AllowedInactive_r17_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_eDRX_AllowedInactive_r17_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eDRX_AllowedInactive_r17_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eDRX_AllowedInactive_r17_17 = {
	"eDRX-AllowedInactive-r17",
	"eDRX-AllowedInactive-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_eDRX_AllowedInactive_r17_tags_17,
	sizeof(asn_DEF_eDRX_AllowedInactive_r17_tags_17)
		/sizeof(asn_DEF_eDRX_AllowedInactive_r17_tags_17[0]) - 1, /* 1 */
	asn_DEF_eDRX_AllowedInactive_r17_tags_17,	/* Same as above */
	sizeof(asn_DEF_eDRX_AllowedInactive_r17_tags_17)
		/sizeof(asn_DEF_eDRX_AllowedInactive_r17_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_eDRX_AllowedInactive_r17_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eDRX_AllowedInactive_r17_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_intraFreqReselectionRedCap_r17_value2enum_19[] = {
	{ 0,	7,	"allowed" },
	{ 1,	10,	"notAllowed" }
};
static const unsigned int asn_MAP_intraFreqReselectionRedCap_r17_enum2value_19[] = {
	0,	/* allowed(0) */
	1	/* notAllowed(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_intraFreqReselectionRedCap_r17_specs_19 = {
	asn_MAP_intraFreqReselectionRedCap_r17_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_intraFreqReselectionRedCap_r17_enum2value_19,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_intraFreqReselectionRedCap_r17_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraFreqReselectionRedCap_r17_19 = {
	"intraFreqReselectionRedCap-r17",
	"intraFreqReselectionRedCap-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_intraFreqReselectionRedCap_r17_tags_19,
	sizeof(asn_DEF_intraFreqReselectionRedCap_r17_tags_19)
		/sizeof(asn_DEF_intraFreqReselectionRedCap_r17_tags_19[0]) - 1, /* 1 */
	asn_DEF_intraFreqReselectionRedCap_r17_tags_19,	/* Same as above */
	sizeof(asn_DEF_intraFreqReselectionRedCap_r17_tags_19)
		/sizeof(asn_DEF_intraFreqReselectionRedCap_r17_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_intraFreqReselectionRedCap_r17_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_intraFreqReselectionRedCap_r17_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cellBarredNTN_r17_value2enum_22[] = {
	{ 0,	6,	"barred" },
	{ 1,	9,	"notBarred" }
};
static const unsigned int asn_MAP_cellBarredNTN_r17_enum2value_22[] = {
	0,	/* barred(0) */
	1	/* notBarred(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cellBarredNTN_r17_specs_22 = {
	asn_MAP_cellBarredNTN_r17_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_cellBarredNTN_r17_enum2value_22,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cellBarredNTN_r17_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellBarredNTN_r17_22 = {
	"cellBarredNTN-r17",
	"cellBarredNTN-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_cellBarredNTN_r17_tags_22,
	sizeof(asn_DEF_cellBarredNTN_r17_tags_22)
		/sizeof(asn_DEF_cellBarredNTN_r17_tags_22[0]) - 1, /* 1 */
	asn_DEF_cellBarredNTN_r17_tags_22,	/* Same as above */
	sizeof(asn_DEF_cellBarredNTN_r17_tags_22)
		/sizeof(asn_DEF_cellBarredNTN_r17_tags_22[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_cellBarredNTN_r17_constr_22,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cellBarredNTN_r17_specs_22	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_25 = {
	sizeof(struct SIB1_v1700_IEs__nonCriticalExtension),
	offsetof(struct SIB1_v1700_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_25 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_25,
	sizeof(asn_DEF_nonCriticalExtension_tags_25)
		/sizeof(asn_DEF_nonCriticalExtension_tags_25[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_25,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_25)
		/sizeof(asn_DEF_nonCriticalExtension_tags_25[0]), /* 2 */
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
	&asn_SPC_nonCriticalExtension_specs_25	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SIB1_v1700_IEs_1[] = {
	{ ATF_POINTER, 12, offsetof(struct SIB1_v1700_IEs, hsdn_Cell_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_hsdn_Cell_r17_2,
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
		"hsdn-Cell-r17"
		},
	{ ATF_POINTER, 11, offsetof(struct SIB1_v1700_IEs, uac_BarringInfo_v1700),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_uac_BarringInfo_v1700_4,
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
		"uac-BarringInfo-v1700"
		},
	{ ATF_POINTER, 10, offsetof(struct SIB1_v1700_IEs, sdt_ConfigCommon_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SDT_ConfigCommonSIB_r17,
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
		"sdt-ConfigCommon-r17"
		},
	{ ATF_POINTER, 9, offsetof(struct SIB1_v1700_IEs, redCap_ConfigCommon_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RedCap_ConfigCommonSIB_r17,
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
		"redCap-ConfigCommon-r17"
		},
	{ ATF_POINTER, 8, offsetof(struct SIB1_v1700_IEs, featurePriorities_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_featurePriorities_r17_8,
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
		"featurePriorities-r17"
		},
	{ ATF_POINTER, 7, offsetof(struct SIB1_v1700_IEs, si_SchedulingInfo_v1700),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SI_SchedulingInfo_v1700,
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
		"si-SchedulingInfo-v1700"
		},
	{ ATF_POINTER, 6, offsetof(struct SIB1_v1700_IEs, hyperSFN_r17),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_hyperSFN_r17_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_hyperSFN_r17_constraint_1
		},
		0, 0, /* No default value */
		"hyperSFN-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct SIB1_v1700_IEs, eDRX_AllowedIdle_r17),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eDRX_AllowedIdle_r17_15,
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
		"eDRX-AllowedIdle-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct SIB1_v1700_IEs, eDRX_AllowedInactive_r17),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eDRX_AllowedInactive_r17_17,
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
		"eDRX-AllowedInactive-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct SIB1_v1700_IEs, intraFreqReselectionRedCap_r17),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_intraFreqReselectionRedCap_r17_19,
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
		"intraFreqReselectionRedCap-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct SIB1_v1700_IEs, cellBarredNTN_r17),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cellBarredNTN_r17_22,
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
		"cellBarredNTN-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB1_v1700_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_25,
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
static const int asn_MAP_SIB1_v1700_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_SIB1_v1700_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SIB1_v1700_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hsdn-Cell-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uac-BarringInfo-v1700 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sdt-ConfigCommon-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* redCap-ConfigCommon-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* featurePriorities-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* si-SchedulingInfo-v1700 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* hyperSFN-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* eDRX-AllowedIdle-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* eDRX-AllowedInactive-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* intraFreqReselectionRedCap-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* cellBarredNTN-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SIB1_v1700_IEs_specs_1 = {
	sizeof(struct SIB1_v1700_IEs),
	offsetof(struct SIB1_v1700_IEs, _asn_ctx),
	asn_MAP_SIB1_v1700_IEs_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_SIB1_v1700_IEs_oms_1,	/* Optional members */
	12, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SIB1_v1700_IEs = {
	"SIB1-v1700-IEs",
	"SIB1-v1700-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SIB1_v1700_IEs_tags_1,
	sizeof(asn_DEF_SIB1_v1700_IEs_tags_1)
		/sizeof(asn_DEF_SIB1_v1700_IEs_tags_1[0]), /* 1 */
	asn_DEF_SIB1_v1700_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SIB1_v1700_IEs_tags_1)
		/sizeof(asn_DEF_SIB1_v1700_IEs_tags_1[0]), /* 1 */
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
	asn_MBR_SIB1_v1700_IEs_1,
	12,	/* Elements count */
	&asn_SPC_SIB1_v1700_IEs_specs_1	/* Additional specs */
};

