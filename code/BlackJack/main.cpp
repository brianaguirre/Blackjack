//
//  main.cpp
//  BlackJack
//
//  Created by Brian on 12/20/17.
//  Copyright © 2017 Brian. All rights reserved.
//

#include <iostream>
#include "Deck.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    

    //PLAY GAME:
    deck game1; //Deck Initialized:
    game1.handOutCards(); //Give out cards:
    
    int scoreP1 = game1.getP1T();
    int scoreP2 = game1.getP2T();
    int scoreP3 = game1.getP3T();
    int scoreDealer = game1.getDealerT();
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    
    
    //game1.getDeck();
    
    
    
    
    
    
    
    //GAME PLAY AUTOMATED:
    
    //NEED TO VERIFY RULES: normally play it so that if someone has 21, they win
    //Check player 1, if won, do nothing (could print out W), if >16, then stay, if <16 draw card:
    //If you draw a card, check if >16, stay, if over check if Ace is present within vector, change to 1, loop while(scoreP1<21).
    
    //Repeat steps for Player1 for Player 2, Player 3.
    //Once done check for those who stayed past >16, and continue step for dealer.
    
    
    return 0;
}
