/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "ReestabNCellInfo.h"

static int
memb_key_gNodeB_Star_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 256)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_key_gNodeB_Star_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	256	/* (SIZE(256..256)) */};
static asn_per_constraints_t asn_PER_memb_key_gNodeB_Star_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  256,  256 }	/* (SIZE(256..256)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ReestabNCellInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReestabNCellInfo, cellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReestabNCellInfo, key_gNodeB_Star),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_key_gNodeB_Star_constr_3, &asn_PER_memb_key_gNodeB_Star_constr_3,  memb_key_gNodeB_Star_constraint_1 },
		0, 0, /* No default value */
		"key-gNodeB-Star"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReestabNCellInfo, shortMAC_I),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ShortMAC_I,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shortMAC-I"
		},
};
static const ber_tlv_tag_t asn_DEF_ReestabNCellInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReestabNCellInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* key-gNodeB-Star */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* shortMAC-I */
};
asn_SEQUENCE_specifics_t asn_SPC_ReestabNCellInfo_specs_1 = {
	sizeof(struct ReestabNCellInfo),
	offsetof(struct ReestabNCellInfo, _asn_ctx),
	asn_MAP_ReestabNCellInfo_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReestabNCellInfo = {
	"ReestabNCellInfo",
	"ReestabNCellInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_ReestabNCellInfo_tags_1,
	sizeof(asn_DEF_ReestabNCellInfo_tags_1)
		/sizeof(asn_DEF_ReestabNCellInfo_tags_1[0]), /* 1 */
	asn_DEF_ReestabNCellInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReestabNCellInfo_tags_1)
		/sizeof(asn_DEF_ReestabNCellInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReestabNCellInfo_1,
	3,	/* Elements count */
	&asn_SPC_ReestabNCellInfo_specs_1	/* Additional specs */
};

