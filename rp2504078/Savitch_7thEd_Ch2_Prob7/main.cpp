/* 
 * File:   main.cpp
 * Author: rcc
 *
 * January 13, 2014
 * Calculating the square root
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float x,r,guess;
    //Input the value to find the sq root of
    cout<<"What number do you wish to find the Square Root of ?"<<endl;
    cin>>x;
    //First Approximation
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //Output the first Approximation
    cout<<"The First Approximation = "<<guess<<endl;
    //Second Approximation
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //Output the second approximation
    cout<<"The Second Approximation = "<<guess<<endl;
    //Third Approximation
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //Output the third
     cout<<"The Third Approximation = "<<guess<<endl;
    //Output the actual answer
     cout<<"The actual answer is "<< sqrt(x)<<endl;
     
     
    return 0;
}

