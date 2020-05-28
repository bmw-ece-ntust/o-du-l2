/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "SuspendConfig.h"

#include "RAN-NotificationAreaInfo.h"
asn_TYPE_member_t asn_MBR_SuspendConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SuspendConfig, fullI_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_I_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fullI-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuspendConfig, shortI_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ShortI_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shortI-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuspendConfig, ran_PagingCycle),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingCycle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ran-PagingCycle"
		},
	{ ATF_POINTER, 2, offsetof(struct SuspendConfig, ran_NotificationAreaInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RAN_NotificationAreaInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ran-NotificationAreaInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SuspendConfig, t380),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PeriodicRNAU_TimerValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t380"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SuspendConfig, nextHopChainingCount),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NextHopChainingCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextHopChainingCount"
		},
};
static const int asn_MAP_SuspendConfig_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_SuspendConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SuspendConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fullI-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* shortI-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ran-PagingCycle */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ran-NotificationAreaInfo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* t380 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nextHopChainingCount */
};
asn_SEQUENCE_specifics_t asn_SPC_SuspendConfig_specs_1 = {
	sizeof(struct SuspendConfig),
	offsetof(struct SuspendConfig, _asn_ctx),
	asn_MAP_SuspendConfig_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_SuspendConfig_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SuspendConfig = {
	"SuspendConfig",
	"SuspendConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_SuspendConfig_tags_1,
	sizeof(asn_DEF_SuspendConfig_tags_1)
		/sizeof(asn_DEF_SuspendConfig_tags_1[0]), /* 1 */
	asn_DEF_SuspendConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_SuspendConfig_tags_1)
		/sizeof(asn_DEF_SuspendConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SuspendConfig_1,
	6,	/* Elements count */
	&asn_SPC_SuspendConfig_specs_1	/* Additional specs */
};

