#include <iostream>
#include "card.h"
using namespace std;

//constructor
Card::Card(char rank, char suit) : rank(rank), suit(suit) {
  // similar to __init__ in python, self.rank = rank and self.suit = suit
}

//similar to def display(self)
void Card::display() {
  if (rank == 'T')
  {
    cout << "10" << suit;
  }
  else
  {
    cout << rank << suit;
  }

}

//SUITS DONT MATTER
int Card::compare(Card otherCard) {

  if (rank > otherCard.rank)
  {
    return 1;
  }
  else if (rank == otherCard.rank)
  {
    return 0;
  }
  else if (rank < otherCard.rank)
  {
    return -1;
  }
  return 100; //For ERROR
}