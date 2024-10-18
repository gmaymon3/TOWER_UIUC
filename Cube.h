#pragma once
#include <string>     // For std::string
#include <iostream>     // For std::string

class Cube
{
public:
	Cube();
	Cube(const Cube& obj);
	Cube(double length); 
	double getVolume(); 
	void setLength(double len); 

	// An overloaded operator<<, allowing us to print the stack via `cout<<`:
	friend std::ostream& operator<<(std::ostream& os, const Cube& cube);

private:
	double length_; 

};

