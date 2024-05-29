#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int j = 1;
    int h; // You should declare 'h'

    cout << "Enter the value of h: ";
    cin >> h;

    while (i <= h) {
        j = 1;
        while (j <= i) {
            cout << j << "  ";
            j++;
        }
        i++;
        cout << endl; // Use 'endl' to insert a newline
    }

    return 0;
}

