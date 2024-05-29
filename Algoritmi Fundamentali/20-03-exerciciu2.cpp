#include <iostream>
#include <vector>
#include <stack>
#include <utility> 

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); 
    return (i + 1);
}

void quickSortIterativ(vector<int>& arr, int low, int high) {
    stack<pair<int, int>> stiva;
    stiva.push(make_pair(low, high));

    while (!stiva.empty()) {
        int left = stiva.top().first;
        int right = stiva.top().second;
        stiva.pop();

        if (left < right) {
            int pi = partition(arr, left, right);

            stiva.push(make_pair(left, pi - 1));
            stiva.push(make_pair(pi + 1, right));
        }
    }
}

void afisareVector(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    cout << "Vectorul initial: ";
    afisareVector(arr);

    quickSortIterativ(arr, 0, arr.size() - 1);

    cout << "Vectorul sortat: ";
    afisareVector(arr);

    return 0;
}