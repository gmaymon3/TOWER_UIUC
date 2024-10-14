#pragma once
class Cube
{
public:
	Cube();
	Cube(const Cube& obj);
	double getVolume(); 
	void setLength(double len); 

private:
	double length_; 

};

