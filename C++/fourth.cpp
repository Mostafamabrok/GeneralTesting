#include <iostream>
#include <string>

void calculator_add(){

    float FirstNumber;
    float SecondNumber;
    float sum;

    std::cout << "\nEnter the first number you would like to add:";
    std::cin  >> FirstNumber;

    std::cout << "\nEnter the second number you would like to add:";
    std::cin  >> SecondNumber;

    sum = FirstNumber + SecondNumber;

    std::cout << "\nThe sum is: " << sum << std::endl;

}

void calculator_subtract(){

    float FirstNumber;
    float SecondNumber;
    float difference;

    std::cout << "\nEnter the first number you would like to subtract:";
    std::cin  >> FirstNumber;

    std::cout << "\nEnter the second number you would like to subtract:";
    std::cin  >> SecondNumber;

    difference = FirstNumber - SecondNumber;

    std::cout << "\nThe difference is: " << difference << std::endl;

}

void calculator_multiply(){

    float FirstNumber;
    float SecondNumber;
    float product;

    std::cout << "\nEnter the first number you would like to multiply:";
    std::cin  >> FirstNumber;

    std::cout << "\nEnter the second number you would like to multiply:";
    std::cin  >> SecondNumber;

    product = FirstNumber * SecondNumber;

    std::cout << "\nThe product is: " << product << std::endl;

}

void calculator_divide(){

    float FirstNumber;
    float SecondNumber;
    float quotient;

    std::cout << "\nEnter the first number you would like to divide:";
    std::cin  >> FirstNumber;

    std::cout << "\nEnter the second number you would like to divide:";
    std::cin  >> SecondNumber;

    quotient = FirstNumber/SecondNumber;

    std::cout << "\nThe quotient is:" << quotient << std::endl;

}

void calculator_main(){

    std::cout << "\nCalculator v1.0.0, Developed by MSTF studios.";

    std::cout << "\nWhat would you like to do?\n(a)dd,\n(s)ubtract,\n(m)ultiply,\n(d)ivide,\n(e)exit\n:";

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

    std::cout << "\nWould you like to use a Calculator? (y/n):";
    std::string calc_perm;
    std::cin  >> calc_perm;

    if (calc_perm == "y"){calculator_main();}

    return 0;
}
