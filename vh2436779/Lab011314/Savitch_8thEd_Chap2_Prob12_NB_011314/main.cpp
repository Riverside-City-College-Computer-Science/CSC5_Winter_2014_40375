/* 
 * File:   main.cpp
 * Author: Victoria Hodnett
 * Created on January 13, 2014, 11:07 AM
 * Savitch 8th Edition Chapter 1 Problem 12
 * Calculating the square root
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float x, r, guess;
    //Input the value to find the square root of
    cout << "What number do you wish to find the "
         << "square root of? ";
    cin >> x;
    //First approximation
    guess = x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //Output the first approximation
    cout << "The first approximation = " << guess << endl;
    //Second approximation
    r=x/guess;
    guess=(guess+r)/2;
    //Output the second approximation
    cout << "The second approximation = " << guess << endl;
    //Third approximation
    r=x/guess;
    guess=(guess+r)/2;
    //Output the third approximation
    cout << "The third approximation = " << guess << endl;
    //Output the actual value
    cout << "Exact answer = " << sqrt(x) << endl;
    //Exit
    return 0;
}

