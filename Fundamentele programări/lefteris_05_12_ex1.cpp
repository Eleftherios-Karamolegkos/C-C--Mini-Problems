#include <iostream>
#include <vector>

void reverseVector(std::vector<int> &vec) {
    if (vec.empty()) {
        std::cout << "Vector is empty." << std::endl;
        return;
    }

    int *start = &vec[0]; 
    int *end = &vec[vec.size() - 1];

    while (start < end) {
        
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Original Vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    reverseVector(numbers);

    std::cout << "Reversed Vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
