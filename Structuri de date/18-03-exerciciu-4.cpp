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

void stergeElement(Nod*& cap, int val) {
    if (cap == nullptr) { 
        cout << "Lista este goala. Nu exista element de sters.\n";
        return;
    }

    if (cap->data == val) { 
        Nod* temp = cap;
        cap = cap->next;
        delete temp;
        cout << "Elementul " << val << " a fost sters cu succes din lista.\n";
        return;
    }

    Nod* prev = cap;
    Nod* current = cap->next;

    while (current != nullptr) {
        if (current->data == val) {
            prev->next = current->next;
            delete current;
            cout << "Elementul " << val << " a fost sters cu succes din lista.\n";
            return;
        }
        prev = current;
        current = current->next;
    }

    cout << "Elementul " << val << " nu a fost gasit in lista.\n";
}

int main() {
    Nod* cap = nullptr; 

    for (int i = 5; i >= 1; --i) {
        inserareInceput(cap, i);
    }

    afisareLista(cap);

    stergeElement(cap, 3);

    afisareLista(cap);

    while (cap != nullptr) {
        Nod* temp = cap;
        cap = cap->next;
        delete temp;
    }

    return 0;
}
