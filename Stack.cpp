#include "stack.h"  // Include the header file
#include <iostream> // For output (std::cout)

void Stack::push(const Cube & cube)
{
	cubes_.push_back(cube); 
}


// Overloading the << operator to print Stack objects
std::ostream& operator<<(std::ostream& os, const Stack& stack) {
    os << "Stack contains:\n";
    for (const Cube& cube : stack.cubes_) {
        os << cube << "\n";  // Use the Cube's << operator
    }
    return os;
}