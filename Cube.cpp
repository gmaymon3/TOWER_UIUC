#include "Cube.h"
#include <cmath>


Cube::Cube()
{
	length_ = 1;
}

Cube::Cube(const Cube& obj) {
	length_ = obj.length_; 
}

double Cube::getVolume()
{
	return pow(length_,3);
}

void Cube::setLength(double len)
{
	length_ = len;
}


