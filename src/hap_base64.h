#ifndef _HAP_BASE64_H_
#define _HAP_BASE64_H_

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>


size_t base64_encoded_size(const unsigned char* data, size_t size);
size_t base64_decoded_size(const unsigned char* encoded_data, size_t encoded_size);
//multiple definition of `base64_decode';
int base64_encode_(const unsigned char* data, size_t data_size, unsigned char *encoded_data);
int base64_decode_(const unsigned char* encoded_data, size_t encoded_size, unsigned char *data);
#ifdef __cplusplus
}
#endif

#endif //_HAP_BASE64_H_
