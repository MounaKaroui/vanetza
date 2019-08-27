/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "asn1/TS102894-2v131-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_YawRateValue_H_
#define	_YawRateValue_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum YawRateValue {
	YawRateValue_straight	= 0,
	YawRateValue_degSec_000_01ToRight	= -1,
	YawRateValue_degSec_000_01ToLeft	= 1,
	YawRateValue_unavailable	= 32767
} e_YawRateValue;

/* YawRateValue */
typedef long	 YawRateValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_YawRateValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_YawRateValue;
asn_struct_free_f YawRateValue_free;
asn_struct_print_f YawRateValue_print;
asn_constr_check_f YawRateValue_constraint;
ber_type_decoder_f YawRateValue_decode_ber;
der_type_encoder_f YawRateValue_encode_der;
xer_type_decoder_f YawRateValue_decode_xer;
xer_type_encoder_f YawRateValue_encode_xer;
oer_type_decoder_f YawRateValue_decode_oer;
oer_type_encoder_f YawRateValue_encode_oer;
per_type_decoder_f YawRateValue_decode_uper;
per_type_encoder_f YawRateValue_encode_uper;
per_type_decoder_f YawRateValue_decode_aper;
per_type_encoder_f YawRateValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _YawRateValue_H_ */
#include "asn_internal.h"
