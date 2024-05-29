#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> Parent;

int getAncestor(int x) {
    while (Parent[x] != 0)
        x = Parent[x];
    return x;
}

int main()
{
    cout << "Numarul de noduri: "; cin >> n;
    cout << "Numarul de muchii: "; cin >> m;
    Parent = vector<int>(n+1, 0);

    int x, y;
    bool cicluri = false;
    for (int i =1 ; i <= m; i++) {
        cin >> x >> y;
        int ancestorX = getAncestor(x);
        int acestorY = getAncestor(y);
        if ( ancestorX != acestorY ) {
            Parent[ancestorX] = acestorY;
        } else {
            cicluri = true;
        }
    }

    if (cicluri)
        cout << "Graful are cicluri\n";
    else
        cout << "Nu are cicluri.\n";
    return 0;
}