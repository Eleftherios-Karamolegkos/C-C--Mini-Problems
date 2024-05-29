#include <iostream>

using namespace std;

int main(){
    int a,b,c,min;
    cout << "Give me a: ";
    cin >> a;
    cout << "Give me b: ";
    cin >> b;
    cout << "Give me c: ";
    cin >> c;
    min=a;
    if(b<min){
        min=b;
    }
    if(c<min){
        min=c;
    }
    cout << min;
    return 0;
}