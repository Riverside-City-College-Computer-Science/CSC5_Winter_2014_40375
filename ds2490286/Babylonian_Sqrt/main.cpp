/*
 * David W. Smith - 1/9/14
 * Interpolation of Fahrenheit / Celsius
*/

//System Libraries
#include <iostream>
#include <math.h>
using namespace std;

// Global constants

// Function prototypes

// Execution begins here
int main(int argc, char** argv) {
    //Declare local variables
    float x,r,guess;
    //Input the value to find the sq root of
    cout << "Which number do you wish to find the ";
    cout  << "Square Root of? ";
    cin >> x;
    // Find the first approximation
    guess = x/2;
    r = x/guess;
    guess = (guess + r)/2;
    //Output the first approximation
    cout << "First approximation: " << guess << endl;
    // Find the second approximation
    guess = x/2;
    r = x/guess;
    guess = (guess + r)/2;
    //Output the second approximation
    cout << "Second approximation: " << guess << endl;
    // Find the shird approximation
    guess = x/2;
    r = x/guess;
    guess = (guess + r)/2;
    //Output the third approximation
    cout << "Third approximation: " << guess << endl;
    //Output exact answer
    cout << "Exact answer: " << sqrt(x) << endl;
    // Exit, stage right.
    return 0;
}

