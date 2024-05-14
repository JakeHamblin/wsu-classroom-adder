#include <iostream>

int main() {
    int firstNum;
    int secondNum;
    int result;

    std::cout << "Please enter a number to add to: ";
    std::cin >> firstNum;

    std::cout << "Please enter a number to add to your first number: ";
    std::cin >> secondNum;

    result = firstNum + secondNum;

    std::cout << firstNum << " + " << secondNum << " = " << result << std::endl;
}
