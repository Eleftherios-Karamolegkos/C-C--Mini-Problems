#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream f("in.txt");
    if (!f) {
        cout << "Error: File does not exist." << endl;
        return 1;
    } else {
        ofstream g("out.txt");
        string line;
        string invers = "";
        while (getline(f, line)) {
            invers = line + "\n" + invers;
        }
        g << invers;
        f.close();
        g.close();
        return 0;
    }
}