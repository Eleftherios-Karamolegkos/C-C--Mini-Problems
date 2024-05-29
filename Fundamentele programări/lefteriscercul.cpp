#include <iostream>
#include <cmath>
#include <cstdlib>  // Include the header for exit

using namespace std;

int main() {
    int a, b, c;  // Declare a, b, and c as integers
    double p, A;
    cout << "Dati a: ";
    cin >> a;
    cout << "Dati b: ";
    cin >> b;
    cout << "Dati c: ";
    cin >> c;

    if (a > 0 && b > 0 && c > 0 && a < b + c && b < a + c && c < a + b) {
        p = (double)(a + b + c) / 2;
        A = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "CMAM: " << A;
    } else {
        cout << "Nu e triunghi!";
        exit(0);
    }

    return 0;
}
