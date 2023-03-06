#include "header.h"

void taskA() {
    int number_of_elements;
    std::cin >> number_of_elements;

    std::string input;
    getline(std::cin >> std::ws, input);

    std::vector<int> vector_of_digits;
    std::stringstream ss(input);
    int digit;

    while (ss >> digit) {
        vector_of_digits.push_back(digit);
    }

    sort(vector_of_digits.begin(), vector_of_digits.end());
    auto it = unique(vector_of_digits.begin(), vector_of_digits.end());
    vector_of_digits.erase(it, vector_of_digits.end());
    std::cout << vector_of_digits.size() << std::endl;

}