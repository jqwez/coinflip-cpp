#include "Game/GameStats.hpp"
#include "Game/GamePlay.hpp"

int main(int argc, char** argv)
{
	GameStats* stats = new GameStats;
	GamePlay* game = new GamePlay(stats);
	game->start();
}
