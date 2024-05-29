#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char ch1, ch2;
    int identic = 1;

    ifstream f("fis1.txt"), g("fis2.txt");

    if (!f || !g) {
        cout << "Eroare la deschiderea fisierelor.\n";
        return 1;
    }

    while (f.get(ch1) && g.get(ch2)) { 
        if (ch1 != ch2) { 
            identic = 0; 
            break;
        }
    }

    if (identic && f.eof() && g.eof()) {
        cout << "Fisierele sunt identice.\n";
    } else {
        cout << "Fisierele nu sunt identice.\n";
    }

    f.close();
    g.close();

    return 0;
}