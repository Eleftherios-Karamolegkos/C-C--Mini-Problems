#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, muchii1, muchii2;
    cout << "Numarul de noduri al Grafurilor: "; cin >> n;
    cout << "Numarul de muchii al primului Graf: "; cin >> muchii1;
    vector< vector<int> > Graf1(n+1, vector<int>(n+1, 0));

    int x, y;
    cout << "Muchii Graf 1: \n";
    for (int i = 1; i <= muchii1; i++) {
        cin >> x >> y;
        Graf1[x][y] = Graf1[y][x] = 1;
    }

    cout << "Numarul de muchii al doile Graf: "; cin >> muchii2;
    cout << "Muchii Graf 2: \n";
    vector< vector<int> > Graf2(n+1, vector<int>(n+1, 0));
    for (int i = 1; i <= muchii2; i++) {
        cin >> x >> y;
        Graf2[x][y] = Graf2[y][x] = 1;
    }

    if (muchii2 >= muchii1) {
        cout << "Graful 2 nu este graf partial.\n";
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (Graf2[i][j] && !Graf1[i][j]) {
                cout << "Graful 2 nu este graf partial.\n";
                    return 0;
            }
        }
    }
    cout << "Graful 2 este graf partial al Grafului 1.\n";
    return 0;
}