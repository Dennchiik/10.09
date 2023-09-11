#include <iostream>

void countPositiveNegativeZero(const int arr[], int size, int& positiveCount, int& negativeCount, int& zeroCount) {
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positiveCount++;
        }
        else if (arr[i] < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }
}

int main() {
    int arr[] = { 10, -5, 0, 20, -8, 0, 15 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int positiveCount, negativeCount, zeroCount;
    countPositiveNegativeZero(arr, size, positiveCount, negativeCount, zeroCount);

    std::cout << "Количество положительных элементов: " << positiveCount << std::endl;
    std::cout << "Количество отрицательных элементов: " << negativeCount << std::endl;
    std::cout << "Количество нулевых элементов: " << zeroCount << std::endl;

    return 0;
}
