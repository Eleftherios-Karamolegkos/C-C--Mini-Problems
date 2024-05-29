#include <iostream>

using namespace std;

int main() {
    int eminescu = 1850;
    int guess, dif;

    while (guess != eminescu) {
        cout << endl << "Dati  anul de nastere a lui Eminescu: ";
        cin >> guess;
        if (guess == eminescu) {
            cout << endl << "Felicitari, sti anul de nastere a lui Eminescu!";
        } else if (guess > eminescu) {
            dif = guess - eminescu;
            if (dif <= 50) {
                cout << endl << "cu " << dif << " ani mai devreme a fost nascut";
            } else if (dif > 50 && dif < 100) {
                cout << endl << "Eminescu a fost nascut secolul trecut";
            } else {
                cout << endl << "Mai invata!";
            }
        } else if (guess < eminescu) {
            dif = eminescu - guess;
            if (dif <= 50) {
                cout << endl << "a fost nascut cu " << dif << " ani mai tarziu";
            } else if (dif > 50 && dif < 100) {
                cout << endl << "Eminescu a fost nascut secolul urmator";
            } else {
                cout << endl << "Mai invata!";
            }
        }
    }
    return 0;
}
