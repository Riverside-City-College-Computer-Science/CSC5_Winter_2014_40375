/* 
 * File:   main.cpp
 * Author: Cesar E. Velazquez
 *Created on January 13, 2014, 11:08 AM
 * Calculating the Sqaure Root
 */

#include <iostream>
#include <cmath>

using namespace std;

//Global Constants

//Functional Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float x,r,guess;
    //Input the value to find the sq root of
    cout<<"What number do you wish to find the "
        <<"Square root of ?"<<endl;
    cin>>x;
    //First approx.
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //Output the first approx.
    cout<<"The First Approximation = "<<guess<<endl;
    
    //Output the second approx.
    r=x/guess;
    guess=(guess+r)/2;
    cout<<"The Second Approximation = "<<guess<<endl;
    
    //Output the third approx.
    r=x/guess;
    guess=(guess+r)/2;
    cout<<"The Third Approximation = "<<guess<<endl;
    
    //Exit Stage Right
    

    return 0;
}

