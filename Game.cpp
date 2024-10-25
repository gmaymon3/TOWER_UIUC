#include "Game.h"
#include <iostream> // For output (std::cout)
#include <vector>
using namespace std;

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

bool Game::valid_move(int idx1, int idx2)
{
	// Check if the stack is empty - that would be a failure
	bool empty_err = stacks_[idx1].isEmpty(); 
	bool larger_err = 0; // initialize larger_err
	if (empty_err) {

	}
	else {
		// Are we attempting to put the larger cube on the smaller cube? 
		if (stacks_[idx2].isEmpty()) {
			larger_err = 0; // If the over stack is empty - it's an acceptable move
		}
		else {
			Cube cube1 = stacks_[idx1].getTop();
			Cube cube2 = stacks_[idx2].getTop();
			if (cube2.getVolume() > cube1.getVolume()) {
				larger_err = 0; // no error if we are moving a smaller cube on to a larger cube
			}
			else {
				larger_err = 1; // error if we are moving a larger cube on to a smaller cube
			}
		}
	}

	// Return if the move is valid or not
	bool valid_move = !(empty_err || larger_err); 

	return valid_move;
}

// Return the stack of cubes at specific stack
Stack& Game::getStack(int i)
{
	return stacks_[i];
}

// Move a cube in the game from a stack to another stack
void Game::moveCube(int idx1, int idx2)
{
	Cube cube = stacks_[idx1].getTop(); 
	stacks_[idx1].removeTop();
    stacks_[idx2].push(cube); 
	cout << *this << endl; 
}

std::ostream& operator<<(std::ostream& os, const Game& game)
{
	os << "NEW MOVE - GAME NOW CONTAINS:\n";
	int i = 0;
	for (const Stack& stack : game.stacks_) {
		i++;
		os << "Stack number: " << i << "\n";
		os << stack << "\n";  // Use the stacks << operator
	}
	return os;
}

void Game::solve()
{
	//Solve the game 
	while (stacks_[2].size() != 4) {
		if (valid_move(0, 1)) {
			moveCube(0, 1);
		}
		else {
			moveCube(1, 0);
		}
		if (valid_move(0, 2)) {
			moveCube(0, 2);
		}
		else {
			moveCube(2, 0);
		}
		if (valid_move(1, 2)) {
			moveCube(1, 2);
		}
		else {
			moveCube(2, 1);
		}
	}
}


