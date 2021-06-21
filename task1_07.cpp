#include <iostream>

int main() {
    const float pounds = 2.2;
    float kilogram;
    
    std::cout << "Enter your weight in Kilogram: ";
    std::cin >> kilogram;
    
    float weight = kilogram * pounds;
    std::cout << "Your weight in pounds is " << weight;
    
}