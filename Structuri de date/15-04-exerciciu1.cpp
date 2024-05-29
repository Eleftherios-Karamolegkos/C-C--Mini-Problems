#include <iostream>
using namespace std;

struct NodBST {
    int val;
    NodBST *stanga, *dreapta;
    NodBST(int val) : val(val), stanga(nullptr), dreapta(nullptr) {}
};

bool cautaBST(NodBST* radacina, int val) {
    if (!radacina) return false;
    if (radacina->val == val) return true;
    if (val < radacina->val) return cautaBST(radacina->stanga, val);
    return cautaBST(radacina->dreapta, val);
}

int main() {
    NodBST* radacina = new NodBST(50);
    radacina->stanga = new NodBST(30);
    radacina->dreapta = new NodBST(70);
    radacina->stanga->stanga = new NodBST(20);
    radacina->stanga->dreapta = new NodBST(40);
    radacina->dreapta->stanga = new NodBST(60);
    radacina->dreapta->dreapta = new NodBST(80);

    int valoareCautata = 30;

    if (cautaBST(radacina, valoareCautata)) cout << "Valoarea " << valoareCautata << " a fost gasita in BST.\n";
    else cout << "Valoarea " << valoareCautata << " NU a fost gasita in BST.\n";

    return 0;
}