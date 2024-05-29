#include <iostream>

using namespace std;

int main() {
    int x, xmirror;
    int y=0;
    cout << "Dati numar: ";
    cin >> x;
    while (x>0){
        xmirror = x%10;
        y=y*10+xmirror;
        x=x/10;
    }
    cout << y;
    return 0;
}