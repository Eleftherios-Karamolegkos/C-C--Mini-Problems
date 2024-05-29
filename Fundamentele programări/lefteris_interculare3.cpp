#include <iostream>

using namespace std;

int main() {
    int n, a[100], m, b[100], p, c[200];

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    int i = 0, j = 0;
    p = 0;

    // Merge two sorted arrays a and b into c
    while (i < n && j < m) {
        if (a[i] < b[j])
            c[p++] = a[i++];
        else
            c[p++] = b[j++];
    }

    // Fill remaining elements from array a
    while (i < n)
        c[p++] = a[i++];

    // Fill remaining elements from array b
    while (j < m)
        c[p++] = b[j++];

    // Print the merged array c
    for (int k = 0; k < p; ++k)
        cout << c[k] << " ";
    cout << endl;

    return 0;
}
