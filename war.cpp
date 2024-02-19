// William Luu
// Class (CECS 325-02)
// Program 1 - Game of War
// 2/15/2024
//I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include "card.h"
#include "deck.h"
using namespace std;

int main() {

  string playerOne;
  string playerTwo;

  int playerOneWins = 0;
  int playerTwoWins = 0;
  int ties = 0;

  Deck deck; //object of Deck class
  
  cout << "Enter the name of the first player: ";
  cin >> playerOne;
  cout << "Enter the name of the second player: ";
  cin >> playerTwo;
  cout << "\n" ;

  cout << "Original Deck \n";
  deck.display();
  cout << "\n";
  cout << "Shuffled Deck \n";
  deck.shuffle();
  deck.display();

  for (int games = 1; games < 27; games++)
    {
      Card cardOne = deck.deal();
      Card cardTwo = deck.deal();
      
      cout << endl;
      cout << "Game " << games << endl;
      cout << "--------" << endl;
      cout << "\t" << playerOne << "=>";
      cardOne.display();
      cout << endl;
      cout << "\t" << playerOne << "=>";
      cardTwo.display();
      cout << endl;

      int winner = cardOne.compare(cardTwo);
      
      if (winner == 1)
      {
        cout << playerOne << "=> Winner" << endl;
        playerOneWins++;
      }
      else if (winner == 0)
      {
        cout << "Tie game" << endl;
        ties++;
      }
      else if (winner == -1)
      {
        cout << playerTwo << "=> Winner" << endl;
        playerTwoWins++;
      }
      
    }
  
    cout << "-----" << "Final Stats" << "-----" << endl;
    cout << "\t\t" << playerOne << " vs. " << playerTwo << endl;
    cout << "Wins\t" <<  playerOneWins << "\t\t\t" << playerTwoWins << endl;
    cout << "Loses\t" <<  playerTwoWins << "\t\t\t" << playerOneWins << endl;
    cout << "Ties\t" <<  ties << "\t\t\t" << ties << endl;
}