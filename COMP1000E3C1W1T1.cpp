#include <iostream> // Include the iostream library for input and output
#include <cmath>    // Include the cmath library for mathematical functions (like sqrt and pow)
using namespace std; // Use the standard namespace to avoid prefixing std::

// Function to calculate the Euclidean distance from the origin (0,0) to a point (x,y)
double calculateDistance(double x, double y) 
{
    // Calculate the distance using the Euclidean formula
    // d = sqrt(x^2 + y^2)
    return sqrt(pow(x, 2) + pow(y, 2));
}

int main() 
{
    double x, y; // Declare variables to hold the coordinates

    // Prompt the user to enter the coordinates for the first point
    cout << "Enter coordinates for point (x, y): ";
    cin >> x >> y; // Read the coordinates from user input

    // Calculate and display the distance from the origin to the first point
    cout << "Distance from (0, 0) to (" << x << ", " << y << ") is: " << calculateDistance(x, y) << endl;

    // Prompt the user to enter the coordinates for a second point
    cout << "Enter coordinates for another point (x, y): ";
    cin >> x >> y; // Read the new coordinates from user input

    // Calculate and display the distance from the origin to the second point
    cout << "Distance from (0, 0) to (" << x << ", " << y << ") is: " << calculateDistance(x, y) << endl;

    return 0; // Return 0 to indicate that the program ended successfully
}
