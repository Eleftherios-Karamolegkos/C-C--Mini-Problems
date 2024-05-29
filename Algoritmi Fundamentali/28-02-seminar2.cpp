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

    cout << "The minimum value in the matrix is: " << minVal << endl; 
    cout << "It is located at Row " << minRow + 1 << ", Column " << minCol + 1 << "." << endl;
}

int main() {
    int rows, cols; 
    int matrix[MAX_ROWS][MAX_COLS];

    cout << "Enter the number of rows in your matrix: ";
    cin >> rows;
    cout << "Enter the number of columns in your matrix: "; 
    cin >> cols; 

    cout << "Now, enter the matrix elements row by row: " << endl; 
    for (int i = 0; i < rows; ++i) { 
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < cols; ++j) { 
            cin >> matrix[i][j]; 
        }
    }
 
    findMinPosition(matrix, rows, cols); 

    return 0; 
}
