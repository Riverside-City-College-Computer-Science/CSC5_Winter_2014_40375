/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on January 13, 2014, 11:07 AM
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
    float x,r,guess;
    //Input the value to find the sq root of
    cout<<"What number do you wish to find the "
        <<"Square Root of ?"<<endl;
    cin>>x;
    //First approximation
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //Out the first approximation
    cout<<"The First Appoximation = "<<guess<<endl;
    //Second approximation5
    r=x/guess;
    guess=(guess+r)/2;
    //Out the second approximation
    cout<<"The second Appoximation = "<<guess<<endl;
    //Third approximation
    r=x/guess;
    guess=(guess+r)/2;
    //Out the third approximation
    cout<<"The Third Appoximation = "<<guess<<endl;
    //Output the actual answer
    cout<<"The Exact answer = "<<sqrt(x)<<endl;
    //Exit Stage Right
    return 0;
}

