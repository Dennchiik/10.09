#include <iostream>

int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return findGCD(b, a % b);
    }
}

int main() {
    int num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    int gcd = findGCD(num1, num2);

    std::cout << "Наибольший общий делитель: " << gcd << std::endl;

    return 0;
}
