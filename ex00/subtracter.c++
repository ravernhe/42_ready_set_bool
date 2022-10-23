#include <iostream>

int32_t subtracter_bitwise(int32_t a, int32_t b) {
    int32_t carry;
    
    b = ~b;
    while (b != 0) {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return (a + 1);
}