#ifndef CARD_H
#define CARD_H

class Card 
{

  private:
    //constructor
    char rank;
    char suit;

  public:
    //methods
    Card(char rank, char suit);
    void display();
    int compare(Card);

};

#endif

// 'C' for Clubs, 'D' for Diamonds, 'H' for Hearts, 'S' for Spades

// '2' to '9', 'T' for 10, 'J' for Jack, 'Q' for Queen, 'K' for King, 'A' for Ace  