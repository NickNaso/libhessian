/*
 * Copyright (c) 2017 Minqi Pan <pmq2001@gmail.com>
 *
 * This file is part of libhessian, distributed under the MIT License
 * For full terms see the included LICENSE file
 */

#ifndef ENCODE_H_6392FA14
#define ENCODE_H_6392FA14

size_t hessian_encode_int(int32_t val, uint8_t *out);
size_t hessian_encode_date(uint64_t milliEpoch, uint8_t *out);
size_t hessian_encode_long(uint64_t val, uint8_t *out);
size_t hessian_encode_string(char *str, size_t length, uint8_t *out);

#endif /* end of include guard: ENCODE_H_6392FA14 */
