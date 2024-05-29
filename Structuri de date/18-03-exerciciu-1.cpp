#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> coada; 

    int optiune;
    do {
        cout << "\nCoada: ";
        for (int elem : coada) {
            cout << elem << " ";
        }
        cout << endl;

        cout << "\n1. Adauga un element in coada\n";
        cout << "2. Specifica noua dimensiune a cozii\n";
        cout << "0. Iesire\n";
        cout << "Alege o optiune: ";
        cin >> optiune;

        switch (optiune) {
            case 1: {
                int element;
                cout << "Introduceti elementul de adaugat in coada: ";
                cin >> element;
                coada.push_back(element); 
                break;
            }
            case 2: {
                int nouaDimensiune;
                cout << "Introduceti noua dimensiune a cozii: ";
                cin >> nouaDimensiune;
                coada.resize(nouaDimensiune);
                break;
            }
            case 0:
                cout << "Programul s-a incheiat.\n";
                break;
            default:
                cout << "Optiune invalida! Va rugam sa alegeti din nou.\n";
        }
    } while (optiune != 0);

    return 0;
}