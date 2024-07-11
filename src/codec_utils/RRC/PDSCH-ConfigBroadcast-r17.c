/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "PDSCH-ConfigBroadcast-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_pdschConfigList_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 16UL)) {
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
memb_rateMatchPatternToAddModList_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 4UL)) {
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
static asn_per_constraints_t asn_PER_type_pdschConfigList_r17_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rateMatchPatternToAddModList_r17_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mcs_Table_r17_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_xOverhead_r17_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_pdschConfigList_r17_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_rateMatchPatternToAddModList_r17_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_pdschConfigList_r17_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PDSCH_ConfigPTM_r17,
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
static const ber_tlv_tag_t asn_DEF_pdschConfigList_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_pdschConfigList_r17_specs_2 = {
	sizeof(struct PDSCH_ConfigBroadcast_r17__pdschConfigList_r17),
	offsetof(struct PDSCH_ConfigBroadcast_r17__pdschConfigList_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdschConfigList_r17_2 = {
	"pdschConfigList-r17",
	"pdschConfigList-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_pdschConfigList_r17_tags_2,
	sizeof(asn_DEF_pdschConfigList_r17_tags_2)
		/sizeof(asn_DEF_pdschConfigList_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_pdschConfigList_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_pdschConfigList_r17_tags_2)
		/sizeof(asn_DEF_pdschConfigList_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_pdschConfigList_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_pdschConfigList_r17_2,
	1,	/* Single element */
	&asn_SPC_pdschConfigList_r17_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rateMatchPatternToAddModList_r17_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RateMatchPattern,
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
static const ber_tlv_tag_t asn_DEF_rateMatchPatternToAddModList_r17_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rateMatchPatternToAddModList_r17_specs_5 = {
	sizeof(struct PDSCH_ConfigBroadcast_r17__rateMatchPatternToAddModList_r17),
	offsetof(struct PDSCH_ConfigBroadcast_r17__rateMatchPatternToAddModList_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rateMatchPatternToAddModList_r17_5 = {
	"rateMatchPatternToAddModList-r17",
	"rateMatchPatternToAddModList-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rateMatchPatternToAddModList_r17_tags_5,
	sizeof(asn_DEF_rateMatchPatternToAddModList_r17_tags_5)
		/sizeof(asn_DEF_rateMatchPatternToAddModList_r17_tags_5[0]) - 1, /* 1 */
	asn_DEF_rateMatchPatternToAddModList_r17_tags_5,	/* Same as above */
	sizeof(asn_DEF_rateMatchPatternToAddModList_r17_tags_5)
		/sizeof(asn_DEF_rateMatchPatternToAddModList_r17_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rateMatchPatternToAddModList_r17_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_rateMatchPatternToAddModList_r17_5,
	1,	/* Single element */
	&asn_SPC_rateMatchPatternToAddModList_r17_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mcs_Table_r17_value2enum_8[] = {
	{ 0,	6,	"qam256" },
	{ 1,	10,	"qam64LowSE" }
};
static const unsigned int asn_MAP_mcs_Table_r17_enum2value_8[] = {
	0,	/* qam256(0) */
	1	/* qam64LowSE(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_mcs_Table_r17_specs_8 = {
	asn_MAP_mcs_Table_r17_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_mcs_Table_r17_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mcs_Table_r17_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mcs_Table_r17_8 = {
	"mcs-Table-r17",
	"mcs-Table-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_mcs_Table_r17_tags_8,
	sizeof(asn_DEF_mcs_Table_r17_tags_8)
		/sizeof(asn_DEF_mcs_Table_r17_tags_8[0]) - 1, /* 1 */
	asn_DEF_mcs_Table_r17_tags_8,	/* Same as above */
	sizeof(asn_DEF_mcs_Table_r17_tags_8)
		/sizeof(asn_DEF_mcs_Table_r17_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mcs_Table_r17_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mcs_Table_r17_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_xOverhead_r17_value2enum_11[] = {
	{ 0,	4,	"xOh6" },
	{ 1,	5,	"xOh12" },
	{ 2,	5,	"xOh18" }
};
static const unsigned int asn_MAP_xOverhead_r17_enum2value_11[] = {
	1,	/* xOh12(1) */
	2,	/* xOh18(2) */
	0	/* xOh6(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_xOverhead_r17_specs_11 = {
	asn_MAP_xOverhead_r17_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_xOverhead_r17_enum2value_11,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_xOverhead_r17_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_xOverhead_r17_11 = {
	"xOverhead-r17",
	"xOverhead-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_xOverhead_r17_tags_11,
	sizeof(asn_DEF_xOverhead_r17_tags_11)
		/sizeof(asn_DEF_xOverhead_r17_tags_11[0]) - 1, /* 1 */
	asn_DEF_xOverhead_r17_tags_11,	/* Same as above */
	sizeof(asn_DEF_xOverhead_r17_tags_11)
		/sizeof(asn_DEF_xOverhead_r17_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_xOverhead_r17_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_xOverhead_r17_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDSCH_ConfigBroadcast_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_ConfigBroadcast_r17, pdschConfigList_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_pdschConfigList_r17_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_pdschConfigList_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_pdschConfigList_r17_constraint_1
		},
		0, 0, /* No default value */
		"pdschConfigList-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct PDSCH_ConfigBroadcast_r17, pdsch_TimeDomainAllocationList_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_TimeDomainResourceAllocationList_r16,
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
		"pdsch-TimeDomainAllocationList-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct PDSCH_ConfigBroadcast_r17, rateMatchPatternToAddModList_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_rateMatchPatternToAddModList_r17_5,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_rateMatchPatternToAddModList_r17_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_rateMatchPatternToAddModList_r17_constraint_1
		},
		0, 0, /* No default value */
		"rateMatchPatternToAddModList-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct PDSCH_ConfigBroadcast_r17, lte_CRS_ToMatchAround_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RateMatchPatternLTE_CRS,
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
		"lte-CRS-ToMatchAround-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct PDSCH_ConfigBroadcast_r17, mcs_Table_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mcs_Table_r17_8,
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
		"mcs-Table-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_ConfigBroadcast_r17, xOverhead_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_xOverhead_r17_11,
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
		"xOverhead-r17"
		},
};
static const int asn_MAP_PDSCH_ConfigBroadcast_r17_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_PDSCH_ConfigBroadcast_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_ConfigBroadcast_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdschConfigList-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdsch-TimeDomainAllocationList-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rateMatchPatternToAddModList-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lte-CRS-ToMatchAround-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mcs-Table-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* xOverhead-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigBroadcast_r17_specs_1 = {
	sizeof(struct PDSCH_ConfigBroadcast_r17),
	offsetof(struct PDSCH_ConfigBroadcast_r17, _asn_ctx),
	asn_MAP_PDSCH_ConfigBroadcast_r17_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_PDSCH_ConfigBroadcast_r17_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigBroadcast_r17 = {
	"PDSCH-ConfigBroadcast-r17",
	"PDSCH-ConfigBroadcast-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_PDSCH_ConfigBroadcast_r17_tags_1,
	sizeof(asn_DEF_PDSCH_ConfigBroadcast_r17_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigBroadcast_r17_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_ConfigBroadcast_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_ConfigBroadcast_r17_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigBroadcast_r17_tags_1[0]), /* 1 */
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
	asn_MBR_PDSCH_ConfigBroadcast_r17_1,
	6,	/* Elements count */
	&asn_SPC_PDSCH_ConfigBroadcast_r17_specs_1	/* Additional specs */
};

