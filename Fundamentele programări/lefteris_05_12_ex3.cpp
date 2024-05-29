#include <iostream>
#include <vector>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

int main() {
    
    std::vector<double(*)(double, double)> operations;

    operations.push_back(&add);
    operations.push_back(&subtract);
    operations.push_back(&multiply);
    operations.push_back(&divide);

    double num1 = 10.5;
    double num2 = 5.0;

    for (auto operation : operations) {
        double result = operation(num1, num2);
        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}