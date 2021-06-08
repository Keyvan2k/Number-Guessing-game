#include <cstdlib>

#include <iostream>

#include <string>

using namespace std;

int main() {
    int num_to_guess = rand() % 500; // randomizing the number to guess in a range from 0 to 500
    cout << "The number to guess should be in a range from 0 to 500.";
    int guess;
    while (guess != num_to_guess) { // while loop for checking if the game ended or not.
        int guess_try;
        if (guess < num_to_guess) { // checking if the number is lower 
            cout << "Wrong number.\n";
            cout << "Number is lower than the number to guess.\n";
            cout << "Insert a number: ";
            cin >> guess;
        }

        if (guess > num_to_guess) { // checking if the number is higher 
            cout << "Wrong number.\n";
            cout << "The number you typed was lower than the number to guess.\n";
            cout << "Insert a number: ";
            cin >> guess;
        }

        guess_try++; // checking how many time user tried to guess the number.

        if (guess_try == 10) { // if the times to guess the number are equal to 10 then the user lost the game
            int choice;
            cout << "You lost.\nWould you try to play again?";
            cout << "1)Exit\n2)Play again\n";
            cin >> choice;
            num_to_guess = rand() % 500;
            while (choice != 1) {
                system("CLS");
                switch (choice) {
                case 1:
                    exit(0);
                    break;
                case 2:
                    num_to_guess = rand() % 500;
                    while (guess != num_to_guess) { // while loop for checking if the game ended or not.
                        int guess_try;
                        if (guess < num_to_guess) { // checking if the number is lower 
                            cout << "Wrong number.\n";
                            cout << "Number is lower than the number to guess.\n";
                            cout << "Insert a number: ";
                            cin >> guess;
                        }

                        if (guess > num_to_guess) { // checking if the number to guess is higher
                            cout << "Wrong number.\n";
                            cout << "The number you typed was lower than the number to guess.\n";
                            cout << "Insert a number: ";
                            cin >> guess;
                        }
                        if (guess_try == 10) { // user loses after 10 try 
                            cout << "You lost.";
                            exit(0);
                        }

                        break;

                        default:
                        break;
                    }

                }

            }
        }

    }
    if (guess == num_to_guess) { // if the guess equals to the number, then the user won.
        cout << "You won.";
    }
}