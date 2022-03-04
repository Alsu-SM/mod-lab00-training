// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int64_t res = 1;
    if (n == 0) {
        return res;
    } else {
        for (int i = 0; i < n; i++) {
        res *= x;
    }
    return res;
    }
}
