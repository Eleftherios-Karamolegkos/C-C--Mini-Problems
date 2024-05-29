#include <iostream>

double scalarProduct(const double a[], const double b[], int size) {
    double result = 0.0;
    for (int i = 0; i < size; ++i) {
        result += a[i] * b[i];
    }
    return result;
}

int main() {
    const int size = 3;  // Assuming vectors are of size 3, change accordingly
    double vector1[size] = {2.0, 3.0, 4.0};
    double vector2[size] = {5.0, 6.0, 7.0};

    if (size <= 0) {
        std::cout << "Vectors should have a positive size." << std::endl;
        return 1;
    }

    if (sizeof(vector1) / sizeof(vector1[0]) != sizeof(vector2) / sizeof(vector2[0])) {
        std::cout << "Vectors should be of the same size." << std::endl;
        return 1;
    }

    double result = scalarProduct(vector1, vector2, size);

    std::cout << "The scalar product of the vectors is: " << result << std::endl;

    return 0;
}
