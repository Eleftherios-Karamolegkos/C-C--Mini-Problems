#include <iostream>

using namespace std;

int main() {
    
    int numar;
    cout << "Give a number: ";
    cin >> numar;

    int cifraMax = 0;
    while ( numar > 0 ){
        int cifra = numar % 10;
        if (cifra > cifraMax){
            cifraMax =cifra;
        }
        numar /=10;
    }   
    cout << "Bigest number is: " << cifraMax;
 return 0;
}