/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_GapConfig_H_
#define	_GapConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GapConfig__mgl {
	GapConfig__mgl_ms1dot5	= 0,
	GapConfig__mgl_ms3	= 1,
	GapConfig__mgl_ms3dot5	= 2,
	GapConfig__mgl_ms4	= 3,
	GapConfig__mgl_ms5dot5	= 4,
	GapConfig__mgl_ms6	= 5
} e_GapConfig__mgl;
typedef enum GapConfig__mgrp {
	GapConfig__mgrp_ms20	= 0,
	GapConfig__mgrp_ms40	= 1,
	GapConfig__mgrp_ms80	= 2,
	GapConfig__mgrp_ms160	= 3
} e_GapConfig__mgrp;
typedef enum GapConfig__mgta {
	GapConfig__mgta_ms0	= 0,
	GapConfig__mgta_ms0dot25	= 1,
	GapConfig__mgta_ms0dot5	= 2
} e_GapConfig__mgta;

/* GapConfig */
typedef struct GapConfig {
	long	 gapOffset;
	long	 mgl;
	long	 mgrp;
	long	 mgta;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GapConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mgl_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mgrp_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mgta_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_GapConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_GapConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_GapConfig_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _GapConfig_H_ */
#include <asn_internal.h>
