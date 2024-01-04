#include "Game/GameStats.hpp"
#include "Game/GamePlay.hpp"

#include <iostream>


GamePlay::GamePlay(GameStats* stats)
{
	this->stats = stats;
}

void GamePlay::guess()
{
	std::cout << "Hey! Would you like to play? Guess!" << std::endl;
	this->stats->print();
	this->stats->record( 0,  0);
	this->stats->record( 1,  1);
	this->stats->record( 1,  1);
	this->stats->record( 0,  1);
	this->stats->print();
}

void GamePlay::start()
{
	this->guess();
}

