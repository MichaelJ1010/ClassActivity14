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
    
    return 0;
}