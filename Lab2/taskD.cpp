#include "header.h"

bool openBracket(char left) {
    return ('(' == left || '{' == left || '[' == left);
}

bool closeBracket(char left, char right) {
    return (('(' == left && ')' == right) || ('[' == left && ']' == right) || ('{' == left && '}' == right));
}

void taskD() {
    std::string input;

    getline(std::cin >> std::ws, input);

    std::stack<char> stack_of_brackets;

    std::string::const_iterator it;

    char bracket;

    for (it = input.begin(); it != input.end(); ++it) {
        bracket = *it;

        if (openBracket(bracket)) {
            stack_of_brackets.push(bracket);
        }

        else if (closeBracket(stack_of_brackets.top(), bracket)) {
            stack_of_brackets.pop();
        }

        else {
            stack_of_brackets.push(bracket);
            break;
        }

    }

    if (stack_of_brackets.empty()) {
        std::cout<<"yes";
    }

    else {
        std::cout<<"no";
    }

}