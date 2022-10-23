#include <iostream>
#include "../ex00/adder.c++"

int32_t multiplicater_bitwise(int32_t a, int32_t b) {
    int32_t ret;

    ret = 0;
    while (b > 0) {
        if (b & 1)
            ret = adder_bitwise(ret, a);
        a <<= 1;
        b >>= 1;
    }
    return (ret);
}