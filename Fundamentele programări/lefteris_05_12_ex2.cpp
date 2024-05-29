#include <iostream>
#include <algorithm>
#include <string>

struct Student {
    std::string name;
    std::string surname;
    double average;
};

bool compareByAverage(const Student &a, const Student &b) {
    return a.average > b.average; // Sort in descending order based on average
}

int main() {
    const int numStudents = 5;
    Student students[numStudents] = {
        {"Alice", "Smith", 8.5},
        {"Bob", "Williams", 6.3},
        {"Toby", "Brown", 7.9},
        {"Eduard", "Cretsu", 8.6},
        {"Elefterios", "Karamolegkos", 9.0}
    };

    std::cout << "Students before sorting:" << std::endl;
    for (int i = 0; i < numStudents; ++i) {
        std::cout << students[i].name << " " << students[i].surname << " - Average: " << students[i].average << std::endl;
    }

    std::sort(students, students + numStudents, compareByAverage);

    std::cout << "\nStudents after sorting by average (descending order):" << std::endl;
    for (int i = 0; i < numStudents; ++i) {
        std::cout << students[i].name << " " << students[i].surname << " - Average: " << students[i].average << std::endl;
    }

    return 0;
}