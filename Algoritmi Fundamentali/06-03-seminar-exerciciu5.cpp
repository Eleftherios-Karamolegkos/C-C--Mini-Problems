#include <iostream>
#include <cstdlib>

int main() {
    std::string filename;
    std::cout << "Enter the name of the file you want to open: ";
    std::cin >> filename;

    std::string command = "data.txt " + filename; 
    // std::string command = "start " + filename; // For Windows

    int status = system(command.c_str());

    if (status == -1) {
        std::cerr << "Error: Failed to open file\n";
        return 1;
    }

    return 0;
}