#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    static const int dimensiuneTabela = 13; 
    vector<int> tabela; 

    int hashFunction(int valoare) {
        return valoare % dimensiuneTabela;
    }

public:
    HashTable() {
        tabela.resize(dimensiuneTabela, -1);
    }

    int skipProbe(int index, int i) {
        return (index + (i * 3)) % dimensiuneTabela; 
    }

    void inserareValoare(int valoare) {
        int index = hashFunction(valoare); 
        int i = 0;
        while (tabela[index] != -1) { 
            i++;
            index = skipProbe(hashFunction(valoare), i); 
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

    vector<int> valori1 = {13, 27, 43, 46, 61};
    for (int valoare : valori1) {
        tabela.inserareValoare(valoare);
    }

    vector<int> valori2 = {26, 82, 85, 124};
    for (int valoare : valori2) {
        tabela.inserareValoare(valoare);
    }

    tabela.afisareTabela();

    return 0;
}
