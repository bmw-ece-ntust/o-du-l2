/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_CSI_SemiPersistentOnPUSCH_TriggerState_H_
#define	_CSI_SemiPersistentOnPUSCH_TriggerState_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-ReportConfigId.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_SemiPersistentOnPUSCH_TriggerState__ext1__sp_CSI_MultiplexingMode_r17 {
	CSI_SemiPersistentOnPUSCH_TriggerState__ext1__sp_CSI_MultiplexingMode_r17_enabled	= 0
} e_CSI_SemiPersistentOnPUSCH_TriggerState__ext1__sp_CSI_MultiplexingMode_r17;

/* CSI-SemiPersistentOnPUSCH-TriggerState */
typedef struct CSI_SemiPersistentOnPUSCH_TriggerState {
	CSI_ReportConfigId_t	 associatedReportConfigInfo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CSI_SemiPersistentOnPUSCH_TriggerState__ext1 {
		long	*sp_CSI_MultiplexingMode_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_SemiPersistentOnPUSCH_TriggerState_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sp_CSI_MultiplexingMode_r17_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSI_SemiPersistentOnPUSCH_TriggerState;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_SemiPersistentOnPUSCH_TriggerState_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_SemiPersistentOnPUSCH_TriggerState_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_SemiPersistentOnPUSCH_TriggerState_H_ */
#include <asn_internal.h>
