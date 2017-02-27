//
//  main.cpp
//  BullsvsCows
//
//  Created by Alvino on 20/02/2017.
//  Copyright © 2017 Alvinocoding. All rights reserved.
//

#include <iostream>
#include <string>
#include "FbullvsCows.hpp"

void PrintIntro();
std::string GetGuess();
void PlayGame();
bool AskToPlayAgain();
FBullvsCows BcGame;

// int main is the entry point for the application
int main() {
    bool bPlayAgain = false;
    do
{
    PrintIntro();
    PlayGame();
    bPlayAgain = AskToPlayAgain();

}
    while(bPlayAgain);
        
    
    return 0;
}

void PrintIntro()
{
    // Introduce the game
    constexpr int WORLD_LENGTH = 9;
    std::cout << "Welcome to Bulls and Cows, a fun word game \n";
    std::cout << std::endl;
    std::cout << "Do you know the " << WORLD_LENGTH << " letter isogram I'm thinking of? \n";
    
}

std::string GetGuess()
{
    int CurrentTry = BcGame.GetCurrentTry();
    
    // get a guess from the player
    std::cout << "Try " << CurrentTry << " Enter your guess: ";
    std::string Guess = "";
    getline(std::cin, Guess);
    return Guess;

}

void PlayGame()
{

    int MaxTries = BcGame.GetMaxTries();
    std::cout << MaxTries << std::endl;
    
    for (int i=1; i <= MaxTries; i++){
        std::string Guess = GetGuess();
        std::cout << "Your guess was:" << Guess << std::endl;
        std::cout << std::endl;
        
    }
}

bool AskToPlayAgain()
{
    std::cout << " Do you want to play again (y/n)? \n";
    std::string Response = "";
    getline(std::cin, Response);
    return (Response[0] == 'y') || (Response[0] == 'Y');
    
    
    
}
