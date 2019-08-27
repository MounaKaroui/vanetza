/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "asn1/EN302637-2v141-CAM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_BasicVehicleContainerLowFrequency_H_
#define	_BasicVehicleContainerLowFrequency_H_


#include "asn_application.h"

/* Including external dependencies */
#include "VehicleRole.h"
#include "ExteriorLights.h"
#include "PathHistory.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BasicVehicleContainerLowFrequency */
typedef struct BasicVehicleContainerLowFrequency {
	VehicleRole_t	 vehicleRole;
	ExteriorLights_t	 exteriorLights;
	PathHistory_t	 pathHistory;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BasicVehicleContainerLowFrequency_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BasicVehicleContainerLowFrequency;
extern asn_SEQUENCE_specifics_t asn_SPC_BasicVehicleContainerLowFrequency_specs_1;
extern asn_TYPE_member_t asn_MBR_BasicVehicleContainerLowFrequency_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BasicVehicleContainerLowFrequency_H_ */
#include "asn_internal.h"
