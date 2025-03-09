#include <iostream>
#include <limits>

using namespace std;

char board[3][3];
char currentMarker;
int currentPlayer;
int player1Wins = 0, player2Wins = 0, ties = 0;

void initializeBoard() {
    char start = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = start++;
}

void drawBoard() {
    cout << "\nTic-Tac-Toe Board:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentMarker;
        return true;
    }
    return false;
}

int checkWinner() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return currentPlayer;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return currentPlayer;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return currentPlayer;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return currentPlayer;
    return 0;
}

void swapPlayer() {
    currentMarker = (currentMarker == 'X') ? 'O' : 'X';
    currentPlayer = (currentPlayer == 1) ? 2 : 1;
}

void displayStats() {
    cout << "\nGame Statistics:\n";
    cout << "Player 1 Wins: " << player1Wins << "\n";
    cout << "Player 2 Wins: " << player2Wins << "\n";
    cout << "Ties: " << ties << "\n";
}

void gameLoop() {
    initializeBoard();
    int winner = 0, moves = 0;
    while (moves < 9) {
        drawBoard();
        int slot;
        cout << "Player " << currentPlayer << " (" << currentMarker << ") - Choose slot: ";
        cin >> slot;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Enter a number between 1-9.\n";
            continue;
        }

        if (slot < 1 || slot > 9 || !placeMarker(slot)) {
            cout << "Invalid move! Try again.\n";
            continue;
        }
        moves++;
        winner = checkWinner();
        if (winner) {
            drawBoard();
            cout << "Player " << winner << " wins!\n";
            (winner == 1) ? player1Wins++ : player2Wins++;
            return;
        }
        swapPlayer();
    }
    drawBoard();
    cout << "It's a tie!\n";
    ties++;
}

void startGame() {
    cout << "Player 1, choose marker (X or O): ";
    cin >> currentMarker;
    while (currentMarker != 'X' && currentMarker != 'O') {
        cout << "Invalid input. Choose X or O: ";
        cin >> currentMarker;
    }
    currentPlayer = (currentMarker == 'X') ? 1 : 2;
    gameLoop();
}

void menu() {
    int choice;
    while (true) {
        cout << "\n=== Tic-Tac-Toe ===\n";
        cout << "1. Play Game\n";
        cout << "2. View Stats\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            startGame();
        } else if (choice == 2) {
            displayStats();
        } else if (choice == 3) {
            cout << "Exiting game. Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice! Try again.\n";
        }
    }
}

int main() {
    menu();
    return 0;
}
