#include <iostream>

using namespace std;

int main() {
    int m[100][100], n;
    cin >> n;

    // Input matrix elements
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];

    int x = 0;
    // Calculate sum of elements on the secondary diagonal
    for (int i = 0; i < n; i++)
        x += m[i][n - 1 - i];

    cout << x << endl;
    return 0;
}
