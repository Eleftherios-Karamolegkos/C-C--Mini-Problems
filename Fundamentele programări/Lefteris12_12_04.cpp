#include <iostream>

using namespace std;

int* solve(int n, int v[]) {
    int* multime = new int[n + 1];
    int j = 0;

    for (int i = 0; i < n; i++) {
        bool inSet = false;

        for (int k = 0; k < j; k++) {
            if (v[i] == multime[k]) {
                inSet = true;
                break;
            }
        }

        if (!inSet)
            multime[j++] = v[i];
    }

    multime[0] = j;
    return multime;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int v[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cout << "Give me " << i + 1 << " element: ";
        cin >> v[i];
    }
    int* m = solve(n, v);

    cout << "Unique elements: ";
    for (int i = 0; i < m[0]; i++)
        cout << m[i + 1] << " ";
    cout << "\n";

    delete[] m;
    return 0;
}