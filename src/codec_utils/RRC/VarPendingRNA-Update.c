/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "VarPendingRNA-Update.h"

static asn_TYPE_member_t asn_MBR_VarPendingRNA_Update_1[] = {
	{ ATF_POINTER, 1, offsetof(struct VarPendingRNA_Update, pendingRNA_Update),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pendingRNA-Update"
		},
};
static const int asn_MAP_VarPendingRNA_Update_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_VarPendingRNA_Update_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VarPendingRNA_Update_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pendingRNA-Update */
};
static asn_SEQUENCE_specifics_t asn_SPC_VarPendingRNA_Update_specs_1 = {
	sizeof(struct VarPendingRNA_Update),
	offsetof(struct VarPendingRNA_Update, _asn_ctx),
	asn_MAP_VarPendingRNA_Update_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_VarPendingRNA_Update_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VarPendingRNA_Update = {
	"VarPendingRNA-Update",
	"VarPendingRNA-Update",
	&asn_OP_SEQUENCE,
	asn_DEF_VarPendingRNA_Update_tags_1,
	sizeof(asn_DEF_VarPendingRNA_Update_tags_1)
		/sizeof(asn_DEF_VarPendingRNA_Update_tags_1[0]), /* 1 */
	asn_DEF_VarPendingRNA_Update_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarPendingRNA_Update_tags_1)
		/sizeof(asn_DEF_VarPendingRNA_Update_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VarPendingRNA_Update_1,
	1,	/* Elements count */
	&asn_SPC_VarPendingRNA_Update_specs_1	/* Additional specs */
};

