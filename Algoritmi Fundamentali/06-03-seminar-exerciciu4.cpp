#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

int main() {
    const double USD_RATE = 15.50;
    const double EURO_RATE = 18.20;

    std::ifstream rFile("RValues.txt");
    if (!rFile.is_open()) {
        std::cerr << "Error: Unable to open R values file\n";
        return 1;
    }

    std::ofstream outputFile("EquivalentValues.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open output file\n";
        return 1;
    }

    std::string rString;
    while (std::getline(rFile, rString)) {
        double rValue = std::stod(rString);
        double usdValue = rValue * USD_RATE;
        double euroValue = rValue * EURO_RATE;

        outputFile << "R " << rValue << " is equivalent to USD " << std::fixed << std::setprecision(2) << usdValue << " and Euro " << euroValue << std::endl;
    }

    rFile.close();
    outputFile.close();

    std::cout << "Equivalent values have been written to EquivalentValues.txt\n";

    return 0;
}