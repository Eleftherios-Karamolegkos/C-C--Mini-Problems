#include <iostream>

void primeFactors(int n) {
    for (int i = 2; i * i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            std::cout << i;
            if (count > 1) {
                std::cout << "^" << count;
            }
            std::cout << " ";
        }
    }
    if (n > 1) {
        std::cout << n;
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "Please enter a positive integer greater than 1." << std::endl;
        return 1;
    }

    std::cout << "Prime factors of " << n << " are: ";
    primeFactors(n);

    return 0;
}
