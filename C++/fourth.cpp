#include <iostream>
#include <string>

void Calculator(){

    int FirstNumber;
    std::cout << "Enter a Number: ";
    std::cin >> FirstNumber;

    int SecondNumber;
    std::cout << "Enter another Number: ";
    std::cin >> SecondNumber;

    int sum = FirstNumber + SecondNumber;
    std::cout << "The sum of the Numbers is: " << sum << "\n\n";

}


int main() {

    std::cout << "Welcome to the fourth C++ project of all time!\n";

    Calculator();

    return 0;
}
