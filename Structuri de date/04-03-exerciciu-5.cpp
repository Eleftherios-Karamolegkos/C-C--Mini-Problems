#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream fin("one.txt");
    ofstream fout("two.txt");

    char c;
    while (fin.get(c)) {
        switch (c) {
            case 'a': fout << 'e'; break;
            case 'e': fout << 'i'; break;
            case 'i': fout << 'o'; break;
            case 'o': fout << 'u'; break;
            case 'u': fout << 'a'; break;
            default: fout << c;
        }
    }
    fin.close();
    fout.close();

    return 0;
}