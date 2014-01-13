/* 
 * File:   main.cpp
 * Author: Jennifer Clark 
 * Created on January 13, 2014, 11:07 AM
 * Calculating the Square Root
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
    float x,r,guess;
    
    //Input the value to find the square root of a number
    cout<<"What number do you wish to find the square root of?"<<endl;
    cin>>x;
    //First approximation
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //Output the first approximation
    cout<<"The First Approximation = "<<guess<<endl;
    
    //Second approximation
    r=x/guess;
    guess=(guess+r)/2;
    //Output the second approximation
    cout<<"The Second Approximation = "<<guess<<endl;
    
    //Third approximation
    r=x/guess;
    guess=(guess+r)/2;
    //Output the third approximation
    cout<<"The Third Approximation = "<<guess<<endl;
    
    //Fourth approximation
    r=x/guess;
    guess=(guess+r)/2;
    //Output the fourth approximation
    cout<<"The Fourth Approximation = "<<guess<<endl;
    
    cout<<"Exact Answer = "<<sqrt(x)<<endl;
    //Exit Stage Right!
    
    return 0;
}

