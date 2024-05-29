#include <iostream>

bool isPrime(int p) {
    if (p <= 1) {
        return false;
    }

    if (p <= 3) {
        return true;
    }

    if (p % 2 == 0 || p % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= p; i += 6) {
        if (p % i == 0 || p % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int p;
    std::cout << "Enter a positive integer: ";
    std::cin >> p;

    if (isPrime(p)) {
        std::cout << p << " is prime." << std::endl;
    } else {
        std::cout << p << " is not prime." << std::endl;
    }

    return 0;
}