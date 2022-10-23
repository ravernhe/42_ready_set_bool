#include <iostream>
#include "eval_formula.c++"

// 2	        : 0000 0010
// gray_code(2) : 0000 0011

int main(){
    std::string str = "10&";

    std::cout << "Bool eval : " << eval_formula(str) << std::endl;
}