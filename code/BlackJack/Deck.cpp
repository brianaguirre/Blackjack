//
//  Deck.cpp
//  BlackJack
//
//  Created by Brian on 12/20/17.
//  Copyright © 2017 Brian. All rights reserved.
//

#include "Deck.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib> //rand()
#include <random>


using namespace std;


//Manually input the cards:
deck::deck(){
    
    //Loop for adding hearts:
    for (int i = 1; i<11; i++){
        card heartsNum("hearts", to_string(i), i, false);
        cardDeck.push_back(heartsNum);
    }
    
    card jackH("hearts", "Jack", 10, false);
    card queenH("hearts", "Queen", 10, false);
    card kingH("hearts", "King", 10, false);
    card aceH("hearts", "Ace", 11, false);
    
    cardDeck.push_back(jackH);
    cardDeck.push_back(queenH);
    cardDeck.push_back(kingH);
    cardDeck.push_back(aceH);
    
    //Loop for adding Diamonds:
    for (int i = 1; i<11; i++){
        card diamondNum("diamonds", to_string(i), i, false);
        cardDeck.push_back(diamondNum);
    }
    
    card jackD("diamonds", "Jack", 10, false);
    card queenD("diamonds", "Queen", 10, false);
    card kingD("diamonds", "King", 10, false);
    card aceD("diamonds", "Ace", 11, false);
    
    cardDeck.push_back(jackD);
    cardDeck.push_back(queenD);
    cardDeck.push_back(kingD);
    cardDeck.push_back(aceD);
    
    //Loop for adding Clover:
    for (int i = 1; i<11; i++){
        card cloversNum("clovers", to_string(i), i, false);
        cardDeck.push_back(cloversNum);
    }
    
    card jackC("clovers", "Jack", 10, false);
    card queenC("clovers", "Queen", 10, false);
    card kingC("clovers", "King", 10, false);
    card aceC("clovers", "Ace", 11, false);
    
    cardDeck.push_back(jackC);
    cardDeck.push_back(queenC);
    cardDeck.push_back(kingC);
    cardDeck.push_back(aceC);
    
    //Loop for adding Spades:
    for (int i = 1; i<11; i++){
        card spadesNum("spades", to_string(i), i, false);
        cardDeck.push_back(spadesNum);
    }
    
    card jackS("spades", "Jack", 10, false);
    card queenS("spades", "Queen", 10, false);
    card kingS("spades", "King", 10, false);
    card aceS("spades", "Ace", 11, false);
    
    cardDeck.push_back(jackS);
    cardDeck.push_back(queenS);
    cardDeck.push_back(kingS);
    cardDeck.push_back(aceS);
    
}

//METHODS TO AUTOMATE PLAYING:
//Outputs card and then sets card to drawn.
void deck::handOutCards(){
    
    //Loop twice to start the game:
    for (int i=0; i<2; i++){
        
        //CREATE RANDOM:
        int  ranNum = 0;
        srand(time(0));
        
        //Player 1:
        bool p1Card = false;
        while (p1Card == false){
            ranNum = rand() % 52;
            
            //Testing:************
            
            if (cardDeck.at(ranNum).getDrawn() == false){
                cardDeck.at(ranNum).setDrawn(true);
                p1.push_back(cardDeck.at(ranNum));
                p1T = p1T + cardDeck.at(ranNum).getVal();
                p1Card = true;
            }
           
        }
        
        //Player 2:
        bool p2Card = false;
        while (p2Card == false){
            ranNum = rand() % 52;
            //Testing:************
            
            if (cardDeck.at(ranNum).getDrawn() == false){
                cardDeck.at(ranNum).setDrawn(true);
                p2.push_back(cardDeck.at(ranNum));
                p2T = p2T + cardDeck.at(ranNum).getVal();
                p2Card = true;
            }
            
        }
        
        //Player 3:
        bool p3Card = false;
        while (p3Card == false){
            ranNum = rand() % 52;
            //Testing:************
            
            if (cardDeck.at(ranNum).getDrawn() == false){
                cardDeck.at(ranNum).setDrawn(true);
                p3.push_back(cardDeck.at(ranNum));
                p3T = p3T + cardDeck.at(ranNum).getVal();
                p3Card = true;
            }
           
        }
        
        //Dealer:
        bool dealerCard = false;
        while (dealerCard == false){
            ranNum = rand() % 52;
            //Testing:************
            
            if (cardDeck.at(ranNum).getDrawn() == false){
                cardDeck.at(ranNum).setDrawn(true);
                dealer.push_back(cardDeck.at(ranNum));
                dealerT = dealerT + cardDeck.at(ranNum).getVal();
                dealerCard = true;
            }
           
        }
        
        
        
    }//For Loop
    
    //Testing: Print out player cards:: 
    
    cout<< "Player 1 cards: " << p1.at(0).getName() << " " << p1.at(0).getSuit() << ", " << p1.at(1).getName() << " " << p1.at(1).getSuit() << " TOTAL: " << p1T << endl;
    cout<< "Player 2 cards: " << p2.at(0).getName() << " " << p2.at(0).getSuit() << ", " << p2.at(1).getName() << " " << p2.at(1).getSuit() << " TOTAL: " << p2T << endl;
    cout<< "Player 3 cards: " << p3.at(0).getName() << " " << p3.at(0).getSuit() << ", " << p3.at(1).getName() << " " << p3.at(1).getSuit() << " TOTAL: " << p3T << endl;
    cout<< "Dealer cards: " << dealer.at(0).getName() << " " << dealer.at(0).getSuit() << ", " << dealer.at(1).getName() << " " << dealer.at(1).getSuit() << " TOTAL: " << dealerT << endl;
    
}//HandoutCards


//Get Scores:

int deck::getP1T(){
    return p1T;
}

int deck::getP2T(){
    return p2T;
}

int deck::getP3T(){
    return p3T;
}

int deck::getDealerT(){
    return dealerT;
}

//Gives player another card when done:

card deck::hitMe(){
    int  ranNum = 0;
    
    bool foundCard = false;
    while (foundCard == false){
        ranNum = rand() % 52;
        //Testing:************
        
        
        if (cardDeck.at(ranNum).getDrawn() == false){
            cardDeck.at(ranNum).setDrawn(true);
            foundCard = true;
        }
    
    }
    
    return cardDeck.at(ranNum);
    
}


//Access Deck:'
//VERIFIES THAT CARDS HAVE BEEN DRAWN INDIVIDUALLY.
void deck::getDeck(){
    for (std::vector<card>::iterator it = cardDeck.begin() ; it != cardDeck.end(); ++it){
        std::cout << ' ' << it->getSuit() << ' ' << it->getName() << ' ' << it->getVal() << ' ' << it->getDrawn() << endl;
    }
     
}
