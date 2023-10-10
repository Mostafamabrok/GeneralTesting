#include <iostream>
#include <string>

void calculator_add(){

}

void calculator_subtract(){

}

void calculator_multiply(){

}

void calculator_divide(){

}

void calculator_main(){

    std::cout << "Calculator version 1.0";

    std::cout << "What would you like to do?\n(a)dd,\n(s)ubtract,\n(m)ultiply,\n(d)ivide,\n(e)exit:";

    char action;
    std::cin >> action;

    if (action == 'a' ){calculator_add();}
    if (action == 's' ){calculator_subtract();}
    if (action == 'm' ){calculator_multiply();}
    if (action == 'd' ){calculator_divide();}

    if (action == 'e'){
        std::cout << "Exiting...\n\n";
    }
    
    else {calculator_main();}
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
