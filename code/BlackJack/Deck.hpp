//
//  Deck.hpp
//  BlackJack
//
//  Created by Brian on 12/20/17.
//  Copyright © 2017 Brian. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp

#include <stdio.h>
#include <string>
#include "Card.hpp"
#include <vector>

using namespace std;



#endif /* Deck_hpp */


class deck{
    
private:
    //Deck Card:
    vector<card> cardDeck;
    
    //Players
    vector<card> p1;
    vector<card> p2;
    vector<card> p3;
    vector<card> dealer;
    
    //Player Total:
    int p1T = 0;
    int p2T = 0;
    int p3T = 0;
    int dealerT = 0;
    
public:
    
    //Manually input the cards:
    deck();
    
    
    //Get Scores:
    
    int getP1T();
    int getP2T();
    int getP3T();
    int getDealerT();
    
    //METHODS TO AUTOMATE PLAYING:
    void handOutCards();
    card hitMe();
    
    //Access Deck:
    void getDeck();
    
};
