/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 13, 2014, 11:08 AM
 * Savitch Chapter 2, Problem 12
 * Calculating the square root
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //declare variables
    float x, r, guess;
    //Input the value to find the sw root of
    cout<<"What number do you wish to find the square root of?"<<endl;
    cin>>x;
    
    //First approximation
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //Ouput First Approximation1
    cout<<"the first approximation is: "<<guess<<endl;
    
    //Second Approximation
     r=x/guess;
    guess=(guess+r)/2;
    //Output Second Approximation
    cout<<"The second approximation is: "<<guess<<endl;
    
    //Third Approximation
     r=x/guess;
    guess=(guess+r)/2;
    //Output third Approximation
    cout<<"The third approximation is: "<<guess<<endl;
    
    //Fourth Approximation
     r=x/guess;
    guess=(guess+r)/2;
    //Output Fourth Approximation
    cout<<"The fourth approximation is: "<<guess<<endl;
    
    //Fifth Approximation
     r=x/guess;
    guess=(guess+r)/2;
    //Output fifth Approximation
    cout<<"The fifth approximation is: "<<guess<<endl;
    
    //Sixth Approximation
     r=x/guess;
    guess=(guess+r)/2;
    //Output sixth Approximation
    cout<<"The sixth approximation is: "<<guess<<endl;
    

    return 0;
}

