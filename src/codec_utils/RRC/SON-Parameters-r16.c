/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "SON-Parameters-r16.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rach_Report_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rlfReportCHO_r17_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rlfReportDAPS_r17_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_success_HO_Report_r17_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_twoStepRACH_Report_r17_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_pscell_MHI_Report_r17_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_onDemandSI_Report_r17_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_rach_Report_r16_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_rach_Report_r16_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rach_Report_r16_specs_2 = {
	asn_MAP_rach_Report_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_rach_Report_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rach_Report_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rach_Report_r16_2 = {
	"rach-Report-r16",
	"rach-Report-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_rach_Report_r16_tags_2,
	sizeof(asn_DEF_rach_Report_r16_tags_2)
		/sizeof(asn_DEF_rach_Report_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_rach_Report_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_rach_Report_r16_tags_2)
		/sizeof(asn_DEF_rach_Report_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rach_Report_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rach_Report_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rlfReportCHO_r17_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_rlfReportCHO_r17_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rlfReportCHO_r17_specs_6 = {
	asn_MAP_rlfReportCHO_r17_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_rlfReportCHO_r17_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rlfReportCHO_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlfReportCHO_r17_6 = {
	"rlfReportCHO-r17",
	"rlfReportCHO-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_rlfReportCHO_r17_tags_6,
	sizeof(asn_DEF_rlfReportCHO_r17_tags_6)
		/sizeof(asn_DEF_rlfReportCHO_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_rlfReportCHO_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_rlfReportCHO_r17_tags_6)
		/sizeof(asn_DEF_rlfReportCHO_r17_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rlfReportCHO_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rlfReportCHO_r17_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rlfReportDAPS_r17_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_rlfReportDAPS_r17_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rlfReportDAPS_r17_specs_8 = {
	asn_MAP_rlfReportDAPS_r17_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_rlfReportDAPS_r17_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rlfReportDAPS_r17_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlfReportDAPS_r17_8 = {
	"rlfReportDAPS-r17",
	"rlfReportDAPS-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_rlfReportDAPS_r17_tags_8,
	sizeof(asn_DEF_rlfReportDAPS_r17_tags_8)
		/sizeof(asn_DEF_rlfReportDAPS_r17_tags_8[0]) - 1, /* 1 */
	asn_DEF_rlfReportDAPS_r17_tags_8,	/* Same as above */
	sizeof(asn_DEF_rlfReportDAPS_r17_tags_8)
		/sizeof(asn_DEF_rlfReportDAPS_r17_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rlfReportDAPS_r17_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rlfReportDAPS_r17_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_success_HO_Report_r17_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_success_HO_Report_r17_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_success_HO_Report_r17_specs_10 = {
	asn_MAP_success_HO_Report_r17_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_success_HO_Report_r17_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_success_HO_Report_r17_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_success_HO_Report_r17_10 = {
	"success-HO-Report-r17",
	"success-HO-Report-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_success_HO_Report_r17_tags_10,
	sizeof(asn_DEF_success_HO_Report_r17_tags_10)
		/sizeof(asn_DEF_success_HO_Report_r17_tags_10[0]) - 1, /* 1 */
	asn_DEF_success_HO_Report_r17_tags_10,	/* Same as above */
	sizeof(asn_DEF_success_HO_Report_r17_tags_10)
		/sizeof(asn_DEF_success_HO_Report_r17_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_success_HO_Report_r17_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_success_HO_Report_r17_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_twoStepRACH_Report_r17_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_twoStepRACH_Report_r17_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_twoStepRACH_Report_r17_specs_12 = {
	asn_MAP_twoStepRACH_Report_r17_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_twoStepRACH_Report_r17_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_twoStepRACH_Report_r17_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoStepRACH_Report_r17_12 = {
	"twoStepRACH-Report-r17",
	"twoStepRACH-Report-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_twoStepRACH_Report_r17_tags_12,
	sizeof(asn_DEF_twoStepRACH_Report_r17_tags_12)
		/sizeof(asn_DEF_twoStepRACH_Report_r17_tags_12[0]) - 1, /* 1 */
	asn_DEF_twoStepRACH_Report_r17_tags_12,	/* Same as above */
	sizeof(asn_DEF_twoStepRACH_Report_r17_tags_12)
		/sizeof(asn_DEF_twoStepRACH_Report_r17_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_twoStepRACH_Report_r17_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoStepRACH_Report_r17_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pscell_MHI_Report_r17_value2enum_14[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_pscell_MHI_Report_r17_enum2value_14[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pscell_MHI_Report_r17_specs_14 = {
	asn_MAP_pscell_MHI_Report_r17_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_pscell_MHI_Report_r17_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pscell_MHI_Report_r17_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pscell_MHI_Report_r17_14 = {
	"pscell-MHI-Report-r17",
	"pscell-MHI-Report-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_pscell_MHI_Report_r17_tags_14,
	sizeof(asn_DEF_pscell_MHI_Report_r17_tags_14)
		/sizeof(asn_DEF_pscell_MHI_Report_r17_tags_14[0]) - 1, /* 1 */
	asn_DEF_pscell_MHI_Report_r17_tags_14,	/* Same as above */
	sizeof(asn_DEF_pscell_MHI_Report_r17_tags_14)
		/sizeof(asn_DEF_pscell_MHI_Report_r17_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_pscell_MHI_Report_r17_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pscell_MHI_Report_r17_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_onDemandSI_Report_r17_value2enum_16[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_onDemandSI_Report_r17_enum2value_16[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_onDemandSI_Report_r17_specs_16 = {
	asn_MAP_onDemandSI_Report_r17_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_onDemandSI_Report_r17_enum2value_16,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_onDemandSI_Report_r17_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_onDemandSI_Report_r17_16 = {
	"onDemandSI-Report-r17",
	"onDemandSI-Report-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_onDemandSI_Report_r17_tags_16,
	sizeof(asn_DEF_onDemandSI_Report_r17_tags_16)
		/sizeof(asn_DEF_onDemandSI_Report_r17_tags_16[0]) - 1, /* 1 */
	asn_DEF_onDemandSI_Report_r17_tags_16,	/* Same as above */
	sizeof(asn_DEF_onDemandSI_Report_r17_tags_16)
		/sizeof(asn_DEF_onDemandSI_Report_r17_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_onDemandSI_Report_r17_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_onDemandSI_Report_r17_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_5[] = {
	{ ATF_POINTER, 6, offsetof(struct SON_Parameters_r16__ext1, rlfReportCHO_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rlfReportCHO_r17_6,
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
		"rlfReportCHO-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct SON_Parameters_r16__ext1, rlfReportDAPS_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rlfReportDAPS_r17_8,
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
		"rlfReportDAPS-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct SON_Parameters_r16__ext1, success_HO_Report_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_success_HO_Report_r17_10,
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
		"success-HO-Report-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct SON_Parameters_r16__ext1, twoStepRACH_Report_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoStepRACH_Report_r17_12,
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
		"twoStepRACH-Report-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct SON_Parameters_r16__ext1, pscell_MHI_Report_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pscell_MHI_Report_r17_14,
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
		"pscell-MHI-Report-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct SON_Parameters_r16__ext1, onDemandSI_Report_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_onDemandSI_Report_r17_16,
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
		"onDemandSI-Report-r17"
		},
};
static const int asn_MAP_ext1_oms_5[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlfReportCHO-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlfReportDAPS-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* success-HO-Report-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* twoStepRACH-Report-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pscell-MHI-Report-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* onDemandSI-Report-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_5 = {
	sizeof(struct SON_Parameters_r16__ext1),
	offsetof(struct SON_Parameters_r16__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_5,
	6,	/* Count of tags in the map */
	asn_MAP_ext1_oms_5,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_5,
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]), /* 2 */
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
	asn_MBR_ext1_5,
	6,	/* Elements count */
	&asn_SPC_ext1_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SON_Parameters_r16_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SON_Parameters_r16, rach_Report_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rach_Report_r16_2,
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
		"rach-Report-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SON_Parameters_r16, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext1_5,
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
static const int asn_MAP_SON_Parameters_r16_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SON_Parameters_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SON_Parameters_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rach-Report-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_SON_Parameters_r16_specs_1 = {
	sizeof(struct SON_Parameters_r16),
	offsetof(struct SON_Parameters_r16, _asn_ctx),
	asn_MAP_SON_Parameters_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SON_Parameters_r16_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SON_Parameters_r16 = {
	"SON-Parameters-r16",
	"SON-Parameters-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SON_Parameters_r16_tags_1,
	sizeof(asn_DEF_SON_Parameters_r16_tags_1)
		/sizeof(asn_DEF_SON_Parameters_r16_tags_1[0]), /* 1 */
	asn_DEF_SON_Parameters_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SON_Parameters_r16_tags_1)
		/sizeof(asn_DEF_SON_Parameters_r16_tags_1[0]), /* 1 */
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
	asn_MBR_SON_Parameters_r16_1,
	2,	/* Elements count */
	&asn_SPC_SON_Parameters_r16_specs_1	/* Additional specs */
};

