//
//  Card.cpp
//  BlackJack
//
//  Created by Brian on 12/20/17.
//  Copyright © 2017 Brian. All rights reserved.
//

#include "Card.hpp"


//Create Card:
card::card(string s, string n, int v, bool d){
    suit = s;
    name = n;
    val = v;
    drawn = d;
}

//Set drawn value:

void card::setDrawn(bool d){
    drawn = d;
}


//GET CARD INFO:
string card::getSuit(){
    return suit;
}


string card::getName(){
    return name;
}

int card::getVal(){
    return val;
}


bool card::getDrawn(){
    return drawn;
}
