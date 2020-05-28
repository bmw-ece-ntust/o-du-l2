/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "PortIndexFor8Ranks.h"

static int
memb_rank2_8_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rank3_8_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 3)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rank4_8_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rank5_8_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 5)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rank6_8_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 6)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rank7_8_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 7)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rank8_8_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rank2_4_constraint_18(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rank3_4_constraint_18(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 3)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rank4_4_constraint_18(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_rank2_2_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_rank2_8_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_type_rank2_8_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rank3_8_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_type_rank3_8_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rank4_8_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	4	/* (SIZE(4..4)) */};
static asn_per_constraints_t asn_PER_type_rank4_8_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rank5_8_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	5	/* (SIZE(5..5)) */};
static asn_per_constraints_t asn_PER_type_rank5_8_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rank6_8_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	6	/* (SIZE(6..6)) */};
static asn_per_constraints_t asn_PER_type_rank6_8_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  6,  6 }	/* (SIZE(6..6)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rank7_8_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	7	/* (SIZE(7..7)) */};
static asn_per_constraints_t asn_PER_type_rank7_8_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  7,  7 }	/* (SIZE(7..7)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rank8_8_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_type_rank8_8_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rank2_8_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_rank2_8_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rank3_8_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_memb_rank3_8_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rank4_8_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	4	/* (SIZE(4..4)) */};
static asn_per_constraints_t asn_PER_memb_rank4_8_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rank5_8_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	5	/* (SIZE(5..5)) */};
static asn_per_constraints_t asn_PER_memb_rank5_8_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rank6_8_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	6	/* (SIZE(6..6)) */};
static asn_per_constraints_t asn_PER_memb_rank6_8_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  6,  6 }	/* (SIZE(6..6)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rank7_8_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	7	/* (SIZE(7..7)) */};
static asn_per_constraints_t asn_PER_memb_rank7_8_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  7,  7 }	/* (SIZE(7..7)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rank8_8_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_rank8_8_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rank2_4_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_type_rank2_4_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rank3_4_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_type_rank3_4_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rank4_4_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	4	/* (SIZE(4..4)) */};
static asn_per_constraints_t asn_PER_type_rank4_4_constr_24 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rank2_4_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_rank2_4_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rank3_4_constr_22 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_memb_rank3_4_constr_22 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rank4_4_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	4	/* (SIZE(4..4)) */};
static asn_per_constraints_t asn_PER_memb_rank4_4_constr_24 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_rank2_2_constr_28 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_type_rank2_2_constr_28 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rank2_2_constr_28 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_rank2_2_constr_28 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_PortIndexFor8Ranks_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PortIndexFor8Ranks_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_rank2_8_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PortIndex8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rank2_8_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rank2_8_specs_4 = {
	sizeof(struct PortIndexFor8Ranks__portIndex8__rank2_8),
	offsetof(struct PortIndexFor8Ranks__portIndex8__rank2_8, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rank2_8_4 = {
	"rank2-8",
	"rank2-8",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rank2_8_tags_4,
	sizeof(asn_DEF_rank2_8_tags_4)
		/sizeof(asn_DEF_rank2_8_tags_4[0]) - 1, /* 1 */
	asn_DEF_rank2_8_tags_4,	/* Same as above */
	sizeof(asn_DEF_rank2_8_tags_4)
		/sizeof(asn_DEF_rank2_8_tags_4[0]), /* 2 */
	{ &asn_OER_type_rank2_8_constr_4, &asn_PER_type_rank2_8_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_rank2_8_4,
	1,	/* Single element */
	&asn_SPC_rank2_8_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rank3_8_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PortIndex8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rank3_8_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rank3_8_specs_6 = {
	sizeof(struct PortIndexFor8Ranks__portIndex8__rank3_8),
	offsetof(struct PortIndexFor8Ranks__portIndex8__rank3_8, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rank3_8_6 = {
	"rank3-8",
	"rank3-8",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rank3_8_tags_6,
	sizeof(asn_DEF_rank3_8_tags_6)
		/sizeof(asn_DEF_rank3_8_tags_6[0]) - 1, /* 1 */
	asn_DEF_rank3_8_tags_6,	/* Same as above */
	sizeof(asn_DEF_rank3_8_tags_6)
		/sizeof(asn_DEF_rank3_8_tags_6[0]), /* 2 */
	{ &asn_OER_type_rank3_8_constr_6, &asn_PER_type_rank3_8_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_rank3_8_6,
	1,	/* Single element */
	&asn_SPC_rank3_8_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rank4_8_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PortIndex8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rank4_8_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rank4_8_specs_8 = {
	sizeof(struct PortIndexFor8Ranks__portIndex8__rank4_8),
	offsetof(struct PortIndexFor8Ranks__portIndex8__rank4_8, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rank4_8_8 = {
	"rank4-8",
	"rank4-8",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rank4_8_tags_8,
	sizeof(asn_DEF_rank4_8_tags_8)
		/sizeof(asn_DEF_rank4_8_tags_8[0]) - 1, /* 1 */
	asn_DEF_rank4_8_tags_8,	/* Same as above */
	sizeof(asn_DEF_rank4_8_tags_8)
		/sizeof(asn_DEF_rank4_8_tags_8[0]), /* 2 */
	{ &asn_OER_type_rank4_8_constr_8, &asn_PER_type_rank4_8_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_rank4_8_8,
	1,	/* Single element */
	&asn_SPC_rank4_8_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rank5_8_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PortIndex8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rank5_8_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rank5_8_specs_10 = {
	sizeof(struct PortIndexFor8Ranks__portIndex8__rank5_8),
	offsetof(struct PortIndexFor8Ranks__portIndex8__rank5_8, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rank5_8_10 = {
	"rank5-8",
	"rank5-8",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rank5_8_tags_10,
	sizeof(asn_DEF_rank5_8_tags_10)
		/sizeof(asn_DEF_rank5_8_tags_10[0]) - 1, /* 1 */
	asn_DEF_rank5_8_tags_10,	/* Same as above */
	sizeof(asn_DEF_rank5_8_tags_10)
		/sizeof(asn_DEF_rank5_8_tags_10[0]), /* 2 */
	{ &asn_OER_type_rank5_8_constr_10, &asn_PER_type_rank5_8_constr_10, SEQUENCE_OF_constraint },
	asn_MBR_rank5_8_10,
	1,	/* Single element */
	&asn_SPC_rank5_8_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rank6_8_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PortIndex8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rank6_8_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rank6_8_specs_12 = {
	sizeof(struct PortIndexFor8Ranks__portIndex8__rank6_8),
	offsetof(struct PortIndexFor8Ranks__portIndex8__rank6_8, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rank6_8_12 = {
	"rank6-8",
	"rank6-8",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rank6_8_tags_12,
	sizeof(asn_DEF_rank6_8_tags_12)
		/sizeof(asn_DEF_rank6_8_tags_12[0]) - 1, /* 1 */
	asn_DEF_rank6_8_tags_12,	/* Same as above */
	sizeof(asn_DEF_rank6_8_tags_12)
		/sizeof(asn_DEF_rank6_8_tags_12[0]), /* 2 */
	{ &asn_OER_type_rank6_8_constr_12, &asn_PER_type_rank6_8_constr_12, SEQUENCE_OF_constraint },
	asn_MBR_rank6_8_12,
	1,	/* Single element */
	&asn_SPC_rank6_8_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rank7_8_14[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PortIndex8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rank7_8_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rank7_8_specs_14 = {
	sizeof(struct PortIndexFor8Ranks__portIndex8__rank7_8),
	offsetof(struct PortIndexFor8Ranks__portIndex8__rank7_8, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rank7_8_14 = {
	"rank7-8",
	"rank7-8",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rank7_8_tags_14,
	sizeof(asn_DEF_rank7_8_tags_14)
		/sizeof(asn_DEF_rank7_8_tags_14[0]) - 1, /* 1 */
	asn_DEF_rank7_8_tags_14,	/* Same as above */
	sizeof(asn_DEF_rank7_8_tags_14)
		/sizeof(asn_DEF_rank7_8_tags_14[0]), /* 2 */
	{ &asn_OER_type_rank7_8_constr_14, &asn_PER_type_rank7_8_constr_14, SEQUENCE_OF_constraint },
	asn_MBR_rank7_8_14,
	1,	/* Single element */
	&asn_SPC_rank7_8_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rank8_8_16[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PortIndex8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rank8_8_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rank8_8_specs_16 = {
	sizeof(struct PortIndexFor8Ranks__portIndex8__rank8_8),
	offsetof(struct PortIndexFor8Ranks__portIndex8__rank8_8, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rank8_8_16 = {
	"rank8-8",
	"rank8-8",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rank8_8_tags_16,
	sizeof(asn_DEF_rank8_8_tags_16)
		/sizeof(asn_DEF_rank8_8_tags_16[0]) - 1, /* 1 */
	asn_DEF_rank8_8_tags_16,	/* Same as above */
	sizeof(asn_DEF_rank8_8_tags_16)
		/sizeof(asn_DEF_rank8_8_tags_16[0]), /* 2 */
	{ &asn_OER_type_rank8_8_constr_16, &asn_PER_type_rank8_8_constr_16, SEQUENCE_OF_constraint },
	asn_MBR_rank8_8_16,
	1,	/* Single element */
	&asn_SPC_rank8_8_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_portIndex8_2[] = {
	{ ATF_POINTER, 8, offsetof(struct PortIndexFor8Ranks__portIndex8, rank1_8),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PortIndex8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rank1-8"
		},
	{ ATF_POINTER, 7, offsetof(struct PortIndexFor8Ranks__portIndex8, rank2_8),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_rank2_8_4,
		0,
		{ &asn_OER_memb_rank2_8_constr_4, &asn_PER_memb_rank2_8_constr_4,  memb_rank2_8_constraint_2 },
		0, 0, /* No default value */
		"rank2-8"
		},
	{ ATF_POINTER, 6, offsetof(struct PortIndexFor8Ranks__portIndex8, rank3_8),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_rank3_8_6,
		0,
		{ &asn_OER_memb_rank3_8_constr_6, &asn_PER_memb_rank3_8_constr_6,  memb_rank3_8_constraint_2 },
		0, 0, /* No default value */
		"rank3-8"
		},
	{ ATF_POINTER, 5, offsetof(struct PortIndexFor8Ranks__portIndex8, rank4_8),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_rank4_8_8,
		0,
		{ &asn_OER_memb_rank4_8_constr_8, &asn_PER_memb_rank4_8_constr_8,  memb_rank4_8_constraint_2 },
		0, 0, /* No default value */
		"rank4-8"
		},
	{ ATF_POINTER, 4, offsetof(struct PortIndexFor8Ranks__portIndex8, rank5_8),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_rank5_8_10,
		0,
		{ &asn_OER_memb_rank5_8_constr_10, &asn_PER_memb_rank5_8_constr_10,  memb_rank5_8_constraint_2 },
		0, 0, /* No default value */
		"rank5-8"
		},
	{ ATF_POINTER, 3, offsetof(struct PortIndexFor8Ranks__portIndex8, rank6_8),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_rank6_8_12,
		0,
		{ &asn_OER_memb_rank6_8_constr_12, &asn_PER_memb_rank6_8_constr_12,  memb_rank6_8_constraint_2 },
		0, 0, /* No default value */
		"rank6-8"
		},
	{ ATF_POINTER, 2, offsetof(struct PortIndexFor8Ranks__portIndex8, rank7_8),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_rank7_8_14,
		0,
		{ &asn_OER_memb_rank7_8_constr_14, &asn_PER_memb_rank7_8_constr_14,  memb_rank7_8_constraint_2 },
		0, 0, /* No default value */
		"rank7-8"
		},
	{ ATF_POINTER, 1, offsetof(struct PortIndexFor8Ranks__portIndex8, rank8_8),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_rank8_8_16,
		0,
		{ &asn_OER_memb_rank8_8_constr_16, &asn_PER_memb_rank8_8_constr_16,  memb_rank8_8_constraint_2 },
		0, 0, /* No default value */
		"rank8-8"
		},
};
static const int asn_MAP_portIndex8_oms_2[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_portIndex8_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_portIndex8_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rank1-8 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rank2-8 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rank3-8 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rank4-8 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rank5-8 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* rank6-8 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rank7-8 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* rank8-8 */
};
static asn_SEQUENCE_specifics_t asn_SPC_portIndex8_specs_2 = {
	sizeof(struct PortIndexFor8Ranks__portIndex8),
	offsetof(struct PortIndexFor8Ranks__portIndex8, _asn_ctx),
	asn_MAP_portIndex8_tag2el_2,
	8,	/* Count of tags in the map */
	asn_MAP_portIndex8_oms_2,	/* Optional members */
	8, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_portIndex8_2 = {
	"portIndex8",
	"portIndex8",
	&asn_OP_SEQUENCE,
	asn_DEF_portIndex8_tags_2,
	sizeof(asn_DEF_portIndex8_tags_2)
		/sizeof(asn_DEF_portIndex8_tags_2[0]) - 1, /* 1 */
	asn_DEF_portIndex8_tags_2,	/* Same as above */
	sizeof(asn_DEF_portIndex8_tags_2)
		/sizeof(asn_DEF_portIndex8_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_portIndex8_2,
	8,	/* Elements count */
	&asn_SPC_portIndex8_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rank2_4_20[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PortIndex4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rank2_4_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rank2_4_specs_20 = {
	sizeof(struct PortIndexFor8Ranks__portIndex4__rank2_4),
	offsetof(struct PortIndexFor8Ranks__portIndex4__rank2_4, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rank2_4_20 = {
	"rank2-4",
	"rank2-4",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rank2_4_tags_20,
	sizeof(asn_DEF_rank2_4_tags_20)
		/sizeof(asn_DEF_rank2_4_tags_20[0]) - 1, /* 1 */
	asn_DEF_rank2_4_tags_20,	/* Same as above */
	sizeof(asn_DEF_rank2_4_tags_20)
		/sizeof(asn_DEF_rank2_4_tags_20[0]), /* 2 */
	{ &asn_OER_type_rank2_4_constr_20, &asn_PER_type_rank2_4_constr_20, SEQUENCE_OF_constraint },
	asn_MBR_rank2_4_20,
	1,	/* Single element */
	&asn_SPC_rank2_4_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rank3_4_22[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PortIndex4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rank3_4_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rank3_4_specs_22 = {
	sizeof(struct PortIndexFor8Ranks__portIndex4__rank3_4),
	offsetof(struct PortIndexFor8Ranks__portIndex4__rank3_4, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rank3_4_22 = {
	"rank3-4",
	"rank3-4",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rank3_4_tags_22,
	sizeof(asn_DEF_rank3_4_tags_22)
		/sizeof(asn_DEF_rank3_4_tags_22[0]) - 1, /* 1 */
	asn_DEF_rank3_4_tags_22,	/* Same as above */
	sizeof(asn_DEF_rank3_4_tags_22)
		/sizeof(asn_DEF_rank3_4_tags_22[0]), /* 2 */
	{ &asn_OER_type_rank3_4_constr_22, &asn_PER_type_rank3_4_constr_22, SEQUENCE_OF_constraint },
	asn_MBR_rank3_4_22,
	1,	/* Single element */
	&asn_SPC_rank3_4_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rank4_4_24[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PortIndex4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rank4_4_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rank4_4_specs_24 = {
	sizeof(struct PortIndexFor8Ranks__portIndex4__rank4_4),
	offsetof(struct PortIndexFor8Ranks__portIndex4__rank4_4, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rank4_4_24 = {
	"rank4-4",
	"rank4-4",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rank4_4_tags_24,
	sizeof(asn_DEF_rank4_4_tags_24)
		/sizeof(asn_DEF_rank4_4_tags_24[0]) - 1, /* 1 */
	asn_DEF_rank4_4_tags_24,	/* Same as above */
	sizeof(asn_DEF_rank4_4_tags_24)
		/sizeof(asn_DEF_rank4_4_tags_24[0]), /* 2 */
	{ &asn_OER_type_rank4_4_constr_24, &asn_PER_type_rank4_4_constr_24, SEQUENCE_OF_constraint },
	asn_MBR_rank4_4_24,
	1,	/* Single element */
	&asn_SPC_rank4_4_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_portIndex4_18[] = {
	{ ATF_POINTER, 4, offsetof(struct PortIndexFor8Ranks__portIndex4, rank1_4),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PortIndex4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rank1-4"
		},
	{ ATF_POINTER, 3, offsetof(struct PortIndexFor8Ranks__portIndex4, rank2_4),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_rank2_4_20,
		0,
		{ &asn_OER_memb_rank2_4_constr_20, &asn_PER_memb_rank2_4_constr_20,  memb_rank2_4_constraint_18 },
		0, 0, /* No default value */
		"rank2-4"
		},
	{ ATF_POINTER, 2, offsetof(struct PortIndexFor8Ranks__portIndex4, rank3_4),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_rank3_4_22,
		0,
		{ &asn_OER_memb_rank3_4_constr_22, &asn_PER_memb_rank3_4_constr_22,  memb_rank3_4_constraint_18 },
		0, 0, /* No default value */
		"rank3-4"
		},
	{ ATF_POINTER, 1, offsetof(struct PortIndexFor8Ranks__portIndex4, rank4_4),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_rank4_4_24,
		0,
		{ &asn_OER_memb_rank4_4_constr_24, &asn_PER_memb_rank4_4_constr_24,  memb_rank4_4_constraint_18 },
		0, 0, /* No default value */
		"rank4-4"
		},
};
static const int asn_MAP_portIndex4_oms_18[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_portIndex4_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_portIndex4_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rank1-4 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rank2-4 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rank3-4 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* rank4-4 */
};
static asn_SEQUENCE_specifics_t asn_SPC_portIndex4_specs_18 = {
	sizeof(struct PortIndexFor8Ranks__portIndex4),
	offsetof(struct PortIndexFor8Ranks__portIndex4, _asn_ctx),
	asn_MAP_portIndex4_tag2el_18,
	4,	/* Count of tags in the map */
	asn_MAP_portIndex4_oms_18,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_portIndex4_18 = {
	"portIndex4",
	"portIndex4",
	&asn_OP_SEQUENCE,
	asn_DEF_portIndex4_tags_18,
	sizeof(asn_DEF_portIndex4_tags_18)
		/sizeof(asn_DEF_portIndex4_tags_18[0]) - 1, /* 1 */
	asn_DEF_portIndex4_tags_18,	/* Same as above */
	sizeof(asn_DEF_portIndex4_tags_18)
		/sizeof(asn_DEF_portIndex4_tags_18[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_portIndex4_18,
	4,	/* Elements count */
	&asn_SPC_portIndex4_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rank2_2_28[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_PortIndex2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_rank2_2_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_rank2_2_specs_28 = {
	sizeof(struct PortIndexFor8Ranks__portIndex2__rank2_2),
	offsetof(struct PortIndexFor8Ranks__portIndex2__rank2_2, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rank2_2_28 = {
	"rank2-2",
	"rank2-2",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_rank2_2_tags_28,
	sizeof(asn_DEF_rank2_2_tags_28)
		/sizeof(asn_DEF_rank2_2_tags_28[0]) - 1, /* 1 */
	asn_DEF_rank2_2_tags_28,	/* Same as above */
	sizeof(asn_DEF_rank2_2_tags_28)
		/sizeof(asn_DEF_rank2_2_tags_28[0]), /* 2 */
	{ &asn_OER_type_rank2_2_constr_28, &asn_PER_type_rank2_2_constr_28, SEQUENCE_OF_constraint },
	asn_MBR_rank2_2_28,
	1,	/* Single element */
	&asn_SPC_rank2_2_specs_28	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_portIndex2_26[] = {
	{ ATF_POINTER, 2, offsetof(struct PortIndexFor8Ranks__portIndex2, rank1_2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PortIndex2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rank1-2"
		},
	{ ATF_POINTER, 1, offsetof(struct PortIndexFor8Ranks__portIndex2, rank2_2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_rank2_2_28,
		0,
		{ &asn_OER_memb_rank2_2_constr_28, &asn_PER_memb_rank2_2_constr_28,  memb_rank2_2_constraint_26 },
		0, 0, /* No default value */
		"rank2-2"
		},
};
static const int asn_MAP_portIndex2_oms_26[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_portIndex2_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_portIndex2_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rank1-2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rank2-2 */
};
static asn_SEQUENCE_specifics_t asn_SPC_portIndex2_specs_26 = {
	sizeof(struct PortIndexFor8Ranks__portIndex2),
	offsetof(struct PortIndexFor8Ranks__portIndex2, _asn_ctx),
	asn_MAP_portIndex2_tag2el_26,
	2,	/* Count of tags in the map */
	asn_MAP_portIndex2_oms_26,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_portIndex2_26 = {
	"portIndex2",
	"portIndex2",
	&asn_OP_SEQUENCE,
	asn_DEF_portIndex2_tags_26,
	sizeof(asn_DEF_portIndex2_tags_26)
		/sizeof(asn_DEF_portIndex2_tags_26[0]) - 1, /* 1 */
	asn_DEF_portIndex2_tags_26,	/* Same as above */
	sizeof(asn_DEF_portIndex2_tags_26)
		/sizeof(asn_DEF_portIndex2_tags_26[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_portIndex2_26,
	2,	/* Elements count */
	&asn_SPC_portIndex2_specs_26	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PortIndexFor8Ranks_1[] = {
	{ ATF_POINTER, 0, offsetof(struct PortIndexFor8Ranks, choice.portIndex8),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_portIndex8_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"portIndex8"
		},
	{ ATF_POINTER, 0, offsetof(struct PortIndexFor8Ranks, choice.portIndex4),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_portIndex4_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"portIndex4"
		},
	{ ATF_POINTER, 0, offsetof(struct PortIndexFor8Ranks, choice.portIndex2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_portIndex2_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"portIndex2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PortIndexFor8Ranks, choice.portIndex1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"portIndex1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_PortIndexFor8Ranks_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* portIndex8 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* portIndex4 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* portIndex2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* portIndex1 */
};
asn_CHOICE_specifics_t asn_SPC_PortIndexFor8Ranks_specs_1 = {
	sizeof(struct PortIndexFor8Ranks),
	offsetof(struct PortIndexFor8Ranks, _asn_ctx),
	offsetof(struct PortIndexFor8Ranks, present),
	sizeof(((struct PortIndexFor8Ranks *)0)->present),
	asn_MAP_PortIndexFor8Ranks_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PortIndexFor8Ranks = {
	"PortIndexFor8Ranks",
	"PortIndexFor8Ranks",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_PortIndexFor8Ranks_constr_1, &asn_PER_type_PortIndexFor8Ranks_constr_1, CHOICE_constraint },
	asn_MBR_PortIndexFor8Ranks_1,
	4,	/* Elements count */
	&asn_SPC_PortIndexFor8Ranks_specs_1	/* Additional specs */
};

