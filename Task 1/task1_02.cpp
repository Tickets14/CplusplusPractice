// Print a box

#include<iostream>

int main() {
    std::string line(19, '*');
    std::string blank(17, ' ');
    std::cout << line << std::endl;

    std::cout << "*";
    std::cout << blank;
    std::cout << "*" << std::endl;

    std::cout << "*";
    std::cout << blank;
    std::cout << "*" << std::endl;

    std::cout << line;


}