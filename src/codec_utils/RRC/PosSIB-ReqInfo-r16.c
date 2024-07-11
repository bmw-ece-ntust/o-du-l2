/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "PosSIB-ReqInfo-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_posSibType_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  6,  6,  0,  36 }	/* (0..36,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_posSibType_r16_value2enum_4[] = {
	{ 0,	13,	"posSibType1-1" },
	{ 1,	13,	"posSibType1-2" },
	{ 2,	13,	"posSibType1-3" },
	{ 3,	13,	"posSibType1-4" },
	{ 4,	13,	"posSibType1-5" },
	{ 5,	13,	"posSibType1-6" },
	{ 6,	13,	"posSibType1-7" },
	{ 7,	13,	"posSibType1-8" },
	{ 8,	13,	"posSibType2-1" },
	{ 9,	13,	"posSibType2-2" },
	{ 10,	13,	"posSibType2-3" },
	{ 11,	13,	"posSibType2-4" },
	{ 12,	13,	"posSibType2-5" },
	{ 13,	13,	"posSibType2-6" },
	{ 14,	13,	"posSibType2-7" },
	{ 15,	13,	"posSibType2-8" },
	{ 16,	13,	"posSibType2-9" },
	{ 17,	14,	"posSibType2-10" },
	{ 18,	14,	"posSibType2-11" },
	{ 19,	14,	"posSibType2-12" },
	{ 20,	14,	"posSibType2-13" },
	{ 21,	14,	"posSibType2-14" },
	{ 22,	14,	"posSibType2-15" },
	{ 23,	14,	"posSibType2-16" },
	{ 24,	14,	"posSibType2-17" },
	{ 25,	14,	"posSibType2-18" },
	{ 26,	14,	"posSibType2-19" },
	{ 27,	14,	"posSibType2-20" },
	{ 28,	14,	"posSibType2-21" },
	{ 29,	14,	"posSibType2-22" },
	{ 30,	14,	"posSibType2-23" },
	{ 31,	13,	"posSibType3-1" },
	{ 32,	13,	"posSibType4-1" },
	{ 33,	13,	"posSibType5-1" },
	{ 34,	13,	"posSibType6-1" },
	{ 35,	13,	"posSibType6-2" },
	{ 36,	13,	"posSibType6-3" },
	{ 37,	19,	"posSibType1-9-v1710" },
	{ 38,	20,	"posSibType1-10-v1710" },
	{ 39,	20,	"posSibType2-24-v1710" },
	{ 40,	20,	"posSibType2-25-v1710" },
	{ 41,	19,	"posSibType6-4-v1710" },
	{ 42,	19,	"posSibType6-5-v1710" },
	{ 43,	19,	"posSibType6-6-v1710" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_posSibType_r16_enum2value_4[] = {
	0,	/* posSibType1-1(0) */
	38,	/* posSibType1-10-v1710(38) */
	1,	/* posSibType1-2(1) */
	2,	/* posSibType1-3(2) */
	3,	/* posSibType1-4(3) */
	4,	/* posSibType1-5(4) */
	5,	/* posSibType1-6(5) */
	6,	/* posSibType1-7(6) */
	7,	/* posSibType1-8(7) */
	37,	/* posSibType1-9-v1710(37) */
	8,	/* posSibType2-1(8) */
	17,	/* posSibType2-10(17) */
	18,	/* posSibType2-11(18) */
	19,	/* posSibType2-12(19) */
	20,	/* posSibType2-13(20) */
	21,	/* posSibType2-14(21) */
	22,	/* posSibType2-15(22) */
	23,	/* posSibType2-16(23) */
	24,	/* posSibType2-17(24) */
	25,	/* posSibType2-18(25) */
	26,	/* posSibType2-19(26) */
	9,	/* posSibType2-2(9) */
	27,	/* posSibType2-20(27) */
	28,	/* posSibType2-21(28) */
	29,	/* posSibType2-22(29) */
	30,	/* posSibType2-23(30) */
	39,	/* posSibType2-24-v1710(39) */
	40,	/* posSibType2-25-v1710(40) */
	10,	/* posSibType2-3(10) */
	11,	/* posSibType2-4(11) */
	12,	/* posSibType2-5(12) */
	13,	/* posSibType2-6(13) */
	14,	/* posSibType2-7(14) */
	15,	/* posSibType2-8(15) */
	16,	/* posSibType2-9(16) */
	31,	/* posSibType3-1(31) */
	32,	/* posSibType4-1(32) */
	33,	/* posSibType5-1(33) */
	34,	/* posSibType6-1(34) */
	35,	/* posSibType6-2(35) */
	36,	/* posSibType6-3(36) */
	41,	/* posSibType6-4-v1710(41) */
	42,	/* posSibType6-5-v1710(42) */
	43	/* posSibType6-6-v1710(43) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_posSibType_r16_specs_4 = {
	asn_MAP_posSibType_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_posSibType_r16_enum2value_4,	/* N => "tag"; sorted by N */
	44,	/* Number of elements in the maps */
	38,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_posSibType_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_posSibType_r16_4 = {
	"posSibType-r16",
	"posSibType-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_posSibType_r16_tags_4,
	sizeof(asn_DEF_posSibType_r16_tags_4)
		/sizeof(asn_DEF_posSibType_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_posSibType_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_posSibType_r16_tags_4)
		/sizeof(asn_DEF_posSibType_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_posSibType_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_posSibType_r16_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PosSIB_ReqInfo_r16_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PosSIB_ReqInfo_r16, gnss_id_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSS_ID_r16,
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
		"gnss-id-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct PosSIB_ReqInfo_r16, sbas_id_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBAS_ID_r16,
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
		"sbas-id-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosSIB_ReqInfo_r16, posSibType_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_posSibType_r16_4,
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
		"posSibType-r16"
		},
};
static const int asn_MAP_PosSIB_ReqInfo_r16_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_PosSIB_ReqInfo_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PosSIB_ReqInfo_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-id-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sbas-id-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* posSibType-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_PosSIB_ReqInfo_r16_specs_1 = {
	sizeof(struct PosSIB_ReqInfo_r16),
	offsetof(struct PosSIB_ReqInfo_r16, _asn_ctx),
	asn_MAP_PosSIB_ReqInfo_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PosSIB_ReqInfo_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PosSIB_ReqInfo_r16 = {
	"PosSIB-ReqInfo-r16",
	"PosSIB-ReqInfo-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_PosSIB_ReqInfo_r16_tags_1,
	sizeof(asn_DEF_PosSIB_ReqInfo_r16_tags_1)
		/sizeof(asn_DEF_PosSIB_ReqInfo_r16_tags_1[0]), /* 1 */
	asn_DEF_PosSIB_ReqInfo_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_PosSIB_ReqInfo_r16_tags_1)
		/sizeof(asn_DEF_PosSIB_ReqInfo_r16_tags_1[0]), /* 1 */
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
	asn_MBR_PosSIB_ReqInfo_r16_1,
	3,	/* Elements count */
	&asn_SPC_PosSIB_ReqInfo_r16_specs_1	/* Additional specs */
};

