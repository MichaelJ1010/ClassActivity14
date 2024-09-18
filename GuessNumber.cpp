#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    int secretNumber;
    int guess;
    bool correctGuess = false;

    srand(time(0));
    secretNumber = rand() % 10 + 1;

    cout << "I'm thinking of a number from 1 to 10. Try to guess my number!" << endl;

    while(!correctGuess){
        cin >> guess;
        if(guess == secretNumber){
            cout << "You guessed it!";
            correctGuess = true;
        }else{
            if(guess > secretNumber){
                cout << "Guess is too high. Guess Lower!" << endl;
            }else{
                cout << "Guess is too low. Guess Higher!" << endl;
            }
        }
    }
    return 0;
}