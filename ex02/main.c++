#include <iostream>
#include "gray_code.c++"

// 2	        : 0000 0010
// gray_code(2) : 0000 0011

int main(){
    int32_t n = 4;

    std::cout << "Gray Code : " << gray_code(n) << std::endl;
}