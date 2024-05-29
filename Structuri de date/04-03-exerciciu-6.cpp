#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string filename = "data.txt"; // Change the filename as needed

    // Open the file
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    // Read numbers from the file
    vector<int> numbers;
    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        int num;
        while (iss >> num) {
            numbers.push_back(num);
        }
    }

    file.close();

    // Calculate the average
    double sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    double average = sum / numbers.size();

    // Print the average
    cout << "Average of the numbers: " << average << endl;

    return 0;
}