#include <iostream>
using namespace std;

int main() {
    int a, b;
    double x;
    
    cout << "Dati a: ";
    cin >> a;
    cout << "Dati b: ";
    cin >> b;
    
    if (a == 0) {
        if (b == 0) {
            cout << "Este o infinitate de solutii";
        } else {
            cout << "Nu este solutie";
        }
    } else {
        x = -static_cast<double>(b) / a;
        cout << "x = " << x;
    }

    return 0;
}