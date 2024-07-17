#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100+1;
    int userGuess = 0;

    cout << "Welcome to number guessing game!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;

    while(userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        if(userGuess > randomNumber) {
            cout << "Your guess is too high. Try again!" << endl;
        }
        else if(userGuess < randomNumber) {
            cout << "Your guess is too low. Try again!" << endl;
        }
        else {
            cout << "Congratulations! you guessed the number correct." << endl;
        }
    }
    return 0;
}