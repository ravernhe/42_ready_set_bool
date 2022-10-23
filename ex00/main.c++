#include <iostream>
#include "adder.c++"
#include "subtracter.c++"

// 12	: 0000 1100
// 9	: 0000 1001

int main(){
    int32_t a = 12;
    int32_t b = 9;

    std::cout << "Adder : " << adder_bitwise(a, b) << std::endl;
    std::cout << "Substract : " << subtracter_bitwise(a, b) << std::endl;
}