/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "../../ASN1_Input/E2APV0300.asn1"
 * 	`asn1c -D ../../E2_v3.0_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "RICaction-RefusedToBeModified-Item.h"

static asn_TYPE_member_t asn_MBR_RICaction_RefusedToBeModified_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RICaction_RefusedToBeModified_Item, ricActionID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICactionID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ricActionID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RICaction_RefusedToBeModified_Item, cause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CauseE2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cause"
		},
};
static const ber_tlv_tag_t asn_DEF_RICaction_RefusedToBeModified_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RICaction_RefusedToBeModified_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ricActionID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cause */
};
static asn_SEQUENCE_specifics_t asn_SPC_RICaction_RefusedToBeModified_Item_specs_1 = {
	sizeof(struct RICaction_RefusedToBeModified_Item),
	offsetof(struct RICaction_RefusedToBeModified_Item, _asn_ctx),
	asn_MAP_RICaction_RefusedToBeModified_Item_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RICaction_RefusedToBeModified_Item = {
	"RICaction-RefusedToBeModified-Item",
	"RICaction-RefusedToBeModified-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_RICaction_RefusedToBeModified_Item_tags_1,
	sizeof(asn_DEF_RICaction_RefusedToBeModified_Item_tags_1)
		/sizeof(asn_DEF_RICaction_RefusedToBeModified_Item_tags_1[0]), /* 1 */
	asn_DEF_RICaction_RefusedToBeModified_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICaction_RefusedToBeModified_Item_tags_1)
		/sizeof(asn_DEF_RICaction_RefusedToBeModified_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RICaction_RefusedToBeModified_Item_1,
	2,	/* Elements count */
	&asn_SPC_RICaction_RefusedToBeModified_Item_specs_1	/* Additional specs */
};

