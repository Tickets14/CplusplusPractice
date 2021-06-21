#include <iostream>

int main() {
    float tipAmount;
    float tip;
    float mealPrice;
    float mealAndTip;

    std::cout << "Enter the price of meal: ";
    std::cin >> mealPrice;

    std::cout << "Enter a percent tip: ";
    std::cin >> tip;

    tipAmount = mealPrice / tip;
    std::cout << "The tip will be: " << tipAmount << std::endl;

    mealAndTip = mealPrice + tipAmount; 
    std::cout << "The total bill + tip is: " << mealAndTip;


}