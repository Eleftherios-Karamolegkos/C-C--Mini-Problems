#include <iostream>
#include <vector>
#include <list>
using namespace std;

class HashTable {
private:
    static const int dimensiuneTabela = 11; 
    vector<list<int>> tabela; 

    int hashFunction(int valoare) {
        return valoare % dimensiuneTabela;
    }

public:
    HashTable() {
        tabela.resize(dimensiuneTabela);
    }

    void inserareValoare(int valoare) {
        int index = hashFunction(valoare); 
        tabela[index].push_back(valoare); 
    }

    void afisareTabela() {
        cout << "Tabela hash:" << endl;
        for (int i = 0; i < dimensiuneTabela; ++i) {
            cout << "Tabela[" << i << "]: ";
            for (int valoare : tabela[i]) {
                cout << valoare << " ";
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
