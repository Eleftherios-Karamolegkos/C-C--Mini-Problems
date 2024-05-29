#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void createHelloFile() {
    ofstream helloFile("hello.txt");
    if (helloFile.is_open()) {
        helloFile << "Hello, this is the content of hello.txt!\n";
        helloFile.close();
        cout << "File 'hello.txt' created successfully.\n";
    } else {
        cerr << "Error: Unable to create 'hello.txt'.\n";
    }
}

int main() {
    createHelloFile();

    string sourceFileName = "hello.txt", destinationFileName;
    ifstream sourceFile;
    ofstream destinationFile;
    string line;

    cout << "Enter the name of the destination file: ";
    getline(cin, destinationFileName);

    sourceFile.open(sourceFileName);
    if (!sourceFile) {
        cerr << "Error: Unable to open source file." << endl;
        return 1;
    }

    destinationFile.open(destinationFileName);
    if (!destinationFile) {
        cerr << "Error: Unable to create destination file." << endl;
        sourceFile.close();
        return 1;
    }

    while (getline(sourceFile, line)) {
        destinationFile << line << endl;
    }

    sourceFile.close();
    destinationFile.close();

    cout << "File copied successfully." << endl;

    return 0;
}