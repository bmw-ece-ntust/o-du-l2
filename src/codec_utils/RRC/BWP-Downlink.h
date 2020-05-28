/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_BWP_Downlink_H_
#define	_BWP_Downlink_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BWP-Id.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BWP_DownlinkCommon;
struct BWP_DownlinkDedicated;

/* BWP-Downlink */
typedef struct BWP_Downlink {
	BWP_Id_t	 bwp_Id;
	struct BWP_DownlinkCommon	*bwp_Common;	/* OPTIONAL */
	struct BWP_DownlinkDedicated	*bwp_Dedicated;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BWP_Downlink_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BWP_Downlink;
extern asn_SEQUENCE_specifics_t asn_SPC_BWP_Downlink_specs_1;
extern asn_TYPE_member_t asn_MBR_BWP_Downlink_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BWP_Downlink_H_ */
#include <asn_internal.h>
