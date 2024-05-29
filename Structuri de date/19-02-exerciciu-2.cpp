#include <iostream>

using namespace std;

int main() {
    int m;
    cout << "Give me a number: ";
    cin >> m;
    
    int n = m;
    for (int i = 2; i <= m; i++) {
        int pow = 0;
        while (n % i == 0) {
            pow++;
            n /= i;
        }
        if (pow > 0) {
            cout << i << "^" << pow << "\n";
        }
    }
    return 0;
}
