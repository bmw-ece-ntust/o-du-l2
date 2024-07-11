/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/hpe/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D ./temp`
 */

#ifndef	_TCI_State_H_
#define	_TCI_State_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TCI-StateId.h"
#include "QCL-Info.h"
#include "AdditionalPCIIndex-r17.h"
#include "PathlossReferenceRS-Id-r17.h"
#include "Uplink-powerControlId-r17.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QCL_Info;

/* TCI-State */
typedef struct TCI_State {
	TCI_StateId_t	 tci_StateId;
	QCL_Info_t	 qcl_Type1;
	struct QCL_Info	*qcl_Type2;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct TCI_State__ext1 {
		AdditionalPCIIndex_r17_t	*additionalPCI_r17;	/* OPTIONAL */
		PathlossReferenceRS_Id_r17_t	*pathlossReferenceRS_Id_r17;	/* OPTIONAL */
		Uplink_powerControlId_r17_t	*ul_powerControl_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TCI_State_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TCI_State;
extern asn_SEQUENCE_specifics_t asn_SPC_TCI_State_specs_1;
extern asn_TYPE_member_t asn_MBR_TCI_State_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "QCL-Info.h"

#endif	/* _TCI_State_H_ */
#include <asn_internal.h>
