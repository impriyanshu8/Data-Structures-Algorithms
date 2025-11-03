#include <stdio.h>

char board[3][3]; // 3x3 board for Tic-Tac-Toe
char currentPlayer = 'X'; // Start with player X

void initializeBoard() {
    // Initialize the board with numbers 1-9
    int count = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '0' + count; // Convert integer to character
            count++;
        }
    }
}

void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|"); // Print column separator
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n"); // Print row separator
    }
    printf("\n");
}

int isValidMove(int move) {
    if (move < 1 || move > 9) return 0; // Invalid move if out of range

    int row = (move - 1) / 3;
    int col = (move - 1) % 3;

    return (board[row][col] != 'X' && board[row][col] != 'O'); // Valid if the spot is not already taken
}

void makeMove(int move) {
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    board[row][col] = currentPlayer; // Mark the board with the current player's symbol
}

int checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
            return 1;
    }

    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
        return 1;

    return 0; // No winner
}

int checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return 0; // Empty spot found, not a draw
        }
    }
    return 1; // No empty spots, it's a draw
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // Toggle player
}

int main() {
    int move;
    initializeBoard();

    printf("Welcome to Tic-Tac-Toe!\n");
    printBoard();

    while (1) {
        printf("Player %c, enter your move (1-9): ", currentPlayer);
        scanf("%d", &move);

        if (!isValidMove(move)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        makeMove(move);
        printBoard();

        if (checkWin()) {
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        if (checkDraw()) {
            printf("It's a draw!\n");
            break;
        }

        switchPlayer();
    }

    return 0;
}
