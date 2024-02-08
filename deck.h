#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <vector>

class Deck 
{
  public:
    //methods
    Deck();
    Card deal();
    void display();
    void shuffle();

  private:
    std::vector<Card> mainDeck;
    
  
};

#endif