// Tic Tac Toe Game - CodeSoft : Task - 3

#include <bits/stdc++.h>
using namespace std;

string player1_Name, player2_Name;
const char player1 = 'X';
const char player2 = 'O';

// Methods ! 

void displayRules();
void Game_Starter();
void display_board(vector<vector<char>> &board);
int checkFreeSpace(vector<vector<char>> &board);
char checkWinner(vector<vector<char>> &board);
void Celebrate(char currentPlayer);



int main() {
    while (true) {
        cout << "\t\t\t -- Welcome to Tic Tac Toe Game ! -- \t\t\t" << endl;
        cout << "\n Let's See the Game Rules! \n" << endl;
        displayRules();
        cout << endl;
        cout << "# Player1 - Enter Your Name : ['X'] : ";
        cin >> player1_Name;
        cout << "# Player2 - Enter Your Name : ['O'] : ";
        cin >> player2_Name;
        
        cout << "\n Let's Begin The Game!" << endl;
        
        int choices;
        cout << "\t\n :: Game Menu ! :: " << endl;
        cout << "1. Start The Game" << endl;
        cout << "2. Exit Game" << endl;
        
        cout << "\nEnter Your Choice : ";
        cin >> choices;
        switch (choices) {
            case 1:
                cout << "Hello \n\tWelcome Let's Start The Game :: " << endl;
                Game_Starter();
                break;
            case 2:
                cout << "Thank You For Playing!" << endl;
                cout << "Goodbye!" << endl;
                exit(0);
                break;
            default:
                cout << "Choose the Correct Menu Item!" << endl;
                break;
        }
    }
    return 0;
}


// Check for a winner
char checkWinner(vector<vector<char>> &board) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0]; // Return the winner, 'X' or 'O'
    }
    // Check columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j])
            return board[0][j]; // Return the winner, 'X' or 'O'
    }
    // Check diagonals
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    return ' ';
}

// Count the number of free spaces available
int checkFreeSpace(vector<vector<char>> &board) {
    int freespace = 9;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != ' ')
                freespace--;
        }
    }
    return freespace;
}

// Celebrate the winner
void Celebrate(char currentPlayer) {
    string winnerName = currentPlayer == 'X' ? player1_Name : player2_Name;
    cout << "\n\t\tCongratulations Player " << winnerName << "!" << endl;
    cout << "\t\tYou are the Tic Tac Toe champion!" << endl;

    cout << "  __     __          __          ___       _ " << endl;
    cout << "  \\ \\   / /          \\ \\        / (_)     | |" << endl;
    cout << "   \\ \\_/ /__  _   _   \\ \\  /\\  / / _ _ __ | |" << endl;
    cout << "    \\   / _ \\| | | |   \\ \\/  \\/ / | | '_ \\| |" << endl;
    cout << "     | | (_) | |_| |    \\  /\\  /  | | | | |_|" << endl;
    cout << "     |_|\\___/ \\__,_|     \\/  \\/   |_|_| |_(_)" << endl;
    
    cout << "Well Played " << winnerName << ", your strategies are remarkable." << endl;
    cout << "Well played! Let's play again soon!\n\n" << endl;
}

// Display the board
void display_board(vector<vector<char>> &board) {
    cout << "  1   2   3" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << " ---+---+---" << endl;
    }
}

// Display the game rules
void displayRules() {
    cout << "  $ Here are the rules of the game: \n" << endl;
    cout << "1. The game is played on a grid that's 3 squares by 3 squares." << endl;
    cout << "2. Player 1 is X, Player 2 (or the computer) is O. Players take turns putting their marks in empty squares." << endl;
    cout << "3. The first player to get 3 of their marks in a row (up, down, across, or diagonally) is the winner." << endl;
    cout << "4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a draw." << endl;
    cout << "5. To make a move, enter the row and column numbers of the empty square where you want to place your mark." << endl;
    cout << "6. The game board positions are labeled as follows:" << endl;
    cout << "   1,1 | 1,2 | 1,3" << endl;
    cout << "  ------+-----+------" << endl;
    cout << "   2,1 | 2,2 | 2,3" << endl;
    cout << "  ------+-----+------" << endl;
    cout << "   3,1 | 3,2 | 3,3" << endl;
    cout << "\t\nGood luck and have fun!" << endl;
}

// Start the game
void Game_Starter() {
    char current_player = player1; // by default 1st player is X
    vector<vector<char>> board = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    cout << "\t\t\t -- Welcome to Tic Tac Toe Game ! -- \t\t\t" << endl;
    while (winner == ' ' && checkFreeSpace(board) != 0) { // Continue until all moves are done or a player wins
        int choice;
        display_board(board);
        cout << "Enter Your Choice : [ 1 - 9 ]  " << current_player << " : ";
        cin >> choice;
        if (choice < 1 || choice > 9) {
            cout << "Invalid Move | Try Again !" << endl;
            continue;
        }
        
        int row = (choice - 1) / 3;  // Generate correct row number based on input
        int col = (choice - 1) % 3;  // Generate correct column number based on input
        
        if (board[row][col] != ' ') {
            cout << "Cell Already Occupied | Try Different Move" << endl;
            continue;
        }
        board[row][col] = current_player;
        winner = checkWinner(board);
        current_player = (current_player == 'X') ? player2 : player1; // Switch the current player
    }
    // Final Condition
    if (winner != ' ') {
        Celebrate(winner);
    } else {
        cout << "\t\t\t --- Game Tie ! Try Again -- \t\t\t" << endl;
    }
}

