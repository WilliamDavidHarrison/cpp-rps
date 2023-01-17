#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char playAgain = 'y';

    while (playAgain == 'y') {
        int aiMove = rand() % 3;

        string aiMoveString;

        if (aiMove == 0) {
            aiMoveString = "rock";
        } else if (aiMove == 1) {
            aiMoveString = "paper";
        } else {
            aiMoveString = "scissors";
        }

        cout << "Rock, paper, or scissors? (r/p/s): ";

        char playerMove;
        cin >> playerMove;

        cout << "AI plays " << aiMoveString << "." << endl;

        string result;

        if (playerMove == 'r') {
            if (aiMove == 0) {
                result = "It's a tie!";
            } else if (aiMove == 1) {
                result = "You lose!";
            } else {
                result = "You win!";
            }
        } else if (playerMove == 'p') {
            if (aiMove == 0) {
                result = "You win!";
            } else if (aiMove == 1) {
                result = "It's a tie!";
            } else {
                result = "You lose!";
            }
        } else if (playerMove == 's') {
            if (aiMove == 0) {
                result = "You lose!";
            } else if (aiMove == 1) {
                result = "You win!";
            } else {
                result = "It's a tie!";
            }
        } else {
            result = "Invalid move. Please enter r, p, or s.";
        }

        cout << result << endl;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    return 0;
}
