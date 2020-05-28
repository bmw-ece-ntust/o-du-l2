/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_CG_UCI_OnPUSCH_H_
#define	_CG_UCI_OnPUSCH_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CG_UCI_OnPUSCH_PR {
	CG_UCI_OnPUSCH_PR_NOTHING,	/* No components present */
	CG_UCI_OnPUSCH_PR_dynamic,
	CG_UCI_OnPUSCH_PR_semiStatic
} CG_UCI_OnPUSCH_PR;

/* Forward declarations */
struct BetaOffsets;

/* CG-UCI-OnPUSCH */
typedef struct CG_UCI_OnPUSCH {
	CG_UCI_OnPUSCH_PR present;
	union CG_UCI_OnPUSCH_u {
		struct CG_UCI_OnPUSCH__dynamic {
			A_SEQUENCE_OF(struct BetaOffsets) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *dynamic;
		struct BetaOffsets	*semiStatic;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CG_UCI_OnPUSCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CG_UCI_OnPUSCH;
extern asn_CHOICE_specifics_t asn_SPC_CG_UCI_OnPUSCH_specs_1;
extern asn_TYPE_member_t asn_MBR_CG_UCI_OnPUSCH_1[2];
extern asn_per_constraints_t asn_PER_type_CG_UCI_OnPUSCH_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CG_UCI_OnPUSCH_H_ */
#include <asn_internal.h>
