#include "game.h"
#include <ctime>


Game::Game(int maxValue)
{
    maxNumber = maxValue;
    cout << "GAME CONSTRUCTOR: initialized with " << maxNumber << " as a maximum value" << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
 srand(time(0));
randomNumber = 1+rand()%maxNumber;
cout << randomNumber << endl;
numOfGuesses = 0;
         while(playerGuess != randomNumber)
         {
             numOfGuesses++;
             cout << "Give your guess between 1-" << maxNumber << endl;
             cin >> playerGuess;
             if (playerGuess > randomNumber){
                 cout << "Your guess is too big" << endl;
             } else             if (playerGuess < randomNumber){
                 cout << "Your guess is too small" << endl;
             } else {
                 cout << "Your guess is right = " << playerGuess << endl;
                 printGameResult();
             }
         }
}

void Game::printGameResult()
{
  cout << "You guessed the right answer " << randomNumber << " with " << numOfGuesses << " quesses" << endl;
}
