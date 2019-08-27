/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "asn1/TS102894-2v131-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "PhoneNumber.h"

static const int permitted_alphabet_table_1[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/* .                */
 2, 3, 4, 5, 6, 7, 8, 9,10,11, 0, 0, 0, 0, 0, 0,	/* 0123456789       */
};
static const int permitted_alphabet_code2value_1[11] = {
32,48,49,50,51,52,53,54,55,56,57,};


static int check_permitted_alphabet_1(const void *sptr) {
	const int *table = permitted_alphabet_table_1;
	/* The underlying type is NumericString */
	const NumericString_t *st = (const NumericString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

int
PhoneNumber_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const NumericString_t *st = (const NumericString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 16)
		 && !check_permitted_alphabet_1(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int asn_PER_MAP_PhoneNumber_1_v2c(unsigned int value) {
	if(value >= sizeof(permitted_alphabet_table_1)/sizeof(permitted_alphabet_table_1[0]))
		return -1;
	return permitted_alphabet_table_1[value] - 1;
}
static int asn_PER_MAP_PhoneNumber_1_c2v(unsigned int code) {
	if(code >= sizeof(permitted_alphabet_code2value_1)/sizeof(permitted_alphabet_code2value_1[0]))
		return -1;
	return permitted_alphabet_code2value_1[code];
}
/*
 * This type is implemented using NumericString,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_PhoneNumber_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
asn_per_constraints_t asn_PER_type_PhoneNumber_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  32,  57 }	/* (32..57) */,
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	asn_PER_MAP_PhoneNumber_1_v2c,	/* Value to PER code map */
	asn_PER_MAP_PhoneNumber_1_c2v	/* PER code to value map */
};
static const ber_tlv_tag_t asn_DEF_PhoneNumber_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (18 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PhoneNumber = {
	"PhoneNumber",
	"PhoneNumber",
	&asn_OP_NumericString,
	asn_DEF_PhoneNumber_tags_1,
	sizeof(asn_DEF_PhoneNumber_tags_1)
		/sizeof(asn_DEF_PhoneNumber_tags_1[0]), /* 1 */
	asn_DEF_PhoneNumber_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhoneNumber_tags_1)
		/sizeof(asn_DEF_PhoneNumber_tags_1[0]), /* 1 */
	{ &asn_OER_type_PhoneNumber_constr_1, &asn_PER_type_PhoneNumber_constr_1, PhoneNumber_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

