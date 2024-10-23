#pragma once

#include "Stack.h"
#include <vector>

class Game
{
public:
	Game();
	void solve();
	bool valid_move(int idx1, int idx2);
	void moveCube(int idx1, int idx2);
	Stack& getStack(int i);
	friend std::ostream& operator<<(std::ostream& os,const Game& game);
private:
	std::vector<Stack> stacks_;
};

