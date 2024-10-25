#include "Cube.h"
#include <cmath>
#include <iostream>

// Default constructor
Cube::Cube()
{
	length_ = 1;
}

// Copy Constructor
Cube::Cube(const Cube& obj) {
	length_ = obj.length_;
}

// Constructor to initialize the length
Cube::Cube(double len){
	length_ = len; 
}

// Get the volume of the cube 
double Cube::getVolume()
{
	return pow(length_,3);
}

// Set the private variable length of the cube to new value. 
void Cube::setLength(double len)
{
	length_ = len;
}

// Overloading the << operator to print Cube objects
std::ostream& operator<<(std::ostream& os, const Cube& cube) {
	os << "Cube(length: " << cube.length_ << ")";
	return os;
}

