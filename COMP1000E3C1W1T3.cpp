#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid prefixing std::

static int s_value = 0; // Static global variable, initialized only once, retains value across function calls
int value = 0; // Global variable, initialized to 0

// Function to modify and print the values of both global variables
void trackFunctionCalls() 
{
    ++s_value; // Increment the static global variable
    cout << "Function call count for Static Global Variable (s_value): " << s_value << endl; // Output the current count of the static global variable

    ++value; // Increment the global variable
    cout << "Function call count for Global Variable (value): " << value << endl; // Output the current count of the global variable
}

int main() 
{
    // Call the function multiple times to see the effect on both variables
    trackFunctionCalls(); // First call: both variables incremented to 1
    trackFunctionCalls(); // Second call: both variables incremented to 2
    trackFunctionCalls(); // Third call: both variables incremented to 3

    return 0; // Return 0 to indicate that the program ended successfully
}
