#include <iostream>

int** initializeIntMatrix(int n) {
    int** matrix = new int* [n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = 0;
        }
    }
    return matrix;
}

double** initializeDoubleMatrix(int n) {
    double** matrix = new double* [n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new double[n];
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = 0.0;
        }
    }
    return matrix;
}

char** initializeCharMatrix(int n) {
    char** matrix = new char* [n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new char[n];
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = ' ';
        }
    }
    return matrix;
}

void printIntMatrix(int** matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

void printDoubleMatrix(double** matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

void printCharMatrix(char** matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

int findMaxIntDiagonalElement(int** matrix, int n) {
    int maxElement = matrix[0][0];

    for (int i = 0; i < n; ++i) {
        if (matrix[i][i] > maxElement) {
            maxElement = matrix[i][i];
        }
    }

    return maxElement;
}

int findMinIntDiagonalElement(int** matrix, int n) {
    int minElement = matrix[0][0];

    for (int i = 0; i < n; ++i) {
        if (matrix[i][i] < minElement) {
            minElement = matrix[i][i];
        }
    }

    return minElement;
}

int main() {
    int n = 3; 

    int** intMatrix = initializeIntMatrix(n);
    double** doubleMatrix = initializeDoubleMatrix(n);
    char** charMatrix = initializeCharMatrix(n);

    printIntMatrix(intMatrix, n);

    int maxIntElement = findMaxIntDiagonalElement(intMatrix, n);
    std::cout << "Максимальный элемент на главной диагонали: " << maxIntElement << '\n';

    int minIntElement = findMinIntDiagonalElement(intMatrix, n);
    std::cout << "Минимальный элемент на главной диагонали: " << minIntElement << '\n';

    for (int i = 0; i < n; ++i) {
        delete[] intMatrix[i];
        delete[] doubleMatrix[i];
        delete[] charMatrix[i];
    }
    delete[] intMatrix;
    delete[] doubleMatrix;
    delete[] charMatrix;

    return 0;
}
