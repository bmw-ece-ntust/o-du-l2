/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "InitialUE-Identity.h"

static int
memb_ng_5G_S_TMSI_Part1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 39)) {
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
memb_randomValue_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 39)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ng_5G_S_TMSI_Part1_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	39	/* (SIZE(39..39)) */};
static asn_per_constraints_t asn_PER_memb_ng_5G_S_TMSI_Part1_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  39,  39 }	/* (SIZE(39..39)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_randomValue_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	39	/* (SIZE(39..39)) */};
static asn_per_constraints_t asn_PER_memb_randomValue_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  39,  39 }	/* (SIZE(39..39)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_InitialUE_Identity_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_InitialUE_Identity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_InitialUE_Identity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InitialUE_Identity, choice.ng_5G_S_TMSI_Part1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ng_5G_S_TMSI_Part1_constr_2, &asn_PER_memb_ng_5G_S_TMSI_Part1_constr_2,  memb_ng_5G_S_TMSI_Part1_constraint_1 },
		0, 0, /* No default value */
		"ng-5G-S-TMSI-Part1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitialUE_Identity, choice.randomValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_randomValue_constr_3, &asn_PER_memb_randomValue_constr_3,  memb_randomValue_constraint_1 },
		0, 0, /* No default value */
		"randomValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_InitialUE_Identity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ng-5G-S-TMSI-Part1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* randomValue */
};
asn_CHOICE_specifics_t asn_SPC_InitialUE_Identity_specs_1 = {
	sizeof(struct InitialUE_Identity),
	offsetof(struct InitialUE_Identity, _asn_ctx),
	offsetof(struct InitialUE_Identity, present),
	sizeof(((struct InitialUE_Identity *)0)->present),
	asn_MAP_InitialUE_Identity_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_InitialUE_Identity = {
	"InitialUE-Identity",
	"InitialUE-Identity",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_InitialUE_Identity_constr_1, &asn_PER_type_InitialUE_Identity_constr_1, CHOICE_constraint },
	asn_MBR_InitialUE_Identity_1,
	2,	/* Elements count */
	&asn_SPC_InitialUE_Identity_specs_1	/* Additional specs */
};

