#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Student {
    std::string firstName;
    std::string lastName;
    double grade1;
    double grade2;

    double calculateAverage() const {
        return (grade1 + grade2) / 2.0;
    }
};

bool compareStudents(const Student& s1, const Student& s2) {
    
    if (s1.calculateAverage() != s2.calculateAverage()) {
        return s1.calculateAverage() > s2.calculateAverage();
    }

    if (s1.lastName != s2.lastName) {
        return s1.lastName > s2.lastName;
    }

    if (s1.firstName != s2.firstName) {
        return s1.firstName > s2.firstName;
    }

    return false;
}

int main() {
    std::vector<Student> students = {
        {"Nick", "Doe", 5.5, 10.0},
        {"Alice", "Smith", 7.0, 9.5},
        {"Lefteris", "Karamolegkos", 9.0, 8.0},
        {"Michael", "Williams", 8.0, 9.5},
        {"Sophia", "Brown", 4.0, 6.5},
        {"Emma", "Miller", 4.5, 7.0}
    };

    std::sort(students.begin(), students.end(), compareStudents);

    std::cout << "Students sorted by average grade and name in descending order:\n";
    for (const auto& student : students) {
        std::cout << student.lastName << ", " << student.firstName << " - Grade 1: " << student.grade1
                  << ", Grade 2: " << student.grade2 << ", Average: " << student.calculateAverage() << "\n";
    }

    return 0;
}
