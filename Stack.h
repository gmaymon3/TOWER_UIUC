#pragma once
#include <vector>
#include "cube.h"

class Stack
{
public:
	void push(const Cube& cube); 
	//Cube remove_top();
	//Cube& peekTop();
	// An overloaded operator<<, allowing us to print the stack via `cout<<`:
	friend std::ostream& operator<<(std::ostream& os, const Stack& stack);
private:
	std::vector<Cube> cubes_;  // Vector to store Cube objects. The name of the vector is cubes_. This is private to avoid actions on vector from main
};
