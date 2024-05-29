#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.1415;

double volume(int radius, int generators) {
    return pi * radius * radius * generators;
}

double lateralArea(int radius, int generators) {
    return 2 * pi * radius * generators;
}

double totalArea(int radius, int generators) {
    return lateralArea(radius, generators) + 2 * pi * radius * radius;
}

int main() {
    int radius, generators;
    cout << "Give me the Volume: ";
    cin >> radius;
    cout << "Give me Generators: ";
    cin >> generators;

    cout << "Volume: " << volume(radius, generators) << "\n";
    cout << "Total Area: " << totalArea(radius, generators) << "\n";

    return 0;
}