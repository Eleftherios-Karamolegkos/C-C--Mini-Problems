#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void findMinPosition(const int matrix[][MAX_COLS], int rows, int cols) {
    int minVal = matrix[0][0];
    int minRow = 0, minCol = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    cout << "Valoarea minima din matrice este: " << minVal << endl;
    cout << "Este situat la Row " << minRow + 1 << ", Column " << minCol + 1 << "." << endl;
}

int main() {
    int rows, cols;
    int matrix[MAX_ROWS][MAX_COLS];

    cout << "Introduceti numarul de randuri din matricea dvs:";
    cin >> rows;
    cout << "Introduceti numarul de coloane din matricea dvs: ";
    cin >> cols;

    cout << "Acum, introduceti elementele matricei rand cu rand:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << " Lasa-ma sa gasesc valoarea minima pentru tine..." << endl;
    findMinPosition(matrix, rows, cols);

    return 0;
}