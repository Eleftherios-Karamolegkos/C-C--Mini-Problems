#include <iostream>

using namespace std;

int main()  {


    struct complex  {
        double preal;
        double pimg;
    };
    
    complex z1,z2,zs,zp;

    cout << "Dati z1 partea reala: ";
    cin >> z1.preal;
    cout << "Dati z1 partea imaginara: ";
    cin >> z1.pimg;

    cout << "Dati z2 partea reala: ";
    cin >> z2.preal;
    cout << "Dati z2 partea imaginara: ";
    cin >> z2.pimg;

    zs.preal = z1.preal + z2.preal;
    zs.pimg = z1.pimg + z2.pimg;

    zp.preal = (z1.preal * z2.preal) - (z1.pimg * z2.pimg);
    zp.pimg = (z1.preal * z2.preal) + (z1.pimg * z2.pimg);

    cout << "Suma: " << zs.preal << '\n';
    cout << zs.pimg << 'i';

    cout << '\n';

    cout << "produs: " << zp.preal << '\n';
    cout << zp.pimg << 'i';
}