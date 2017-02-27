//
//  FBullvsCows.cpp
//  BullsvsCows
//
//  Created by Alvino on 22/02/2017.
//  Copyright © 2017 Alvinocoding. All rights reserved.
//

#include "FBullvsCows.hpp"


void FBullvsCows::Reset(){
    return;
}
int FBullvsCows::GetMaxTries() const {
    return MyMaxTries;
}
bool FBullvsCows::GetCurrentTry() const {
    return MyCurrentTry;
}
bool FBullvsCows::IsGameWon() const {
    return 0;
}
bool FBullvsCows::CheckGuessValidity(std::string) {
    return false;
}
