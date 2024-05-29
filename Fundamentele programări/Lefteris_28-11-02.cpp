# include <iostream>
# include <cmath>

using namespace std;

struct pct2d{
    float x;
    float y;
}A,B;

int main(){
    cout << "Dati coordonatele punctului A: "; cin >> A.x>>A.y;
    cout << "Dati coordonatele punctului B: "; cin >> B.x>>B.y;
    float dist=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
    cout << "Distanta intre cele doua puncte este: "<< dist;
    return 0;
}
