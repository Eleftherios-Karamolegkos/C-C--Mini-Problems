#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main() {
    std::string filename;
    std::cout << "Enter the name of the file: ";
    std::cin >> filename;

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file\n";
        return 1;
    }

    std::string word;
    int max_length = 0;

    while (file >> word) {
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        int length = word.length();
        if (length > max_length) {
            max_length = length;
        }
    }

    file.close();

    std::cout << "The length of the longest word in the file is: " << max_length << std::endl;

    return 0;
}