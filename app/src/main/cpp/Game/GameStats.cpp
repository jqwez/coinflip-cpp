#include "Game/GameStats.hpp"
#include <iostream>

GameStats::GameStats()
{
	this->flips = 0;
	this->wins = 0;
	this->losses = 0;
}

void GameStats::record(int result, int guess)
{
	this->guesses.push_back({result, guess});
	if (result == guess)
	{
		this->wins++;
	} else {
		this->losses++;
	}
}

void GameStats::print()
{
	std::cout << std::endl << "Wins: " << this->wins;
	std::cout << std::endl << "Losses: " << this->losses << std::endl;
}



