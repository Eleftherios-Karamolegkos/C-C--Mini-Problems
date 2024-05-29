#include <iostream>

using namespace std;
int main(){
    float r1, r2, d;

    cout << "Dati raza lui primul cerc: ";
    cin >> r1;
    cout << "Dati raza lui al doila cerc: ";
    cin >> r2;
    cout << "Dati distanca intre centrele cerculor: ";
    cin >> d;

    if((r1+r2)<d){
        cout << "Cercurile sunt indepartate.";
    }
    else if((r1+r2)==d){
        cout << "Cercurile sunt tangente.";
    }
    else if(d!=0 && d<(r1+r2)){
        cout << "Cercurile sunt secante.";
    }
    else if(d==0){
        cout << "Cercurile sunt contrencice.";
    }
    else{
        if(r1==d || r2==d){
            cout << "Un cerc este tangent inauntru celalatui.";
        }
        else{
            cout << "Un cerc este inauntru celalaltui dar nu sunt contrecice.";
        }
    }

    return 0;
}