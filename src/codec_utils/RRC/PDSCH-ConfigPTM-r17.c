/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "PDSCH-ConfigPTM-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_dataScramblingIdentityPDSCH_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 1023L)) {
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
memb_dmrs_ScramblingID0_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 65535L)) {
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
static asn_per_constraints_t asn_PER_type_pdsch_AggregationFactor_r17_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_dataScramblingIdentityPDSCH_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_dmrs_ScramblingID0_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_pdsch_AggregationFactor_r17_value2enum_4[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n8" }
};
static const unsigned int asn_MAP_pdsch_AggregationFactor_r17_enum2value_4[] = {
	0,	/* n2(0) */
	1,	/* n4(1) */
	2	/* n8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdsch_AggregationFactor_r17_specs_4 = {
	asn_MAP_pdsch_AggregationFactor_r17_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_pdsch_AggregationFactor_r17_enum2value_4,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdsch_AggregationFactor_r17_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_AggregationFactor_r17_4 = {
	"pdsch-AggregationFactor-r17",
	"pdsch-AggregationFactor-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdsch_AggregationFactor_r17_tags_4,
	sizeof(asn_DEF_pdsch_AggregationFactor_r17_tags_4)
		/sizeof(asn_DEF_pdsch_AggregationFactor_r17_tags_4[0]) - 1, /* 1 */
	asn_DEF_pdsch_AggregationFactor_r17_tags_4,	/* Same as above */
	sizeof(asn_DEF_pdsch_AggregationFactor_r17_tags_4)
		/sizeof(asn_DEF_pdsch_AggregationFactor_r17_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_pdsch_AggregationFactor_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdsch_AggregationFactor_r17_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDSCH_ConfigPTM_r17_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PDSCH_ConfigPTM_r17, dataScramblingIdentityPDSCH_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_dataScramblingIdentityPDSCH_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_dataScramblingIdentityPDSCH_r17_constraint_1
		},
		0, 0, /* No default value */
		"dataScramblingIdentityPDSCH-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct PDSCH_ConfigPTM_r17, dmrs_ScramblingID0_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_dmrs_ScramblingID0_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_dmrs_ScramblingID0_r17_constraint_1
		},
		0, 0, /* No default value */
		"dmrs-ScramblingID0-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct PDSCH_ConfigPTM_r17, pdsch_AggregationFactor_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdsch_AggregationFactor_r17_4,
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
		"pdsch-AggregationFactor-r17"
		},
};
static const int asn_MAP_PDSCH_ConfigPTM_r17_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_PDSCH_ConfigPTM_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_ConfigPTM_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dataScramblingIdentityPDSCH-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dmrs-ScramblingID0-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* pdsch-AggregationFactor-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigPTM_r17_specs_1 = {
	sizeof(struct PDSCH_ConfigPTM_r17),
	offsetof(struct PDSCH_ConfigPTM_r17, _asn_ctx),
	asn_MAP_PDSCH_ConfigPTM_r17_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PDSCH_ConfigPTM_r17_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigPTM_r17 = {
	"PDSCH-ConfigPTM-r17",
	"PDSCH-ConfigPTM-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_PDSCH_ConfigPTM_r17_tags_1,
	sizeof(asn_DEF_PDSCH_ConfigPTM_r17_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigPTM_r17_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_ConfigPTM_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_ConfigPTM_r17_tags_1)
		/sizeof(asn_DEF_PDSCH_ConfigPTM_r17_tags_1[0]), /* 1 */
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
	asn_MBR_PDSCH_ConfigPTM_r17_1,
	3,	/* Elements count */
	&asn_SPC_PDSCH_ConfigPTM_r17_specs_1	/* Additional specs */
};

