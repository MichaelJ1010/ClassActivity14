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
        }
    }
    return 0;
}