#include "Game.h"

Game::Game()
{
	// Create the three empty stacks:
	for (int i = 0; i < 3; i++) {
		Stack stackOfCubes;
		stacks_.push_back(stackOfCubes);
	}
	// Create the four cubes, placing each on the [0]th stack:
	Cube c_large(4);
	Cube c_med(3);
	Cube c_small(2);
	Cube c_mini(1);

	stacks_[0].push(c_large);
	stacks_[0].push(c_med);
	stacks_[0].push(c_small);
	stacks_[0].push(c_mini);
}

void Game::solve()
{
	//Solve the game
}

//std::ostream& operator<<(std::ostream& os, const Game& game)
//{
//	//os << "Stack contains:\n";
//	//for (const Stack& stack : stack.cubes_) {
//	//	os << cube << "\n";  // Use the Cube's << operator
//	//}
//	//return os;
//}
