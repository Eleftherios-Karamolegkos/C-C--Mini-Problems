#include <iostream>
#include <string>

using namespace std;

string table[11];
bool taken[11] = {false};
int getkey[11];

int key(string str) {
    int key = 0, pow = 1;
    for (char ch : str) {
        key += (ch * pow);
        pow *= 10;
        key %= 11;
        pow %= 11;
    }
    return key;
}

int main() {
    string str;
    int key_val = 0;
    for (int i = 1; i <= 6; i++) {
        do {
            cin >> str;
            key_val = key(str);
            cout << "Cheie: " << key_val << "\n";
        } while (taken[key_val]);
        table[key_val] = str;
        taken[key_val] = true;
    }
    return 0;
}