#include <iostream>
#include <vector>

using namespace std;

class TicTacToe {
private:
    vector<vector<char>> board;
    char currentPlayer;

public:
    TicTacToe() : board(3, vector<char>(3, ' ')), currentPlayer('X') {}

    void printBoard() {
        cout << "Current board:\n";
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j];
                if (j < 2) cout << '|';
            }
            cout << '\n';
            if (i < 2) cout << "-----\n";
        }
    }

    bool placeMark(int row, int col) {
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            cout << "Invalid move. Try again.\n";
            return false;
        }
        board[row][col] = currentPlayer;
        return true;
    }

    bool checkWin() {
        // Check rows, columns, and diagonals
        for (int i = 0; i < 3; ++i) {
            if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
                (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
                return true;
            }
        }
        if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
            (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
            return true;
        }
        return false;
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    void play() {
        int row, col;
        for (int turns = 0; turns < 9; ++turns) {
            printBoard();
            cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
            cin >> row >> col;

            if (placeMark(row, col)) {
                if (checkWin()) {
                    printBoard();
                    cout << "Player " << currentPlayer << " wins!\n";
                    return;
                }
                switchPlayer();
            }
            else {
                --turns; // Stay on the same turn if invalid move
            }
        }
        printBoard();
        cout << "It's a draw!\n";
    }
};

int main() {
    TicTacToe game;
    game.play();
    return 0;
}
