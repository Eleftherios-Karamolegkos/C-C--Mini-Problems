#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    std::cout << "Perfect cubes up to " << n << " are: " << std::endl;

    for (int i = 1; i * i * i <= n; ++i) {
        int cube = i * i * i;
        std::cout << cube << " ";
    }

    std::cout << std::endl;

    return 0;
}
