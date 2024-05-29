#include <iostream>

using namespace std;

int main() {
    int s = 0; 
    int i = 1; 
    int h;
    cout << "Dati h: ";
    cin >> h;

    while (i <= h) {
        if (i % 2 == 0) { 
            s = s - (double)1 / i;
        } else {
            s = s + (double)1 / i;
        }
        i++; 
    }

    cout << s;

    return 0;
}
