#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<vector<int>> probabilisticMatrixMultiplication(const vector<vector<int>>& A, const vector<vector<int>>& B, int num_samples) {
    int n = A.size();
    int m = B[0].size();
    int common_dim = A[0].size();

    vector<vector<int>> C(n, vector<int>(m, 0));
    srand(time(0));

    for (int i = 0; i < num_samples; ++i) {
        int k = rand() % common_dim;
        for (int row = 0; row < n; ++row) {
            for (int col = 0; col < m; ++col) {
                C[row][col] += A[row][k] * B[k][col];
            }
        }
    }

    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < m; ++col) {
            C[row][col] /= num_samples;
        }
    }

    return C;
}

int main() {
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    vector<vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int num_samples = 1000; 

    vector<vector<int>> C = probabilisticMatrixMultiplication(A, B, num_samples);

    cout << "Rezultatul înmulțirii matricelor A și B este:" << endl;
    for (const auto& row : C) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
