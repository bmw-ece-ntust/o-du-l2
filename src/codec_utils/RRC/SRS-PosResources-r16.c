/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "SRS-PosResources-r16.h"

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
static asn_per_constraints_t asn_PER_type_maxNumberSRS_PosResourceSetPerBWP_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maxNumberSRS_PosResourcesPerBWP_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_maxNumberSRS_PosResourceSetPerBWP_r16_value2enum_2[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n12" },
	{ 5,	3,	"n16" }
};
static const unsigned int asn_MAP_maxNumberSRS_PosResourceSetPerBWP_r16_enum2value_2[] = {
	0,	/* n1(0) */
	4,	/* n12(4) */
	5,	/* n16(5) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberSRS_PosResourceSetPerBWP_r16_specs_2 = {
	asn_MAP_maxNumberSRS_PosResourceSetPerBWP_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberSRS_PosResourceSetPerBWP_r16_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberSRS_PosResourceSetPerBWP_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberSRS_PosResourceSetPerBWP_r16_2 = {
	"maxNumberSRS-PosResourceSetPerBWP-r16",
	"maxNumberSRS-PosResourceSetPerBWP-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberSRS_PosResourceSetPerBWP_r16_tags_2,
	sizeof(asn_DEF_maxNumberSRS_PosResourceSetPerBWP_r16_tags_2)
		/sizeof(asn_DEF_maxNumberSRS_PosResourceSetPerBWP_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_maxNumberSRS_PosResourceSetPerBWP_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_maxNumberSRS_PosResourceSetPerBWP_r16_tags_2)
		/sizeof(asn_DEF_maxNumberSRS_PosResourceSetPerBWP_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maxNumberSRS_PosResourceSetPerBWP_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberSRS_PosResourceSetPerBWP_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumberSRS_PosResourcesPerBWP_r16_value2enum_9[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" }
};
static const unsigned int asn_MAP_maxNumberSRS_PosResourcesPerBWP_r16_enum2value_9[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberSRS_PosResourcesPerBWP_r16_specs_9 = {
	asn_MAP_maxNumberSRS_PosResourcesPerBWP_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberSRS_PosResourcesPerBWP_r16_enum2value_9,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberSRS_PosResourcesPerBWP_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberSRS_PosResourcesPerBWP_r16_9 = {
	"maxNumberSRS-PosResourcesPerBWP-r16",
	"maxNumberSRS-PosResourcesPerBWP-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberSRS_PosResourcesPerBWP_r16_tags_9,
	sizeof(asn_DEF_maxNumberSRS_PosResourcesPerBWP_r16_tags_9)
		/sizeof(asn_DEF_maxNumberSRS_PosResourcesPerBWP_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_maxNumberSRS_PosResourcesPerBWP_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_maxNumberSRS_PosResourcesPerBWP_r16_tags_9)
		/sizeof(asn_DEF_maxNumberSRS_PosResourcesPerBWP_r16_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maxNumberSRS_PosResourcesPerBWP_r16_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberSRS_PosResourcesPerBWP_r16_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_value2enum_17[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n8" },
	{ 7,	3,	"n10" },
	{ 8,	3,	"n12" },
	{ 9,	3,	"n14" }
};
static const unsigned int asn_MAP_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_enum2value_17[] = {
	0,	/* n1(0) */
	7,	/* n10(7) */
	8,	/* n12(8) */
	9,	/* n14(9) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6	/* n8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_specs_17 = {
	asn_MAP_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_enum2value_17,	/* N => "tag"; sorted by N */
	10,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_17 = {
	"maxNumberSRS-ResourcesPerBWP-PerSlot-r16",
	"maxNumberSRS-ResourcesPerBWP-PerSlot-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_tags_17,
	sizeof(asn_DEF_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_tags_17)
		/sizeof(asn_DEF_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_tags_17[0]) - 1, /* 1 */
	asn_DEF_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_tags_17,	/* Same as above */
	sizeof(asn_DEF_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_tags_17)
		/sizeof(asn_DEF_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_value2enum_28[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n64" }
};
static const unsigned int asn_MAP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_enum2value_28[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	6,	/* n64(6) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_specs_28 = {
	asn_MAP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_enum2value_28,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_28 = {
	"maxNumberPeriodicSRS-PosResourcesPerBWP-r16",
	"maxNumberPeriodicSRS-PosResourcesPerBWP-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_28,
	sizeof(asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_28)
		/sizeof(asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_28[0]) - 1, /* 1 */
	asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_28,	/* Same as above */
	sizeof(asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_28)
		/sizeof(asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_tags_28[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_constr_28,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_specs_28	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_value2enum_36[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n8" },
	{ 7,	3,	"n10" },
	{ 8,	3,	"n12" },
	{ 9,	3,	"n14" }
};
static const unsigned int asn_MAP_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_enum2value_36[] = {
	0,	/* n1(0) */
	7,	/* n10(7) */
	8,	/* n12(8) */
	9,	/* n14(9) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6	/* n8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_specs_36 = {
	asn_MAP_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_value2enum_36,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_enum2value_36,	/* N => "tag"; sorted by N */
	10,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_tags_36[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_36 = {
	"maxNumberPeriodicSRS-PosResourcesPerBWP-PerSlot-r16",
	"maxNumberPeriodicSRS-PosResourcesPerBWP-PerSlot-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_tags_36,
	sizeof(asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_tags_36)
		/sizeof(asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_tags_36[0]) - 1, /* 1 */
	asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_tags_36,	/* Same as above */
	sizeof(asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_tags_36)
		/sizeof(asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_tags_36[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_constr_36,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_specs_36	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SRS_PosResources_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResources_r16, maxNumberSRS_PosResourceSetPerBWP_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberSRS_PosResourceSetPerBWP_r16_2,
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
		"maxNumberSRS-PosResourceSetPerBWP-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResources_r16, maxNumberSRS_PosResourcesPerBWP_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberSRS_PosResourcesPerBWP_r16_9,
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
		"maxNumberSRS-PosResourcesPerBWP-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResources_r16, maxNumberSRS_ResourcesPerBWP_PerSlot_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_17,
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
		"maxNumberSRS-ResourcesPerBWP-PerSlot-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResources_r16, maxNumberPeriodicSRS_PosResourcesPerBWP_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_28,
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
		"maxNumberPeriodicSRS-PosResourcesPerBWP-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRS_PosResources_r16, maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_36,
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
		"maxNumberPeriodicSRS-PosResourcesPerBWP-PerSlot-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_SRS_PosResources_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRS_PosResources_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberSRS-PosResourceSetPerBWP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberSRS-PosResourcesPerBWP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxNumberSRS-ResourcesPerBWP-PerSlot-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxNumberPeriodicSRS-PosResourcesPerBWP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* maxNumberPeriodicSRS-PosResourcesPerBWP-PerSlot-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SRS_PosResources_r16_specs_1 = {
	sizeof(struct SRS_PosResources_r16),
	offsetof(struct SRS_PosResources_r16, _asn_ctx),
	asn_MAP_SRS_PosResources_r16_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRS_PosResources_r16 = {
	"SRS-PosResources-r16",
	"SRS-PosResources-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SRS_PosResources_r16_tags_1,
	sizeof(asn_DEF_SRS_PosResources_r16_tags_1)
		/sizeof(asn_DEF_SRS_PosResources_r16_tags_1[0]), /* 1 */
	asn_DEF_SRS_PosResources_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRS_PosResources_r16_tags_1)
		/sizeof(asn_DEF_SRS_PosResources_r16_tags_1[0]), /* 1 */
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
	asn_MBR_SRS_PosResources_r16_1,
	5,	/* Elements count */
	&asn_SPC_SRS_PosResources_r16_specs_1	/* Additional specs */
};

