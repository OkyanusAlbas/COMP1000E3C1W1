#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid prefixing std::

void trackFunctionCalls() 
{
    static int s_value = 0; // Static variable, initialized only once to track the count
    ++s_value; // Increment the count each time the function is called
    cout << "Function call count: " << s_value << endl; // Output the current count
}

int main() 
{
    // Call the function multiple times to demonstrate the behavior of the static variable
    trackFunctionCalls(); // First call: count should be 1
    trackFunctionCalls(); // Second call: count should be 2
    trackFunctionCalls(); // Third call: count should be 3

    return 0; // Return 0 to indicate that the program ended successfully
}
