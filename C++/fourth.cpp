#include <iostream>
#include <string>


int main() {

    int FirstNumber;
    std::cout << "Enter a Number: ";
    std::cin >> FirstNumber;

    int SecondNumber;
    std::cout << "Enter another Number: ";
    std::cin >> SecondNumber;

    int sum = FirstNumber + SecondNumber;
    std::cout << "The sum of the Numbers is: " << sum;

    return 0;
}
