#include <iostream>
using namespace std;

struct NodBST {
    int val;
    NodBST *stanga, *dreapta;
    NodBST(int val) : val(val), stanga(nullptr), dreapta(nullptr) {}
};

NodBST* stergeNod(NodBST* radacina, int val) {
    if (radacina == nullptr) return radacina;

    if (val < radacina->val) radacina->stanga = stergeNod(radacina->stanga, val);
    else if (val > radacina->val) radacina->dreapta = stergeNod(radacina->dreapta, val);
    else {
        if (radacina->stanga == nullptr) {
            NodBST* temp = radacina->dreapta;
            delete radacina;
            return temp;
        } else if (radacina->dreapta == nullptr) {
            NodBST* temp = radacina->stanga;
            delete radacina;
            return temp;
        }
        NodBST* temp = radacina->dreapta;
        while (temp->stanga != nullptr) temp = temp->stanga;
        radacina->val = temp->val;
        radacina->dreapta = stergeNod(radacina->dreapta, temp->val);
    }
    return radacina;
}

int main() {
    NodBST* radacina = new NodBST(50);
    radacina->stanga = new NodBST(30);
    radacina->dreapta = new NodBST(70);
    radacina->stanga->stanga = new NodBST(20);
    radacina->stanga->dreapta = new NodBST(40);
    radacina->dreapta->stanga = new NodBST(60);
    radacina->dreapta->dreapta = new NodBST(80);

    int valoareDeSters = 30;
    radacina = stergeNod(radacina, valoareDeSters);

    return 0;
}