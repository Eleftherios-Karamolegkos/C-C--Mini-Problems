#include <iostream>

using namespace std;

bool perf(int n) {
    int s = 0;
    for (int d = 1; d < n; d++) { 
        if (n % d == 0) {
            s += d; 
        }
    }
    if (s == n) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int m;
    cin >> m;
    int a[101];
    for (int i = 0; i < m; i++) { 
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) { 
        if (perf(a[i])) { 
            cout << a[i] << " este numar perfect" << endl;
        } else {
            cout << a[i] << " nu este numar perfect" << endl;
        }
    }
    return 0;
}