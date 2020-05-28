/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "DRB-ToAddMod.h"

#include "PDCP-Config.h"
#include "SDAP-Config.h"
static int
memb_eps_BearerIdentity_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_memb_eps_BearerIdentity_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_eps_BearerIdentity_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cnAssociation_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cnAssociation_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_reestablishPDCP_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_reestablishPDCP_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_recoverPDCP_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_recoverPDCP_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cnAssociation_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_ToAddMod__cnAssociation, choice.eps_BearerIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_eps_BearerIdentity_constr_3, &asn_PER_memb_eps_BearerIdentity_constr_3,  memb_eps_BearerIdentity_constraint_2 },
		0, 0, /* No default value */
		"eps-BearerIdentity"
		},
	{ ATF_POINTER, 0, offsetof(struct DRB_ToAddMod__cnAssociation, choice.sdap_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SDAP_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sdap-Config"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cnAssociation_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eps-BearerIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sdap-Config */
};
static asn_CHOICE_specifics_t asn_SPC_cnAssociation_specs_2 = {
	sizeof(struct DRB_ToAddMod__cnAssociation),
	offsetof(struct DRB_ToAddMod__cnAssociation, _asn_ctx),
	offsetof(struct DRB_ToAddMod__cnAssociation, present),
	sizeof(((struct DRB_ToAddMod__cnAssociation *)0)->present),
	asn_MAP_cnAssociation_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cnAssociation_2 = {
	"cnAssociation",
	"cnAssociation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_cnAssociation_constr_2, &asn_PER_type_cnAssociation_constr_2, CHOICE_constraint },
	asn_MBR_cnAssociation_2,
	2,	/* Elements count */
	&asn_SPC_cnAssociation_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_reestablishPDCP_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_reestablishPDCP_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_reestablishPDCP_specs_6 = {
	asn_MAP_reestablishPDCP_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_reestablishPDCP_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reestablishPDCP_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reestablishPDCP_6 = {
	"reestablishPDCP",
	"reestablishPDCP",
	&asn_OP_NativeEnumerated,
	asn_DEF_reestablishPDCP_tags_6,
	sizeof(asn_DEF_reestablishPDCP_tags_6)
		/sizeof(asn_DEF_reestablishPDCP_tags_6[0]) - 1, /* 1 */
	asn_DEF_reestablishPDCP_tags_6,	/* Same as above */
	sizeof(asn_DEF_reestablishPDCP_tags_6)
		/sizeof(asn_DEF_reestablishPDCP_tags_6[0]), /* 2 */
	{ &asn_OER_type_reestablishPDCP_constr_6, &asn_PER_type_reestablishPDCP_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reestablishPDCP_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_recoverPDCP_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_recoverPDCP_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_recoverPDCP_specs_8 = {
	asn_MAP_recoverPDCP_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_recoverPDCP_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_recoverPDCP_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_recoverPDCP_8 = {
	"recoverPDCP",
	"recoverPDCP",
	&asn_OP_NativeEnumerated,
	asn_DEF_recoverPDCP_tags_8,
	sizeof(asn_DEF_recoverPDCP_tags_8)
		/sizeof(asn_DEF_recoverPDCP_tags_8[0]) - 1, /* 1 */
	asn_DEF_recoverPDCP_tags_8,	/* Same as above */
	sizeof(asn_DEF_recoverPDCP_tags_8)
		/sizeof(asn_DEF_recoverPDCP_tags_8[0]), /* 2 */
	{ &asn_OER_type_recoverPDCP_constr_8, &asn_PER_type_recoverPDCP_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_recoverPDCP_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DRB_ToAddMod_1[] = {
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod, cnAssociation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cnAssociation_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cnAssociation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_ToAddMod, drb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-Identity"
		},
	{ ATF_POINTER, 3, offsetof(struct DRB_ToAddMod, reestablishPDCP),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reestablishPDCP_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reestablishPDCP"
		},
	{ ATF_POINTER, 2, offsetof(struct DRB_ToAddMod, recoverPDCP),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_recoverPDCP_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"recoverPDCP"
		},
	{ ATF_POINTER, 1, offsetof(struct DRB_ToAddMod, pdcp_Config),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcp-Config"
		},
};
static const int asn_MAP_DRB_ToAddMod_oms_1[] = { 0, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_DRB_ToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_ToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cnAssociation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reestablishPDCP */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* recoverPDCP */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* pdcp-Config */
};
asn_SEQUENCE_specifics_t asn_SPC_DRB_ToAddMod_specs_1 = {
	sizeof(struct DRB_ToAddMod),
	offsetof(struct DRB_ToAddMod, _asn_ctx),
	asn_MAP_DRB_ToAddMod_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_DRB_ToAddMod_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_ToAddMod = {
	"DRB-ToAddMod",
	"DRB-ToAddMod",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_ToAddMod_tags_1,
	sizeof(asn_DEF_DRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_tags_1[0]), /* 1 */
	asn_DEF_DRB_ToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_DRB_ToAddMod_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_ToAddMod_1,
	5,	/* Elements count */
	&asn_SPC_DRB_ToAddMod_specs_1	/* Additional specs */
};

