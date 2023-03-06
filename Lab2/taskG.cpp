#include "header.h"

void taskG() {
    std::set<std::string> mySet;
    std::string op, str;

    while (std::cin >> op >> str) {
        if (op == "+") {
            mySet.insert(str);
        }

        else if (op == "-") {
            mySet.erase(str);
        }

        else if (op == "?") {
            std::cout << (mySet.count(str) > 0 ? "YES" : "NO") << std::endl;
        }

        else if (op == "#") {
            break;
        }
    }
}