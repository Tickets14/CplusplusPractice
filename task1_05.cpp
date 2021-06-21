#include <iostream>
#include <cmath>

int main() {
    int answer;
    std::cout << "Enter a number: ";
    
    std::cin >> answer;

    std::cout <<"The square of a " << answer << " is " << pow(answer, 2);
}