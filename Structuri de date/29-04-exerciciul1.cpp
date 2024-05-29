#include <iostream>
#include <vector>
using namespace std;

int hashFunction(int valoare, int dimensiuneTabela) {
    return valoare % dimensiuneTabela;
}

int main() {
    const int dimensiuneTabela = 11;
    vector<int> tabela(dimensiuneTabela, -1); 

    vector<int> valori = {12, 23, 34, 45, 56, 67};

    for (int valoare : valori) {
        int index = hashFunction(valoare, dimensiuneTabela);
        while (tabela[index] != -1) { 
            index = (index + 1) % dimensiuneTabela;
        }
        tabela[index] = valoare;
    }

    cout << "Tabelul hash:" << endl;
    for (int i = 0; i < dimensiuneTabela; ++i) {
        if (tabela[i] != -1) {
            cout << "Tabela[" << i << "]: " << tabela[i] << endl;
        } else {
            cout << "Tabela[" << i << "]: Liber" << endl;
        }
    }

    return 0;
}