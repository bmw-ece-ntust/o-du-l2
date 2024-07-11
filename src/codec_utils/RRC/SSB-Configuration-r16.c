/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "SSB-Configuration-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_sfn_Offset_r16_constraint_16(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_integerSubframeOffset_r16_constraint_16(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 9L)) {
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
memb_sfn_SSB_Offset_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
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
memb_ss_PBCH_BlockPower_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60L && value <= 50L)) {
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
static asn_per_constraints_t asn_PER_type_halfFrameIndex_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ssb_Periodicity_r16_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_sfn_Offset_r16_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_integerSubframeOffset_r16_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_sfn_SSB_Offset_r16_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ss_PBCH_BlockPower_r16_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -60,  50 }	/* (-60..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_halfFrameIndex_r16_value2enum_3[] = {
	{ 0,	4,	"zero" },
	{ 1,	3,	"one" }
};
static const unsigned int asn_MAP_halfFrameIndex_r16_enum2value_3[] = {
	1,	/* one(1) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_halfFrameIndex_r16_specs_3 = {
	asn_MAP_halfFrameIndex_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_halfFrameIndex_r16_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_halfFrameIndex_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_halfFrameIndex_r16_3 = {
	"halfFrameIndex-r16",
	"halfFrameIndex-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_halfFrameIndex_r16_tags_3,
	sizeof(asn_DEF_halfFrameIndex_r16_tags_3)
		/sizeof(asn_DEF_halfFrameIndex_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_halfFrameIndex_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_halfFrameIndex_r16_tags_3)
		/sizeof(asn_DEF_halfFrameIndex_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_halfFrameIndex_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_halfFrameIndex_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ssb_Periodicity_r16_value2enum_7[] = {
	{ 0,	3,	"ms5" },
	{ 1,	4,	"ms10" },
	{ 2,	4,	"ms20" },
	{ 3,	4,	"ms40" },
	{ 4,	4,	"ms80" },
	{ 5,	5,	"ms160" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_ssb_Periodicity_r16_enum2value_7[] = {
	1,	/* ms10(1) */
	5,	/* ms160(5) */
	2,	/* ms20(2) */
	3,	/* ms40(3) */
	0,	/* ms5(0) */
	4,	/* ms80(4) */
	7,	/* spare1(7) */
	6	/* spare2(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_ssb_Periodicity_r16_specs_7 = {
	asn_MAP_ssb_Periodicity_r16_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_ssb_Periodicity_r16_enum2value_7,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ssb_Periodicity_r16_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssb_Periodicity_r16_7 = {
	"ssb-Periodicity-r16",
	"ssb-Periodicity-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_ssb_Periodicity_r16_tags_7,
	sizeof(asn_DEF_ssb_Periodicity_r16_tags_7)
		/sizeof(asn_DEF_ssb_Periodicity_r16_tags_7[0]) - 1, /* 1 */
	asn_DEF_ssb_Periodicity_r16_tags_7,	/* Same as above */
	sizeof(asn_DEF_ssb_Periodicity_r16_tags_7)
		/sizeof(asn_DEF_ssb_Periodicity_r16_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ssb_Periodicity_r16_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ssb_Periodicity_r16_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sfn0_Offset_r16_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_Configuration_r16__sfn0_Offset_r16, sfn_Offset_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_sfn_Offset_r16_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_sfn_Offset_r16_constraint_16
		},
		0, 0, /* No default value */
		"sfn-Offset-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SSB_Configuration_r16__sfn0_Offset_r16, integerSubframeOffset_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_integerSubframeOffset_r16_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_integerSubframeOffset_r16_constraint_16
		},
		0, 0, /* No default value */
		"integerSubframeOffset-r16"
		},
};
static const int asn_MAP_sfn0_Offset_r16_oms_16[] = { 1 };
static const ber_tlv_tag_t asn_DEF_sfn0_Offset_r16_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_sfn0_Offset_r16_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sfn-Offset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* integerSubframeOffset-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_sfn0_Offset_r16_specs_16 = {
	sizeof(struct SSB_Configuration_r16__sfn0_Offset_r16),
	offsetof(struct SSB_Configuration_r16__sfn0_Offset_r16, _asn_ctx),
	asn_MAP_sfn0_Offset_r16_tag2el_16,
	2,	/* Count of tags in the map */
	asn_MAP_sfn0_Offset_r16_oms_16,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sfn0_Offset_r16_16 = {
	"sfn0-Offset-r16",
	"sfn0-Offset-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_sfn0_Offset_r16_tags_16,
	sizeof(asn_DEF_sfn0_Offset_r16_tags_16)
		/sizeof(asn_DEF_sfn0_Offset_r16_tags_16[0]) - 1, /* 1 */
	asn_DEF_sfn0_Offset_r16_tags_16,	/* Same as above */
	sizeof(asn_DEF_sfn0_Offset_r16_tags_16)
		/sizeof(asn_DEF_sfn0_Offset_r16_tags_16[0]), /* 2 */
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
	asn_MBR_sfn0_Offset_r16_16,
	2,	/* Elements count */
	&asn_SPC_sfn0_Offset_r16_specs_16	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SSB_Configuration_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_Configuration_r16, ssb_Freq_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
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
		"ssb-Freq-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_Configuration_r16, halfFrameIndex_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_halfFrameIndex_r16_3,
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
		"halfFrameIndex-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_Configuration_r16, ssbSubcarrierSpacing_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubcarrierSpacing,
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
		"ssbSubcarrierSpacing-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct SSB_Configuration_r16, ssb_Periodicity_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ssb_Periodicity_r16_7,
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
		"ssb-Periodicity-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SSB_Configuration_r16, sfn0_Offset_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_sfn0_Offset_r16_16,
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
		"sfn0-Offset-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_Configuration_r16, sfn_SSB_Offset_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_sfn_SSB_Offset_r16_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_sfn_SSB_Offset_r16_constraint_1
		},
		0, 0, /* No default value */
		"sfn-SSB-Offset-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SSB_Configuration_r16, ss_PBCH_BlockPower_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ss_PBCH_BlockPower_r16_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_ss_PBCH_BlockPower_r16_constraint_1
		},
		0, 0, /* No default value */
		"ss-PBCH-BlockPower-r16"
		},
};
static const int asn_MAP_SSB_Configuration_r16_oms_1[] = { 3, 4, 6 };
static const ber_tlv_tag_t asn_DEF_SSB_Configuration_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SSB_Configuration_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-Freq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* halfFrameIndex-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ssbSubcarrierSpacing-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ssb-Periodicity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sfn0-Offset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sfn-SSB-Offset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ss-PBCH-BlockPower-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SSB_Configuration_r16_specs_1 = {
	sizeof(struct SSB_Configuration_r16),
	offsetof(struct SSB_Configuration_r16, _asn_ctx),
	asn_MAP_SSB_Configuration_r16_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SSB_Configuration_r16_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SSB_Configuration_r16 = {
	"SSB-Configuration-r16",
	"SSB-Configuration-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SSB_Configuration_r16_tags_1,
	sizeof(asn_DEF_SSB_Configuration_r16_tags_1)
		/sizeof(asn_DEF_SSB_Configuration_r16_tags_1[0]), /* 1 */
	asn_DEF_SSB_Configuration_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SSB_Configuration_r16_tags_1)
		/sizeof(asn_DEF_SSB_Configuration_r16_tags_1[0]), /* 1 */
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
	asn_MBR_SSB_Configuration_r16_1,
	7,	/* Elements count */
	&asn_SPC_SSB_Configuration_r16_specs_1	/* Additional specs */
};

