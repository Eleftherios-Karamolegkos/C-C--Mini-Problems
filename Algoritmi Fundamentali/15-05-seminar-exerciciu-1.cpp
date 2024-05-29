#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>   // pentru time()

using namespace std;

bool isMajorityElement(const vector<int>& vec, int candidate) {
    int count = 0;
    for (int num : vec) {
        if (num == candidate) {
            count++;
        }
    }
    return count > vec.size() / 2;
}

int findMajorityElement(const vector<int>& vec) {
    srand(time(0)); 
    int n = vec.size();
    for (int i = 0; i < 100; ++i) { 
        int randomIndex = rand() % n; 
        int candidate = vec[randomIndex]; 
        if (isMajorityElement(vec, candidate)) { 
            return candidate;
        }
    }
    return -1; 
}

int main() {
    vector<int> vec = {1, 2, 3, 3, 3, 3, 2, 3, 3}; 

    int majorityElement = findMajorityElement(vec);

    if (majorityElement != -1) {
        cout << "Elementul majoritar este: " << majorityElement << endl;
    } else {
        cout << "Nu există un element majoritar." << endl;
    }

    return 0;
}
