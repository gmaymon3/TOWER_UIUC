// UIUC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cube.h"
using namespace std; 


// You need to define your main() function here!
int main()
{
    Cube c; 
    //c.setLength(4); 
    Cube c2 = c; 
    c2.setLength(4); 

    cout << "c1 is" << endl; 
    cout << c.getVolume() << endl;
    cout << "c2 is" << endl;
    cout << c2.getVolume() << endl;

    return 0; 
}

// Notes:

// If you get a compiler error saying "undefined reference to main",
// it means you haven't defined your main function correctly.

// Standard output is the system stream for normal text output on the terminal.
// One way to write to it, that you have learned, is with std::cout.

// Your main function should write the following messages to standard output:
// Hello, world!
// Greetings from Illinois!

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
