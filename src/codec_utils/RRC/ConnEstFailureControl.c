/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "ConnEstFailureControl.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_connEstFailOffset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_connEstFailCount_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_connEstFailOffsetValidity_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_connEstFailOffset_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_connEstFailCount_value2enum_2[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" }
};
static const unsigned int asn_MAP_connEstFailCount_enum2value_2[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3	/* n4(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_connEstFailCount_specs_2 = {
	asn_MAP_connEstFailCount_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_connEstFailCount_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_connEstFailCount_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_connEstFailCount_2 = {
	"connEstFailCount",
	"connEstFailCount",
	&asn_OP_NativeEnumerated,
	asn_DEF_connEstFailCount_tags_2,
	sizeof(asn_DEF_connEstFailCount_tags_2)
		/sizeof(asn_DEF_connEstFailCount_tags_2[0]) - 1, /* 1 */
	asn_DEF_connEstFailCount_tags_2,	/* Same as above */
	sizeof(asn_DEF_connEstFailCount_tags_2)
		/sizeof(asn_DEF_connEstFailCount_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_connEstFailCount_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_connEstFailCount_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_connEstFailOffsetValidity_value2enum_7[] = {
	{ 0,	3,	"s30" },
	{ 1,	3,	"s60" },
	{ 2,	4,	"s120" },
	{ 3,	4,	"s240" },
	{ 4,	4,	"s300" },
	{ 5,	4,	"s420" },
	{ 6,	4,	"s600" },
	{ 7,	4,	"s900" }
};
static const unsigned int asn_MAP_connEstFailOffsetValidity_enum2value_7[] = {
	2,	/* s120(2) */
	3,	/* s240(3) */
	0,	/* s30(0) */
	4,	/* s300(4) */
	5,	/* s420(5) */
	1,	/* s60(1) */
	6,	/* s600(6) */
	7	/* s900(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_connEstFailOffsetValidity_specs_7 = {
	asn_MAP_connEstFailOffsetValidity_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_connEstFailOffsetValidity_enum2value_7,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_connEstFailOffsetValidity_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_connEstFailOffsetValidity_7 = {
	"connEstFailOffsetValidity",
	"connEstFailOffsetValidity",
	&asn_OP_NativeEnumerated,
	asn_DEF_connEstFailOffsetValidity_tags_7,
	sizeof(asn_DEF_connEstFailOffsetValidity_tags_7)
		/sizeof(asn_DEF_connEstFailOffsetValidity_tags_7[0]) - 1, /* 1 */
	asn_DEF_connEstFailOffsetValidity_tags_7,	/* Same as above */
	sizeof(asn_DEF_connEstFailOffsetValidity_tags_7)
		/sizeof(asn_DEF_connEstFailOffsetValidity_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_connEstFailOffsetValidity_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_connEstFailOffsetValidity_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ConnEstFailureControl_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailureControl, connEstFailCount),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_connEstFailCount_2,
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
		"connEstFailCount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailureControl, connEstFailOffsetValidity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_connEstFailOffsetValidity_7,
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
		"connEstFailOffsetValidity"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailureControl, connEstFailOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_connEstFailOffset_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_connEstFailOffset_constraint_1
		},
		0, 0, /* No default value */
		"connEstFailOffset"
		},
};
static const int asn_MAP_ConnEstFailureControl_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ConnEstFailureControl_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ConnEstFailureControl_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* connEstFailCount */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* connEstFailOffsetValidity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* connEstFailOffset */
};
asn_SEQUENCE_specifics_t asn_SPC_ConnEstFailureControl_specs_1 = {
	sizeof(struct ConnEstFailureControl),
	offsetof(struct ConnEstFailureControl, _asn_ctx),
	asn_MAP_ConnEstFailureControl_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ConnEstFailureControl_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ConnEstFailureControl = {
	"ConnEstFailureControl",
	"ConnEstFailureControl",
	&asn_OP_SEQUENCE,
	asn_DEF_ConnEstFailureControl_tags_1,
	sizeof(asn_DEF_ConnEstFailureControl_tags_1)
		/sizeof(asn_DEF_ConnEstFailureControl_tags_1[0]), /* 1 */
	asn_DEF_ConnEstFailureControl_tags_1,	/* Same as above */
	sizeof(asn_DEF_ConnEstFailureControl_tags_1)
		/sizeof(asn_DEF_ConnEstFailureControl_tags_1[0]), /* 1 */
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
	asn_MBR_ConnEstFailureControl_1,
	3,	/* Elements count */
	&asn_SPC_ConnEstFailureControl_specs_1	/* Additional specs */
};

