#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

bool endsWithRE(const std::string& word) {
    return word.size() >= 2 && word.substr(word.size() - 2) == "re";
}

int main() {
    std::string inputFileName, outputFileName;
    std::cout << "Enter the name of the input file: ";
    std::cin >> inputFileName;

    std::ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open input file\n";
        return 1;
    }

    std::cout << "Enter the name of the output file: ";
    std::cin >> outputFileName;

    std::ofstream outputFile(outputFileName);
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open output file\n";
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            if (endsWithRE(word)) {
                outputFile << word << std::endl;
            }
        }
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Words ending with 're' have been written to " << outputFileName << std::endl;

    return 0;
}