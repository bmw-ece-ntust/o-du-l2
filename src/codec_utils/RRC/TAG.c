/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "TAG.h"

asn_TYPE_member_t asn_MBR_TAG_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TAG, tag_Id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAG_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tag-Id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TAG, timeAlignmentTimer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeAlignmentTimer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeAlignmentTimer"
		},
};
static const ber_tlv_tag_t asn_DEF_TAG_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TAG_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tag-Id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* timeAlignmentTimer */
};
asn_SEQUENCE_specifics_t asn_SPC_TAG_specs_1 = {
	sizeof(struct TAG),
	offsetof(struct TAG, _asn_ctx),
	asn_MAP_TAG_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TAG = {
	"TAG",
	"TAG",
	&asn_OP_SEQUENCE,
	asn_DEF_TAG_tags_1,
	sizeof(asn_DEF_TAG_tags_1)
		/sizeof(asn_DEF_TAG_tags_1[0]), /* 1 */
	asn_DEF_TAG_tags_1,	/* Same as above */
	sizeof(asn_DEF_TAG_tags_1)
		/sizeof(asn_DEF_TAG_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TAG_1,
	2,	/* Elements count */
	&asn_SPC_TAG_specs_1	/* Additional specs */
};

