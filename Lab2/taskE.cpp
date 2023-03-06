#include "header.h"

void taskE() {
    std::vector<int> myVector;
    std::string myString;

    int top = -1;
    std::getline(std::cin, myString);

    for (auto i = myString.begin(); i < myString.end(); i++) {
        if (*i == ' ') continue;

        if (std::isdigit(*i)) {

            myVector.push_back(*i - '0');
            top++;
        }

        if (*i == '+') {
            int a = myVector[top - 1] + myVector[top];
            myVector.pop_back();
            myVector.pop_back();
            myVector.push_back(a);
            top--;
        }

        if (*i == '-') {

            int a = myVector[top - 1] - myVector[top];
            myVector.pop_back();
            myVector.pop_back();
            myVector.push_back(a);
            top--;
        }

        if (*i == '*') {

            int a = myVector[top - 1] * myVector[top];
            myVector.pop_back();
            myVector.pop_back();
            myVector.push_back(a);
            top--;
        }
    }
    std::cout << myVector[0] << std::endl;
}