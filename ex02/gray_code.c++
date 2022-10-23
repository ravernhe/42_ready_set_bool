#include <iostream>

int32_t gray_code(int32_t n) {
    return n ^ (n >> 1);
}