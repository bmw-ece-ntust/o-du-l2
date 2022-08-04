/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "UE-MRDC-Capability.h"

#include "MeasAndMobParametersMRDC.h"
#include "Phy-ParametersMRDC.h"
#include "GeneralParametersMRDC-XDD-Diff.h"
#include "UE-MRDC-CapabilityAddXDD-Mode.h"
#include "UE-MRDC-CapabilityAddFRX-Mode.h"
#include "PDCP-ParametersMRDC.h"
#include "FeatureSetCombination.h"
static int
memb_featureSetCombinations_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 1024)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_featureSetCombinations_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..1024)) */};
static asn_per_constraints_t asn_PER_type_featureSetCombinations_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_featureSetCombinations_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..1024)) */};
static asn_per_constraints_t asn_PER_memb_featureSetCombinations_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_featureSetCombinations_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FeatureSetCombination,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_featureSetCombinations_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_featureSetCombinations_specs_10 = {
	sizeof(struct UE_MRDC_Capability__featureSetCombinations),
	offsetof(struct UE_MRDC_Capability__featureSetCombinations, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_featureSetCombinations_10 = {
	"featureSetCombinations",
	"featureSetCombinations",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_featureSetCombinations_tags_10,
	sizeof(asn_DEF_featureSetCombinations_tags_10)
		/sizeof(asn_DEF_featureSetCombinations_tags_10[0]) - 1, /* 1 */
	asn_DEF_featureSetCombinations_tags_10,	/* Same as above */
	sizeof(asn_DEF_featureSetCombinations_tags_10)
		/sizeof(asn_DEF_featureSetCombinations_tags_10[0]), /* 2 */
	{ &asn_OER_type_featureSetCombinations_constr_10, &asn_PER_type_featureSetCombinations_constr_10, SEQUENCE_OF_constraint },
	asn_MBR_featureSetCombinations_10,
	1,	/* Single element */
	&asn_SPC_featureSetCombinations_specs_10	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_14 = {
	sizeof(struct UE_MRDC_Capability__nonCriticalExtension),
	offsetof(struct UE_MRDC_Capability__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_14 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_14,
	sizeof(asn_DEF_nonCriticalExtension_tags_14)
		/sizeof(asn_DEF_nonCriticalExtension_tags_14[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_14,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_14)
		/sizeof(asn_DEF_nonCriticalExtension_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UE_MRDC_Capability_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_MRDC_Capability, measAndMobParametersMRDC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasAndMobParametersMRDC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measAndMobParametersMRDC"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_MRDC_Capability, phy_ParametersMRDC_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Phy_ParametersMRDC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phy-ParametersMRDC-v1530"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_MRDC_Capability, rf_ParametersMRDC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_ParametersMRDC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rf-ParametersMRDC"
		},
	{ ATF_POINTER, 9, offsetof(struct UE_MRDC_Capability, generalParametersMRDC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeneralParametersMRDC_XDD_Diff,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"generalParametersMRDC"
		},
	{ ATF_POINTER, 8, offsetof(struct UE_MRDC_Capability, fdd_Add_UE_MRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_MRDC_CapabilityAddXDD_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-Add-UE-MRDC-Capabilities"
		},
	{ ATF_POINTER, 7, offsetof(struct UE_MRDC_Capability, tdd_Add_UE_MRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_MRDC_CapabilityAddXDD_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-Add-UE-MRDC-Capabilities"
		},
	{ ATF_POINTER, 6, offsetof(struct UE_MRDC_Capability, fr1_Add_UE_MRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_MRDC_CapabilityAddFRX_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr1-Add-UE-MRDC-Capabilities"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_MRDC_Capability, fr2_Add_UE_MRDC_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_MRDC_CapabilityAddFRX_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr2-Add-UE-MRDC-Capabilities"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_MRDC_Capability, featureSetCombinations),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_featureSetCombinations_10,
		0,
		{ &asn_OER_memb_featureSetCombinations_constr_10, &asn_PER_memb_featureSetCombinations_constr_10,  memb_featureSetCombinations_constraint_1 },
		0, 0, /* No default value */
		"featureSetCombinations"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_MRDC_Capability, pdcp_ParametersMRDC_v1530),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_ParametersMRDC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-ParametersMRDC-v1530"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_MRDC_Capability, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_MRDC_Capability, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_MRDC_Capability_oms_1[] = { 0, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_UE_MRDC_Capability_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_MRDC_Capability_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measAndMobParametersMRDC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* phy-ParametersMRDC-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rf-ParametersMRDC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* generalParametersMRDC */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* fdd-Add-UE-MRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* tdd-Add-UE-MRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* fr1-Add-UE-MRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* fr2-Add-UE-MRDC-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* featureSetCombinations */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* pdcp-ParametersMRDC-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_MRDC_Capability_specs_1 = {
	sizeof(struct UE_MRDC_Capability),
	offsetof(struct UE_MRDC_Capability, _asn_ctx),
	asn_MAP_UE_MRDC_Capability_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_UE_MRDC_Capability_oms_1,	/* Optional members */
	11, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_MRDC_Capability = {
	"UE-MRDC-Capability",
	"UE-MRDC-Capability",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_MRDC_Capability_tags_1,
	sizeof(asn_DEF_UE_MRDC_Capability_tags_1)
		/sizeof(asn_DEF_UE_MRDC_Capability_tags_1[0]), /* 1 */
	asn_DEF_UE_MRDC_Capability_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_MRDC_Capability_tags_1)
		/sizeof(asn_DEF_UE_MRDC_Capability_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_MRDC_Capability_1,
	12,	/* Elements count */
	&asn_SPC_UE_MRDC_Capability_specs_1	/* Additional specs */
};

