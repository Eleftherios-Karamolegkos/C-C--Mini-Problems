#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector< vector<int> > Graf;
vector<int> visited;
vector<int> comp;

void DFS(int node) {
    visited[node] = true;

    for (auto adj : Graf[node]) {
        if (!visited[adj])
            DFS(adj);
    }
}

int main()
{
    cout << "Numarul de noduri: "; cin >> n;
    cout << "Numarul de muchii: "; cin >> m;
    Graf = vector<vector<int>>(n+1);
    visited = vector<int>(n+1);

    int x, y;
    for (int i =1 ; i <= m; i++) {
        cin >> x >> y;
        Graf[x].push_back(y);
        Graf[y].push_back(x);
    }

    for (int i = 1; i <= n; i++) {
        if ( !visited[i] ) {
            comp.push_back(i);
            DFS(i);
        }
    }

    cout << "Se adauga " << comp.size()-1 << " muchii.\n";
    for (int i = 1; i < comp.size(); i++) {
        cout << comp[i-1] << " " << comp[i] << "\n";
    }

    return 0;
}