#include <iostream>

using namespace std;

struct Nod {
    int data;
    Nod* next;
    
    Nod(int val) : data(val), next(nullptr) {}
};

void inserareInceput(Nod*& cap, int val) {
    Nod* nouNod = new Nod(val); 
    nouNod->next = cap; 
    cap = nouNod; 
}

void afisareLista(Nod* cap) {
    cout << "Lista: ";
    while (cap != nullptr) {
        cout << cap->data << " ";
        cap = cap->next;
    }
    cout << endl;
}

int main() {
    Nod* cap = nullptr; 

    for (int i = 5; i >= 1; --i) {
        inserareInceput(cap, i);
    }

    afisareLista(cap);

    while (cap != nullptr) {
        Nod* temp = cap;
        cap = cap->next;
        delete temp;
    }

    return 0;
}