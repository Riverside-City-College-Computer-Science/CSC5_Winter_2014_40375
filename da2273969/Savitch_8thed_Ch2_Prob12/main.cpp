/* 
 * File:   main.cpp
 * Author:Donald Allum Jr.
 * Created on January 13, 2014, 11:07 AM
 * Calculating the square root
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins here

int main(int argc, char** argv) {
    //Define variables
    float x,r,guess;
    //input the value to find the square root of
    cout<<"What number do you wish to find the "
        <<"square root of?"<<endl;
    cin>>x;
    //First approximation 
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //Output the first approximation
    cout<<"The first approximation = "<<guess<<endl;
    //Second approx
    r=x/guess;
    guess=(guess+r)/2;
    //Output the second approximation
    cout<<"The second approximation = "<<guess<<endl;
    //Second approx
    r=x/guess;
    guess=(guess+r)/2;
    //Output the Third approximation
    cout<<"The third approximation = "<<guess<<endl;
    //Output the actual value
    cout<<"The exact value = "<<sqrt(x)<<endl;
  
    
    //exit stage right
    return 0;
}

