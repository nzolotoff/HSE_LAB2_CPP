#include "header.h"

void taskC() {
    std::deque<int> player1, player2;

    for (int i = 0; i < 5; i++) {
        int card;
        std::cin >> card;
        player1.push_back(card);
    }

    for (int i = 0; i < 5; i++) {
        int card;
        std::cin >> card;
        player2.push_back(card);
    }

    int moves = 0;

    while (!player1.empty() && !player2.empty() && moves < 1000000) {
        int card1 = player1.front();
        player1.pop_front();
        int card2 = player2.front();
        player2.pop_front();

        if (card1 == 0 && card2 == 9) {
            player1.push_back(card1);
            player1.push_back(card2);
        }

        else if (card1 == 9 && card2 == 0) {
            player2.push_back(card1);
            player2.push_back(card2);
        }

        else if (card1 > card2) {
            player1.push_back(card1);
            player1.push_back(card2);
        }

        else {
            player2.push_back(card1);
            player2.push_back(card2);
        }
        moves++;
    }

    if (moves == 1000000) {
        std::cout << "botva" << std::endl;
    }

    else if (player2.empty()) {
        std::cout << "first " << moves << std::endl;
    }
    else {
        std::cout << "second " << moves << std::endl;
    }
}
