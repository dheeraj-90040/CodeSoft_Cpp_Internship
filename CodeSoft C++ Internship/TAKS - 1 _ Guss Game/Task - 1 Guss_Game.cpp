// Guss The Number Game - CodeSoft : Task - 1

#include <bits/stdc++.h>
using namespace std;

// Player Can Choose Their Difficulty and Play The Game In 3 Modes ! 

void easy_Guess(int target);
void medium_Guess(int target);
void hard_Guess(int target);


int main() {
    int magic_number;

    cout << "\t\t\t -- Welcome to the Number Guessing Game -- " << endl;
    cout << "\t \"I wish You All the Best\" " << endl;
    cout << "\n\n \t [ Let's Start The Game ] " << endl;

    while (true) {
        cout << "\n\t\t\tWelcome to GuessTheNumber game!" << endl;
        cout << "You have to guess a number between 1 and 100. "
                "You'll have limited chances based on the "
                "level you choose. Good Luck!" << endl;

        cout << "Choose Your Difficulty Level: \n" << endl;
        cout << "1 : Easy    - With More Chances " << endl;
        cout << "2 : Medium  - With Average Number of Chances " << endl;
        cout << "3 : Hard    - With Very Few Chances " << endl;
        cout << "0 : Exit    - If You Want to Quit the Game " << endl;

        cout << " ---------------------------------- " << endl;
        int user_Choice;
        cout << "\t\t $ I Hope You have made the Choice $ " << endl;
        cout << "Enter Your Choice: ";
        cin >> user_Choice;

        // Generate a Magic Number Each time 
        srand(time(0));
        magic_number = (rand() % 100) + 1;

        if (user_Choice == 1) {
            cout << "\t\t\t --| Great Choice |-- " << endl;
            easy_Guess(magic_number);
        } else if (user_Choice == 2) {
            cout << "\t\t\t --| Perfect Choice |-- " << endl;
            medium_Guess(magic_number);
        } else if (user_Choice == 3) {
            cout << "\t\t\t --| Tough Choice |-- " << endl;
            hard_Guess(magic_number);
        } else if (user_Choice == 0) {
            cout << "\t\t\t --| Thank You Visit Again |-- " << endl;
            return 0;
        } else {
            cout << "You have made the Wrong Choice! " << endl;
            cout << "Try to Choose the Correct Choice " << endl;
        }       
    }
    return 0;
}


void easy_Guess(int target) {
    cout << "Now Your Task is to Find the Number Between 1 - 100" << endl;
    cout << "You Have Only 10 Chances To Figure out the Number ! " << endl;
    cout << "-----------------------------------------------------------\n\n" << endl;
    int chances = 10;
    while (chances > 0) {
        int guess;
        cout << "Enter A Number: ";
        cin >> guess;
        if (guess == target) {
            cout << "Oh Great! You Have guessed the Number Correctly! It's: " << guess << endl;
            cout << "Hope You Enjoyed the Game! " << endl;
            cout << "Visit Again Thank You " << endl;
            cout << "\t\t______________________" << endl;
            return; // End the function
        } else if (guess < target) {
            cout << "Nope! You are Close. The Guessed Number " << guess << " is smaller than the Target." << endl;
            cout << "Try Again" << endl;
        } else if (guess > target) {
            cout << "Nope! You are Close. The Guessed Number " << guess << " is greater than the Target." << endl;
            cout << "Try Again" << endl;
        }
        chances--;
        cout << "\n\t || " << chances << " Chances Left ||" << endl;
        cout << "\t\t______________________" << endl;
    }
    cout << "Sorry, you have run out of chances! The correct number was " << target << "." << endl;
}

void medium_Guess(int target) {
    cout << "Now Your Task is to Find the Number Between 1 - 100" << endl;
    cout << "You Have Only 7 Chances To Figure out the Number ! " << endl;
    cout << "-----------------------------------------------------------" << endl;
    int chances = 7;
    while (chances > 0) {
        int guess;
        cout << "Enter A Number: ";
        cin >> guess;
        if (guess == target) {
            cout << "Oh Great! You Have guessed the Number Correctly! It's: " << guess << endl;
            cout << "Hope You Enjoyed the Game! " << endl;
            cout << "Visit Again Thank You " << endl;
            cout << "\t\t______________________" << endl;
            return; // End the function
        } else if (guess < target) {
            cout << "Nope! You are Close. The Guessed Number " << guess << " is smaller than the Target." << endl;
            cout << "Try Again" << endl;
        } else if (guess > target) {
            cout << "Nope! You are Close. The Guessed Number " << guess << " is greater than the Target." << endl;
            cout << "Try Again" << endl;
        }
        chances--;
        cout << "\n\t || " << chances << " Chances Left ||" << endl;
        cout << "\t\t______________________" << endl;
    }
    cout << "Sorry, you have run out of chances! The correct number was " << target << "." << endl;
}

void hard_Guess(int target) {
    cout << "Now Your Task is to Find the Number Between 1 - 100" << endl;
    cout << "You Have Only 5 Chances To Figure out the Number ! " << endl;
    cout << "-----------------------------------------------------------" << endl;
    int chances = 5;
    while (chances > 0) {
        int guess;
        cout << "Enter A Number: ";
        cin >> guess;
        if (guess == target) {
            cout << "Oh Great! You Have guessed the Number Correctly! It's: " << guess << endl;
            cout << "Hope You Enjoyed the Game! " << endl;
            cout << "Visit Again Thank You " << endl;
            cout << "\t\t______________________" << endl;
            return; // End the function
        } else if (guess < target) {
            cout << "Nope! You are Close. The Guessed Number " << guess << " is smaller than the Target." << endl;
            cout << "Try Again" << endl;
        } else if (guess > target) {
            cout << "Nope! You are Close. The Guessed Number " << guess << " is greater than the Target." << endl;
            cout << "Try Again" << endl;
        }
        chances--;
        cout << "\n\t || " << chances << " Chances Left ||" << endl;
        cout << "\t\t______________________" << endl;
    }
    cout << "Sorry, you have run out of chances! The correct number was " << target << "." << endl;
}
