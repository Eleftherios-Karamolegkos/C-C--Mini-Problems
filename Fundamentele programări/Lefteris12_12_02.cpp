#include <iostream>
#include <cmath>

using namespace std;

bool isTriangle(int l1, int l2, int l3) {
    return (l1 + l2 > l3) && (l2 + l3 > l1) && (l3 + l1 > l2);
}

double calculateArea(int l1, int l2, int l3) {
    double p = (l1 + l2 + l3) / 2.0;
    return sqrt(p * (p - l1) * (p - l2) * (p - l3));
}

int main() {
    int l1, l2, l3;

    cout << "Dati l1: ";
    cin >> l1;
    cout << "Dati l2: ";
    cin >> l2;
    cout << "Dati l3: ";
    cin >> l3;

    if (isTriangle(l1, l2, l3)) {
        cout << "Este triungi!" << endl;
        double area = calculateArea(l1, l2, l3);
        cout << "Aria triunghiului: " << area << endl;
    } else {
        cout << "Nu este triunghi!" << endl;
    }

    return 0;
}