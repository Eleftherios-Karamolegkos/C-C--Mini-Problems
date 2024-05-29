#include <iostream>

using namespace std;

int main() {
    int a, b, r;
    cout << "Give me a: ";
    cin >> a;
    cout << "Give me b: ";
    cin >> b;
    
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    cout << "GCD: " << a << endl; 
    return 0;
}