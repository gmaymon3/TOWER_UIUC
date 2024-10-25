// UIUC.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Cube.h"
#include "Stack.h"
#include "Game.h"

using namespace std; 

// main() function here for creating 2 cube objects. 
// Then create a stack object. 
// Then create a "game" object and solve the tower of hanoi game
int main()
{
    
    // Create 2 cubes
    Cube c; // default constructor (length 1)
    Cube c2 = c; // copy constructor
    c.setLength(4); // Set c2 to length 4

    // Print Lengths
    cout << "c1 is: "; 
    cout << c.getVolume() << endl;
    cout << "c2 is: ";
    cout << c2.getVolume() << endl;
    cout << c2 << endl; 

    //Create a stack
    Stack s1; //default constructor
    s1.push(c);
    s1.push(c2); 
    cout << s1 << endl;
    s1.removeTop(); 
    cout << s1 << endl; 

    // Create a game 
    cout << "NOW THE GAME BEGINS!" << endl; 
    Game g1; 
    cout << g1 << endl;
    g1.solve(); 

    return 0; 
}

