#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void createHelloWorldFile() {
    ofstream helloWorldFile("input.txt");
    if (helloWorldFile.is_open()) {
        helloWorldFile << "Hello, world!\n";
        helloWorldFile << "This is a small file of about 57 characters.\n";
        helloWorldFile.close();
        cout << "File 'input.txt' created successfully.\n";
    } else {
        cerr << "Error: Unable to create 'input.txt'.\n";
    }
}

int main() {
    createHelloWorldFile();

    // Open input file
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cerr << "Error: Unable to open input file." << endl;
        return 1;
    }

    ofstream outputFile("output.txt");
    if (!outputFile) {
        cerr << "Error: Unable to create or open output file." << endl;
        inputFile.close();
        return 1;
    }

    string line;
    int characterCount = 0;
    while (getline(inputFile, line)) {
        characterCount += line.length();
    }

    outputFile << "Number of characters: " << characterCount << endl;

    inputFile.close();
    outputFile.close();

    cout << "Character count has been written to output.txt." << endl;

    return 0;
}