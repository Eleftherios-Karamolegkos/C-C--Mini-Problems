#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Dati x: " << endl;
    cin >> x;

    if (x < 3) {
        y = 5 * pow(x, 2) - 2;
    } else if (x >= 4 && x < 5) {
        y = log(x);
    } else if (x >= 5) {
        y = sin(x) + pow(3 * x, 2);
    }

    cout << "f(x) = " << y;

    return 0;
}
