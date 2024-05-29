#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int p;
    cout << "Dami un numar: ";
    cin >> p;

    int k = 1;
    for (int i = 2; i <= sqrt(p); i++) {
        if (p % i == 0) {
            k = 0;
            break;
        }
    }
    if (k == 1 && p > 1) {
        cout << "e prim";
    } else {
        cout << "nu e prim";
    }
    return 0;
}
