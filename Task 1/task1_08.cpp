#include <iostream>

int main() {

    float firstNumber;
    float secondNumber;
    float thirdNumber;
    float total = firstNumber + secondNumber + thirdNumber;
    float average = total / 3;


    std::cout << "Enter your first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter your second number: ";
    std::cin >> secondNumber;

    std::cout << "Enter your third number: ";
    std::cin >> thirdNumber;

    // total = firstNumber + secondNumber + thirdNumber;
    std::cout << "Total sum: " << total << std::endl;

    // average = total / 3;
    std::cout << "Average: " << average;

}