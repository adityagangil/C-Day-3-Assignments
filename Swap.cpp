#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Before swapping, a = " << a << " and b = " << b << std::endl;

    // Swapping the numbers without a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "After swapping, a = " << a << " and b = " << b << std::endl;

    return 0;
}
