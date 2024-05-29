#include <iostream>
#include <cmath>

using namespace std;

int hashValue(int key, int tableSize) {
    int square = key * key;
    int digits = log10(square) + 1;
    int halfDigits = (digits / 2) + (digits % 2);
    int divisor = pow(10, halfDigits);
    int hash = (square / divisor) % tableSize;
    return hash;
}

int main() {
    const int tableSize = 11;
    int hashTable[tableSize] = {0}; 

    int values[6];
    cout << "Enter 6 integer values between 10 and 999:" << endl;
    for (int i = 0; i < 6; ++i) {
        do {
            cin >> values[i];
            if (values[i] < 10 || values[i] > 999) {
                cout << "Value must be between 10 and 999. Enter again: ";
            }
        } while (values[i] < 10 || values[i] > 999);
    }

    cout << "Hashing values using mid-square method..." << endl;
    for (int i = 0; i < 6; ++i) {
        int hash = hashValue(values[i], tableSize);
        cout << "Hash value for " << values[i] << " is: " << hash << endl;
        hashTable[hash] = values[i];
    }

    cout << "Hash Table:" << endl;
    for (int i = 0; i < tableSize; ++i) {
        cout << i << ": " << hashTable[i] << endl;
    }

    return 0;
}