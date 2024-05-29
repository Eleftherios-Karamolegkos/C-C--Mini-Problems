#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vectorial;

    cout << "Introduceti elementele vectorului (introduceti un numar negativ pentru a opri introducerea):\n";
    int element;
    while (true) {
        cin >> element;
        if (element < 0) {
            break;
        }
        vectorial.push_back(element);
    }

    cout << "Vectorul initial: ";
    for (int elem : vectorial) {
        cout << elem << " ";
    }
    cout << endl;

    int nouaDimensiune;
    cout << "Introduceti noua dimensiune a vectorului: ";
    cin >> nouaDimensiune;
    if (nouaDimensiune >= 0 && nouaDimensiune <= vectorial.size()) {
        vectorial.resize(nouaDimensiune); 
    } else {
        cout << "Dimensiunea specificata este invalida.\n";
    }

    cout << "Vectorul dupa redimensionare: ";
    for (int elem : vectorial) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
