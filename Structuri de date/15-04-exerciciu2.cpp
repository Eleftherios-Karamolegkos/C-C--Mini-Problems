#include <iostream>
#include <vector>
using namespace std;

struct NodBST {
    int val;
    NodBST *stanga, *dreapta, *parinte;
    NodBST(int val) : val(val), stanga(nullptr), dreapta(nullptr), parinte(nullptr) {}
};

NodBST* construiesteBST(vector<int>& vectorSortat, int st, int dr, NodBST* parinte) {
    if (st > dr) return nullptr;
    int mijloc = st + (dr - st) / 2;
    NodBST* nodNou = new NodBST(vectorSortat[mijloc]);
    nodNou->parinte = parinte;
    nodNou->stanga = construiesteBST(vectorSortat, st, mijloc - 1, nodNou);
    nodNou->dreapta = construiesteBST(vectorSortat, mijloc + 1, dr, nodNou);
    return nodNou;
}

void afisareInordine(NodBST* radacina) {
    if (radacina) {
        afisareInordine(radacina->stanga);
        cout << radacina->val << " ";
        afisareInordine(radacina->dreapta);
    }
}

int main() {
    vector<int> vectorSortat = {1, 2, 3, 4, 5, 6, 7};

    NodBST* radacina = construiesteBST(vectorSortat, 0, vectorSortat.size() - 1, nullptr);

    cout << "BST-ul construit din vectorul sortat (traversare inorder): ";
    afisareInordine(radacina);
    cout << endl;

    return 0;
}