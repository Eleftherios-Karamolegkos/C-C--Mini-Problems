#include <iostream>

using namespace std;

int ogl(int n){
    int o=0;
    while(n){
        o=o*10+n%10;
        n/=10;
    }
    return o;
}

int main(){
    int n;
    cout << "Dati numar: ";
    cin >> n;
    cout << "Resultat: " << ogl(n);
    return 0; 
}