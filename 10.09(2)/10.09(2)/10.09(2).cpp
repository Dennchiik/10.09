#include <iostream>

double calculateAverage(const int arr[], int size) {
    if (size <= 0) {
        std::cerr << "Некорректный размер массива." << std::endl;
        return 0.0;
    }

    double sum = 0.0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum / size;
}

int main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);

    double average = calculateAverage(arr, size);

    std::cout << "Среднее арифметическое элементов массива: " << average << std::endl;

    return 0;
}
