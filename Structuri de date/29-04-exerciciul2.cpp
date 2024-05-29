#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    static const int dimensiuneTabela = 11; 
    vector<vector<long long>> tabela; 

public:
    HashTable() {
        tabela.resize(dimensiuneTabela);
    }

    int hashFunction(long long cnp) {
        return cnp % dimensiuneTabela;
    }

    void inserareCNP(long long cnp) {
        int segment = hashFunction(cnp); 
        tabela[segment].push_back(cnp); 
    }

    void afisareTabela() {
        cout << "Tabela hash:" << endl;
        for (int i = 0; i < dimensiuneTabela; ++i) {
            cout << "Segment " << i << ": ";
            for (const long long& cnp : tabela[i]) {
                cout << cnp << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable tabela;

    vector<long long> cnp = {1234567890123, 2345678901234, 3456789012345, 4567890123456, 5678901234567, 6789012345678};
    for (const long long& nrCNP : cnp) {
        tabela.inserareCNP(nrCNP);
    }

    tabela.afisareTabela();

    return 0;
}