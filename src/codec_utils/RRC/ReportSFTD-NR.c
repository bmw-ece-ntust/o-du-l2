/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "ReportSFTD-NR.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_cellsForWhichToReportSFTD_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 3UL)) {
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
static asn_per_constraints_t asn_PER_type_reportSFTD_NeighMeas_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_drx_SFTD_NeighMeas_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_cellsForWhichToReportSFTD_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_cellsForWhichToReportSFTD_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_reportSFTD_NeighMeas_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_reportSFTD_NeighMeas_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_reportSFTD_NeighMeas_specs_6 = {
	asn_MAP_reportSFTD_NeighMeas_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_reportSFTD_NeighMeas_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reportSFTD_NeighMeas_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportSFTD_NeighMeas_6 = {
	"reportSFTD-NeighMeas",
	"reportSFTD-NeighMeas",
	&asn_OP_NativeEnumerated,
	asn_DEF_reportSFTD_NeighMeas_tags_6,
	sizeof(asn_DEF_reportSFTD_NeighMeas_tags_6)
		/sizeof(asn_DEF_reportSFTD_NeighMeas_tags_6[0]) - 1, /* 1 */
	asn_DEF_reportSFTD_NeighMeas_tags_6,	/* Same as above */
	sizeof(asn_DEF_reportSFTD_NeighMeas_tags_6)
		/sizeof(asn_DEF_reportSFTD_NeighMeas_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_reportSFTD_NeighMeas_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reportSFTD_NeighMeas_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_SFTD_NeighMeas_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_drx_SFTD_NeighMeas_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_SFTD_NeighMeas_specs_8 = {
	asn_MAP_drx_SFTD_NeighMeas_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_SFTD_NeighMeas_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_SFTD_NeighMeas_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_SFTD_NeighMeas_8 = {
	"drx-SFTD-NeighMeas",
	"drx-SFTD-NeighMeas",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_SFTD_NeighMeas_tags_8,
	sizeof(asn_DEF_drx_SFTD_NeighMeas_tags_8)
		/sizeof(asn_DEF_drx_SFTD_NeighMeas_tags_8[0]) - 1, /* 1 */
	asn_DEF_drx_SFTD_NeighMeas_tags_8,	/* Same as above */
	sizeof(asn_DEF_drx_SFTD_NeighMeas_tags_8)
		/sizeof(asn_DEF_drx_SFTD_NeighMeas_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_drx_SFTD_NeighMeas_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_SFTD_NeighMeas_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellsForWhichToReportSFTD_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PhysCellId,
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
static const ber_tlv_tag_t asn_DEF_cellsForWhichToReportSFTD_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_cellsForWhichToReportSFTD_specs_10 = {
	sizeof(struct ReportSFTD_NR__ext1__cellsForWhichToReportSFTD),
	offsetof(struct ReportSFTD_NR__ext1__cellsForWhichToReportSFTD, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellsForWhichToReportSFTD_10 = {
	"cellsForWhichToReportSFTD",
	"cellsForWhichToReportSFTD",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_cellsForWhichToReportSFTD_tags_10,
	sizeof(asn_DEF_cellsForWhichToReportSFTD_tags_10)
		/sizeof(asn_DEF_cellsForWhichToReportSFTD_tags_10[0]) - 1, /* 1 */
	asn_DEF_cellsForWhichToReportSFTD_tags_10,	/* Same as above */
	sizeof(asn_DEF_cellsForWhichToReportSFTD_tags_10)
		/sizeof(asn_DEF_cellsForWhichToReportSFTD_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_cellsForWhichToReportSFTD_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_cellsForWhichToReportSFTD_10,
	1,	/* Single element */
	&asn_SPC_cellsForWhichToReportSFTD_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_5[] = {
	{ ATF_POINTER, 3, offsetof(struct ReportSFTD_NR__ext1, reportSFTD_NeighMeas),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reportSFTD_NeighMeas_6,
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
		"reportSFTD-NeighMeas"
		},
	{ ATF_POINTER, 2, offsetof(struct ReportSFTD_NR__ext1, drx_SFTD_NeighMeas),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_SFTD_NeighMeas_8,
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
		"drx-SFTD-NeighMeas"
		},
	{ ATF_POINTER, 1, offsetof(struct ReportSFTD_NR__ext1, cellsForWhichToReportSFTD),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_cellsForWhichToReportSFTD_10,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_cellsForWhichToReportSFTD_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_cellsForWhichToReportSFTD_constraint_5
		},
		0, 0, /* No default value */
		"cellsForWhichToReportSFTD"
		},
};
static const int asn_MAP_ext1_oms_5[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reportSFTD-NeighMeas */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drx-SFTD-NeighMeas */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellsForWhichToReportSFTD */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_5 = {
	sizeof(struct ReportSFTD_NR__ext1),
	offsetof(struct ReportSFTD_NR__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_5,
	3,	/* Count of tags in the map */
	asn_MAP_ext1_oms_5,	/* Optional members */
	3, 0,	/* Root/Additions */
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
	3,	/* Elements count */
	&asn_SPC_ext1_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ReportSFTD_NR_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportSFTD_NR, reportSFTD_Meas),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"reportSFTD-Meas"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportSFTD_NR, reportRSRP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"reportRSRP"
		},
	{ ATF_POINTER, 1, offsetof(struct ReportSFTD_NR, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
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
static const int asn_MAP_ReportSFTD_NR_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ReportSFTD_NR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReportSFTD_NR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reportSFTD-Meas */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportRSRP */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_ReportSFTD_NR_specs_1 = {
	sizeof(struct ReportSFTD_NR),
	offsetof(struct ReportSFTD_NR, _asn_ctx),
	asn_MAP_ReportSFTD_NR_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ReportSFTD_NR_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReportSFTD_NR = {
	"ReportSFTD-NR",
	"ReportSFTD-NR",
	&asn_OP_SEQUENCE,
	asn_DEF_ReportSFTD_NR_tags_1,
	sizeof(asn_DEF_ReportSFTD_NR_tags_1)
		/sizeof(asn_DEF_ReportSFTD_NR_tags_1[0]), /* 1 */
	asn_DEF_ReportSFTD_NR_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportSFTD_NR_tags_1)
		/sizeof(asn_DEF_ReportSFTD_NR_tags_1[0]), /* 1 */
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
	asn_MBR_ReportSFTD_NR_1,
	3,	/* Elements count */
	&asn_SPC_ReportSFTD_NR_specs_1	/* Additional specs */
};

