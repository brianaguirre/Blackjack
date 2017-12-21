//
//  Card.hpp
//  BlackJack
//
//  Created by Brian on 12/20/17.
//  Copyright © 2017 Brian. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>
#include <string>

using namespace std;

class card{
    
  
private:
    string suit;
    string name;
    int val;
    bool drawn;
    
public:
    //Set card info:
    card(string s, string n, int v, bool d);
    void setDrawn(bool d);
    
    
    //Get card info
    string getSuit();
    string getName();
    int getVal();
    bool getDrawn();
    
};

#endif /* Card_hpp */
