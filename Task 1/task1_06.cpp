#include <iostream>

int main() {
    int x;

    // This is where the user will input a number
    std::cout << "Enter a number: ";
    std::cin >> x;

    // To separate every number
    std::cout << 1 * x << "---" << 2 * x << "---" << 3 * x << "---"
    << 4 * x << "---" << 5 * x;

}