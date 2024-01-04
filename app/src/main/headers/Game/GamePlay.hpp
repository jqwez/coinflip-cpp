#pragma once

#include "Game/GameStats.hpp"

class GamePlay
{
private:
	GameStats* stats;
	void guess();
public:
	GamePlay(GameStats* stats);
	void start();
};
