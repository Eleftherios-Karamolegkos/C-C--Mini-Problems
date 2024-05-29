#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, muchii1, muchii2;
    cout << "Numarul de noduri al Grafului 1: "; cin >> n;
    cout << "Pentru a fi subgraf, Graful 2 trebuie sa aiba " << n-1 << " noduri.\n";
    cout << "Numarul de muchii al primului Graf: "; cin >> muchii1;
    vector< vector<int> > Graf1(n+1, vector<int>(n+1, 0));

    int x, y;
    cout << "Muchii Graf 1: \n";
    vector<bool> NodConectatGraf1(n+1, false);
    for (int i = 1; i <= muchii1; i++) {
        cin >> x >> y;
        Graf1[x][y] = Graf1[y][x] = 1;
        NodConectatGraf1[x] = true;
        NodConectatGraf1[y] = true;
    }

    cout << "Numarul de muchii al doile Graf: "; cin >> muchii2;
    cout << "Muchii Graf 2: \n";
    vector< vector<int> > Graf2(n+1, vector<int>(n+1, 0));
    vector<bool> NodConectatGraf2(n+1, false);

    for (int i = 1; i <= muchii2; i++) {
        cin >> x >> y;
        Graf2[x][y] = Graf2[y][x] = 1;
        NodConectatGraf2[x] = true;
        NodConectatGraf2[y] = true;
    }

    if (muchii2 >= muchii1) {
        cout << "Graful 2 nu este subgraf.\n";
        return 0;
    }

    int nodEliminat = 0;
    for (int i = 1; i <= n; i++) {
        if (NodConectatGraf2[i] && !NodConectatGraf1[i]) {
            cout << "Graful 2 nu este subgraf.\n";
            return 0;
        } else if (NodConectatGraf1[i] && !NodConectatGraf2[i]) {
                nodEliminat = i;
        }
    }
    if (nodEliminat == 0) {
        cout << "Graful 2 nu este subgraf.\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (Graf2[i][j] && !Graf1[i][j]) {
                cout << "Graful 2 nu este subgraf.\n";
                return 0;
            }
        }
    }
    cout << "Graful 2 este subgraf al Grafului 1.\n";
    return 0;
}