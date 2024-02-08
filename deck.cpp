#include "deck.h"
#include "card.h"
#include <cstdlib> //for rand int
#include <iostream>
#include <vector>
using namespace std;

Deck::Deck() {
  
  vector<char> ranks = {'A', '2', '3', '4', '5', '6', '7',
                        '8', '9', 'T', 'J', 'Q', 'K'};
  vector<char> suits = {'S', 'H', 'C', 'D'};

  for (int suit = 0; suit < 4; suit++) {
    for (int rank = 0; rank < 13; rank++) {
      mainDeck.push_back(
          Card(ranks[rank], suits[suit])); // adds to end of vector
    }
  }
}

Card Deck::deal() {
  Card firstCard = mainDeck.back();
  mainDeck.pop_back();
  return firstCard;
}

void Deck::display() {
  for (int i = 0; i < 52; i++)
    {
      mainDeck[i].display();
      cout << ", ";
    }
    cout << endl;
}

void Deck::shuffle() {
  for (int i = 0; i < 52; i++)
    {
      int randPos = rand() % 52; //cant use? 
      swap(mainDeck[i], mainDeck[randPos]); //std::swap()
    }
}

