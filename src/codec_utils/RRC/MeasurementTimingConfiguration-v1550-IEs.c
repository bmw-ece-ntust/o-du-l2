/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#include "MeasurementTimingConfiguration-v1550-IEs.h"

asn_TYPE_member_t asn_MBR_MeasurementTimingConfiguration_v1550_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementTimingConfiguration_v1550_IEs, campOnFirstSSB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"campOnFirstSSB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementTimingConfiguration_v1550_IEs, psCellOnlyOnFirstSSB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"psCellOnlyOnFirstSSB"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementTimingConfiguration_v1550_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementTimingConfiguration_v1610_IEs,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_MeasurementTimingConfiguration_v1550_IEs_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_MeasurementTimingConfiguration_v1550_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasurementTimingConfiguration_v1550_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* campOnFirstSSB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* psCellOnlyOnFirstSSB */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasurementTimingConfiguration_v1550_IEs_specs_1 = {
	sizeof(struct MeasurementTimingConfiguration_v1550_IEs),
	offsetof(struct MeasurementTimingConfiguration_v1550_IEs, _asn_ctx),
	asn_MAP_MeasurementTimingConfiguration_v1550_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasurementTimingConfiguration_v1550_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasurementTimingConfiguration_v1550_IEs = {
	"MeasurementTimingConfiguration-v1550-IEs",
	"MeasurementTimingConfiguration-v1550-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasurementTimingConfiguration_v1550_IEs_tags_1,
	sizeof(asn_DEF_MeasurementTimingConfiguration_v1550_IEs_tags_1)
		/sizeof(asn_DEF_MeasurementTimingConfiguration_v1550_IEs_tags_1[0]), /* 1 */
	asn_DEF_MeasurementTimingConfiguration_v1550_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasurementTimingConfiguration_v1550_IEs_tags_1)
		/sizeof(asn_DEF_MeasurementTimingConfiguration_v1550_IEs_tags_1[0]), /* 1 */
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
	asn_MBR_MeasurementTimingConfiguration_v1550_IEs_1,
	3,	/* Elements count */
	&asn_SPC_MeasurementTimingConfiguration_v1550_IEs_specs_1	/* Additional specs */
};

