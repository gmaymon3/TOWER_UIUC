#include "stack.h"  // Include the header file
#include <iostream> // For output (std::cout)

// Use the native push back from vectors to add a cube to the stack
void Stack::push(const Cube & cube)
{
	cubes_.push_back(cube); 
}

// Return the cube at the top of the stack
Cube& Stack::getTop()
{
    return cubes_.back(); 
}

// Remove the cube at the top of the stack
void Stack::removeTop() {
    cubes_.pop_back(); 
}

// Return if the stack is empty
bool Stack::isEmpty()
{
    return cubes_.empty();
}

// Return the size of the stack cubes
int Stack::size(){
    return cubes_.size(); // Return the size of the internal vector
}

// Overloading the << operator to print Stack objects
std::ostream& operator<<(std::ostream& os, const Stack& stack) {
    os << "Stack contains:\n";
    for (const Cube& cube : stack.cubes_) {
        os << cube << "\n";  // Use the Cube's << operator
    }
    return os;
}