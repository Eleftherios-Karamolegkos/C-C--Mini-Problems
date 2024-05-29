#include <iostream>
#include <string>

union EducationLevel {
    int highSchoolYears;
    int universityYears;
    int masterYears;
};

struct Person {
    std::string name;
    std::string surname;
    int age;
    std::string school;
    EducationLevel education;
};

int main() {
    Person person;

    std::cout << "Enter your name: ";
    std::cin >> person.name;

    std::cout << "Enter your surname: ";
    std::cin >> person.surname;

    std::cout << "Enter your age: ";
    std::cin >> person.age;

    std::cout << "Enter your school: ";
    std::cin >> person.school;

    person.education.highSchoolYears = 4;
    person.education.universityYears = 3;
    person.education.masterYears = 2;

    person.school = "Example School";

    std::cout << "\nInformation for " << person.name << " " << person.surname << ":" << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "School: " << person.school << std::endl;
    std::cout << "High School Years:  4 " << std::endl;
    std::cout << "University Years:  3 " << std::endl;
    std::cout << "Master's Years: 2 " << std::endl;

    return 0;
}
