#pragma once

#include <cstdint>
#include <vector>

struct GuessPair {
	int result;
	int guess;
};

class GameStats 
{
private:
	int32_t flips;
	int32_t wins;
	int32_t losses;
	std::vector<GuessPair> guesses;

public:
	GameStats();
	void record(int result, int guess);
	void print();
};
