#include <iostream>
#include <string>

void calculator_main(){

}

void calculator_add(){

}

void calculator_subtract(){

}

void calculator_multiply(){

}

void caclulator_divide(){

}

int main() {

    std::cout << "Welcome to the fourth C++ project of all time!\n\n";

    std::cout << "Would you like to use a Calculator? (y/n):";
    std::string calc_perm;
    std::cin  >> calc_perm;

    if (calc_perm == "y"){
    calculator_main();
}

    return 0;
}
