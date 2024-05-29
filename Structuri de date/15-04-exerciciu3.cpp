#include <iostream>
using namespace std;

struct NodBST {
    int val;
    NodBST *stanga, *dreapta;
    NodBST(int val) : val(val), stanga(nullptr), dreapta(nullptr) {}
};

NodBST* inserareBST(NodBST* radacina, int val) {
    if (!radacina) return new NodBST(val);
    if (val < radacina->val) radacina->stanga = inserareBST(radacina->stanga, val);
    else radacina->dreapta = inserareBST(radacina->dreapta, val);
    return radacina;
}

int main() {
    NodBST* radacina = nullptr;
    radacina = inserareBST(radacina, 50);
    radacina = inserareBST(radacina, 30);
    radacina = inserareBST(radacina, 20);
    radacina = inserareBST(radacina, 40);
    radacina = inserareBST(radacina, 70);
    radacina = inserareBST(radacina, 60);
    radacina = inserareBST(radacina, 80);
    return 0;
}