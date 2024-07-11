/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "DRX-ConfigSecondaryGroup-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_subMilliSeconds_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 31L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_milliSeconds_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_subMilliSeconds_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  31 }	/* (1..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_drx_onDurationTimer_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_drx_InactivityTimer_r16_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_milliSeconds_value2enum_4[] = {
	{ 0,	3,	"ms1" },
	{ 1,	3,	"ms2" },
	{ 2,	3,	"ms3" },
	{ 3,	3,	"ms4" },
	{ 4,	3,	"ms5" },
	{ 5,	3,	"ms6" },
	{ 6,	3,	"ms8" },
	{ 7,	4,	"ms10" },
	{ 8,	4,	"ms20" },
	{ 9,	4,	"ms30" },
	{ 10,	4,	"ms40" },
	{ 11,	4,	"ms50" },
	{ 12,	4,	"ms60" },
	{ 13,	4,	"ms80" },
	{ 14,	5,	"ms100" },
	{ 15,	5,	"ms200" },
	{ 16,	5,	"ms300" },
	{ 17,	5,	"ms400" },
	{ 18,	5,	"ms500" },
	{ 19,	5,	"ms600" },
	{ 20,	5,	"ms800" },
	{ 21,	6,	"ms1000" },
	{ 22,	6,	"ms1200" },
	{ 23,	6,	"ms1600" },
	{ 24,	6,	"spare8" },
	{ 25,	6,	"spare7" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
};
static const unsigned int asn_MAP_milliSeconds_enum2value_4[] = {
	0,	/* ms1(0) */
	7,	/* ms10(7) */
	14,	/* ms100(14) */
	21,	/* ms1000(21) */
	22,	/* ms1200(22) */
	23,	/* ms1600(23) */
	1,	/* ms2(1) */
	8,	/* ms20(8) */
	15,	/* ms200(15) */
	2,	/* ms3(2) */
	9,	/* ms30(9) */
	16,	/* ms300(16) */
	3,	/* ms4(3) */
	10,	/* ms40(10) */
	17,	/* ms400(17) */
	4,	/* ms5(4) */
	11,	/* ms50(11) */
	18,	/* ms500(18) */
	5,	/* ms6(5) */
	12,	/* ms60(12) */
	19,	/* ms600(19) */
	6,	/* ms8(6) */
	13,	/* ms80(13) */
	20,	/* ms800(20) */
	31,	/* spare1(31) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24	/* spare8(24) */
};
static const asn_INTEGER_specifics_t asn_SPC_milliSeconds_specs_4 = {
	asn_MAP_milliSeconds_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_milliSeconds_enum2value_4,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_milliSeconds_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_milliSeconds_4 = {
	"milliSeconds",
	"milliSeconds",
	&asn_OP_NativeEnumerated,
	asn_DEF_milliSeconds_tags_4,
	sizeof(asn_DEF_milliSeconds_tags_4)
		/sizeof(asn_DEF_milliSeconds_tags_4[0]) - 1, /* 1 */
	asn_DEF_milliSeconds_tags_4,	/* Same as above */
	sizeof(asn_DEF_milliSeconds_tags_4)
		/sizeof(asn_DEF_milliSeconds_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_milliSeconds_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_milliSeconds_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_drx_onDurationTimer_r16_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_ConfigSecondaryGroup_r16__drx_onDurationTimer_r16, choice.subMilliSeconds),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_subMilliSeconds_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_subMilliSeconds_constraint_2
		},
		0, 0, /* No default value */
		"subMilliSeconds"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_ConfigSecondaryGroup_r16__drx_onDurationTimer_r16, choice.milliSeconds),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_milliSeconds_4,
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
		"milliSeconds"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_drx_onDurationTimer_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subMilliSeconds */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* milliSeconds */
};
static asn_CHOICE_specifics_t asn_SPC_drx_onDurationTimer_r16_specs_2 = {
	sizeof(struct DRX_ConfigSecondaryGroup_r16__drx_onDurationTimer_r16),
	offsetof(struct DRX_ConfigSecondaryGroup_r16__drx_onDurationTimer_r16, _asn_ctx),
	offsetof(struct DRX_ConfigSecondaryGroup_r16__drx_onDurationTimer_r16, present),
	sizeof(((struct DRX_ConfigSecondaryGroup_r16__drx_onDurationTimer_r16 *)0)->present),
	asn_MAP_drx_onDurationTimer_r16_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_onDurationTimer_r16_2 = {
	"drx-onDurationTimer-r16",
	"drx-onDurationTimer-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_drx_onDurationTimer_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_drx_onDurationTimer_r16_2,
	2,	/* Elements count */
	&asn_SPC_drx_onDurationTimer_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_drx_InactivityTimer_r16_value2enum_37[] = {
	{ 0,	3,	"ms0" },
	{ 1,	3,	"ms1" },
	{ 2,	3,	"ms2" },
	{ 3,	3,	"ms3" },
	{ 4,	3,	"ms4" },
	{ 5,	3,	"ms5" },
	{ 6,	3,	"ms6" },
	{ 7,	3,	"ms8" },
	{ 8,	4,	"ms10" },
	{ 9,	4,	"ms20" },
	{ 10,	4,	"ms30" },
	{ 11,	4,	"ms40" },
	{ 12,	4,	"ms50" },
	{ 13,	4,	"ms60" },
	{ 14,	4,	"ms80" },
	{ 15,	5,	"ms100" },
	{ 16,	5,	"ms200" },
	{ 17,	5,	"ms300" },
	{ 18,	5,	"ms500" },
	{ 19,	5,	"ms750" },
	{ 20,	6,	"ms1280" },
	{ 21,	6,	"ms1920" },
	{ 22,	6,	"ms2560" },
	{ 23,	6,	"spare9" },
	{ 24,	6,	"spare8" },
	{ 25,	6,	"spare7" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
};
static const unsigned int asn_MAP_drx_InactivityTimer_r16_enum2value_37[] = {
	0,	/* ms0(0) */
	1,	/* ms1(1) */
	8,	/* ms10(8) */
	15,	/* ms100(15) */
	20,	/* ms1280(20) */
	21,	/* ms1920(21) */
	2,	/* ms2(2) */
	9,	/* ms20(9) */
	16,	/* ms200(16) */
	22,	/* ms2560(22) */
	3,	/* ms3(3) */
	10,	/* ms30(10) */
	17,	/* ms300(17) */
	4,	/* ms4(4) */
	11,	/* ms40(11) */
	5,	/* ms5(5) */
	12,	/* ms50(12) */
	18,	/* ms500(18) */
	6,	/* ms6(6) */
	13,	/* ms60(13) */
	19,	/* ms750(19) */
	7,	/* ms8(7) */
	14,	/* ms80(14) */
	31,	/* spare1(31) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24,	/* spare8(24) */
	23	/* spare9(23) */
};
static const asn_INTEGER_specifics_t asn_SPC_drx_InactivityTimer_r16_specs_37 = {
	asn_MAP_drx_InactivityTimer_r16_value2enum_37,	/* "tag" => N; sorted by tag */
	asn_MAP_drx_InactivityTimer_r16_enum2value_37,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drx_InactivityTimer_r16_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drx_InactivityTimer_r16_37 = {
	"drx-InactivityTimer-r16",
	"drx-InactivityTimer-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_drx_InactivityTimer_r16_tags_37,
	sizeof(asn_DEF_drx_InactivityTimer_r16_tags_37)
		/sizeof(asn_DEF_drx_InactivityTimer_r16_tags_37[0]) - 1, /* 1 */
	asn_DEF_drx_InactivityTimer_r16_tags_37,	/* Same as above */
	sizeof(asn_DEF_drx_InactivityTimer_r16_tags_37)
		/sizeof(asn_DEF_drx_InactivityTimer_r16_tags_37[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_drx_InactivityTimer_r16_constr_37,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drx_InactivityTimer_r16_specs_37	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DRX_ConfigSecondaryGroup_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_ConfigSecondaryGroup_r16, drx_onDurationTimer_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_drx_onDurationTimer_r16_2,
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
		"drx-onDurationTimer-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRX_ConfigSecondaryGroup_r16, drx_InactivityTimer_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drx_InactivityTimer_r16_37,
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
		"drx-InactivityTimer-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_DRX_ConfigSecondaryGroup_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRX_ConfigSecondaryGroup_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drx-onDurationTimer-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* drx-InactivityTimer-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_DRX_ConfigSecondaryGroup_r16_specs_1 = {
	sizeof(struct DRX_ConfigSecondaryGroup_r16),
	offsetof(struct DRX_ConfigSecondaryGroup_r16, _asn_ctx),
	asn_MAP_DRX_ConfigSecondaryGroup_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRX_ConfigSecondaryGroup_r16 = {
	"DRX-ConfigSecondaryGroup-r16",
	"DRX-ConfigSecondaryGroup-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_DRX_ConfigSecondaryGroup_r16_tags_1,
	sizeof(asn_DEF_DRX_ConfigSecondaryGroup_r16_tags_1)
		/sizeof(asn_DEF_DRX_ConfigSecondaryGroup_r16_tags_1[0]), /* 1 */
	asn_DEF_DRX_ConfigSecondaryGroup_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRX_ConfigSecondaryGroup_r16_tags_1)
		/sizeof(asn_DEF_DRX_ConfigSecondaryGroup_r16_tags_1[0]), /* 1 */
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
	asn_MBR_DRX_ConfigSecondaryGroup_r16_1,
	2,	/* Elements count */
	&asn_SPC_DRX_ConfigSecondaryGroup_r16_specs_1	/* Additional specs */
};

