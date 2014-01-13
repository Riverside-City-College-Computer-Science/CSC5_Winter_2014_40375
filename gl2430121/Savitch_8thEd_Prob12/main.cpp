/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 13, 2014, 11:07 AM
 * Calculating the square root
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begin Here!
int main(int argc, char** argv) {
//Declare variables
    float x,r,guess;
    //input the value to find the sq root of
    cout<<"What number do u wish to find the "
            <<"Square Root of ?"<<endl;
    cin>>x;
    //First approximation
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //Output the first approximation
    cout<<"The first Approximation = "<<guess<<endl;
    // OutputSecond Approximation
    cout<<"The second Approximation = "<<guess<<endl;
    //Third approximation
    r=x/guess;
    guess=(guess+r)/2;
    //Output the third Approximation
    cout<<"The third Approximation = "<<guess<<endl;
    //Output the actual answer
    cout<<"Exit answer = "<<sqrt(x)<<endl;
    //Exist Stage Right
    return 0;
}

