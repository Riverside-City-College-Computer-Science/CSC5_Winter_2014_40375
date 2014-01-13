/* 
 * File:   main.cpp
 * Author: Ewin Gibbs
 * Created on January 13, 2014, 11:08 AM
 * Calculating Square root
 */
//System Libraries
#include <iostream>
#include<cmath>
using namespace std;

//Global Constants 

//Function Prototypes

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    float x,r,guess;
    //Input value
    cout<<"What number do you wish to find the "
            <<"Square root of ?"<<endl;
    cin>>x;
    //First approximation
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
            //out the frist approximation  =
            cout<<"The first approximation = "<<guess<<endl;
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
            //out the second approximation = 
            r=x/guess;
    guess=(guess+r)/2;
            cout<<"The second approximation = "<<guess<<endl;
    //Out the third approximation
    r=x/guess;
    guess=(guess+r)/2;
            cout<<"The third approximation = "<<guess<<endl;
    //Output the actual answer
            cout<<"The actual answer = "<<sqrt(x)<<endl;
    //Exit
  
    return 0;
}

