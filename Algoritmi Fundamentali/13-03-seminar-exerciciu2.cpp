#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void countingSort(vector<int>& arr) {
    int max_val = *max_element(arr.begin(), arr.end()) + 1;
    vector<int> count(max_val, 0);
    vector<int> result(arr.size());


    for (int num : arr) {
        count[num]++;
    }


    for (int i = 1; i < max_val; i++) {
        count[i] += count[i - 1];
    }


    for (int i = arr.size() - 1; i >= 0; i--) {
        result[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }


    arr = result;
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};

    cout << "Vectorul initial: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    countingSort(arr);

    cout << "Vectorul sortat: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}