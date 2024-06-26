#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size(); 
    for (int i = 1; i < n; ++i) { 
        int key = arr[i]; 
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key; 
    }
}

int main() {
    vector<int> vec = {12, 11, 13, 5, 6}; 

    cout << "Vectorul initial este: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    insertionSort(vec);

    cout << "Vectorul sortat este: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}