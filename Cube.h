#pragma once
#include <string>     
#include <iostream>   

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

