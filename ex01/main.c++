#include <iostream>
#include "multiplicater.c++"

// 5	: 0000 0101
// 3	: 0000 0011

int main(){
    int32_t a = 5;
    int32_t b = 3;

    std::cout << "Multiply : " << multiplicater_bitwise(a, b) << std::endl;
}