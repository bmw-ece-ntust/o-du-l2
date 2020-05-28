/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_CG_ConfigInfo_H_
#define	_CG_ConfigInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CG_ConfigInfo__criticalExtensions_PR {
	CG_ConfigInfo__criticalExtensions_PR_NOTHING,	/* No components present */
	CG_ConfigInfo__criticalExtensions_PR_c1,
	CG_ConfigInfo__criticalExtensions_PR_criticalExtensionsFuture
} CG_ConfigInfo__criticalExtensions_PR;
typedef enum CG_ConfigInfo__criticalExtensions__c1_PR {
	CG_ConfigInfo__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	CG_ConfigInfo__criticalExtensions__c1_PR_cg_ConfigInfo,
	CG_ConfigInfo__criticalExtensions__c1_PR_spare3,
	CG_ConfigInfo__criticalExtensions__c1_PR_spare2,
	CG_ConfigInfo__criticalExtensions__c1_PR_spare1
} CG_ConfigInfo__criticalExtensions__c1_PR;

/* Forward declarations */
struct CG_ConfigInfo_IEs;

/* CG-ConfigInfo */
typedef struct CG_ConfigInfo {
	struct CG_ConfigInfo__criticalExtensions {
		CG_ConfigInfo__criticalExtensions_PR present;
		union CG_ConfigInfo__criticalExtensions_u {
			struct CG_ConfigInfo__criticalExtensions__c1 {
				CG_ConfigInfo__criticalExtensions__c1_PR present;
				union CG_ConfigInfo__criticalExtensions__c1_u {
					struct CG_ConfigInfo_IEs	*cg_ConfigInfo;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct CG_ConfigInfo__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CG_ConfigInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CG_ConfigInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _CG_ConfigInfo_H_ */
#include <asn_internal.h>
