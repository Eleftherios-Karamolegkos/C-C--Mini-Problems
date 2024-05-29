#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    cout << "Give me a: ";
    cin >> a;
    cout << "Give me b: ";
    cin >> b;

    if (a > 0 && b > 0) {
        while (a != b) {
            if (a > b)
                a = a - b; 
            else
                b = b - a; 
        }
        cout << "GCD: " << a;
    }
    return 0;
}
