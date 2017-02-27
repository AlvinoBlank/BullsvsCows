//
//  FBullvsCows.hpp
//  BullsvsCows
//
//  Created by Alvino on 22/02/2017.
//  Copyright © 2017 Alvinocoding. All rights reserved.
//
#pragma once
#include <string>


class FBullvsCows {
public:
    int GetMaxTries() const;
    bool GetCurrentTry() const;
    bool IsGameWon() const;
    
    bool CheckGuessValidity(std::string); //TODO make a more rich return value
    void Reset(); // TODO make a more rich return value
    
private:
    int MyCurrentTry = 1;
    int MyMaxTries = 5;
};

 
