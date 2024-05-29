#include <iostream>
#include <string>

struct Telephone {
    std::string model;
    double price; 
};

Telephone selectCheaperPhone(const Telephone& phone1, const Telephone& phone2) {
    if (phone1.price < phone2.price) {
        return phone1;
    } else {
        return phone2;
    }
}

int main() {
    Telephone phoneA, phoneB;

    std::cout << "Enter details for Phone A:\n";
    std::cout << "Enter model name: ";
    std::cin >> phoneA.model;
    std::cout << "Enter price: $";
    std::cin >> phoneA.price;

    std::cout << "\nEnter details for Phone B:\n";
    std::cout << "Enter model name: ";
    std::cin >> phoneB.model;
    std::cout << "Enter price: $";
    std::cin >> phoneB.price;

    Telephone cheaperPhone = selectCheaperPhone(phoneA, phoneB);

    std::cout << "\nThe cheaper phone is: " << cheaperPhone.model << std::endl;
    std::cout << "Price: $" << cheaperPhone.price << std::endl;

    return 0;
}
