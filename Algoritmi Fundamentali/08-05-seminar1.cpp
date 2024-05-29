#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    static const int dimensiuneTabela = 11; 
    vector<int> tabela; 

    int hashFunction(int valoare, int i) {
        return (valoare + i) % dimensiuneTabela; 
    }

public:
    HashTable() {
        tabela.resize(dimensiuneTabela, -1);
    }

    void inserareValoare(int valoare) {
        int i = 0;
        int index = hashFunction(valoare, i); 
        while (tabela[index] != -1) { 
            i++;
            index = hashFunction(valoare, i); 
        }
        tabela[index] = valoare; 
    }

    void afisareTabela() {
        cout << "Tabela hash:" << endl;
        for (int i = 0; i < dimensiuneTabela; ++i) {
            cout << "Tabela[" << i << "]: ";
            if (tabela[i] != -1) {
                cout << tabela[i];
            } else {
                cout << "Liber";
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable tabela;

    vector<int> valori1 = {24, 53, 28, 48};
    for (int valoare : valori1) {
        tabela.inserareValoare(valoare);
    }

    vector<int> valori2 = {68, 64, 35, 125};
    for (int valoare : valori2) {
        tabela.inserareValoare(valoare);
    }

    tabela.afisareTabela();

    return 0;
}
