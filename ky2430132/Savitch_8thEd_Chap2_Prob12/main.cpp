/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
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
    cout <<"What number do you wish to find the Square Root of? "<<endl;
    cin>>x;
    //First approximation
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //output the first approximation
    cout<<"*********************************"<<endl;
    cout<<"The First AApproximation = "<<guess<<endl;
    //Second Approximation
    r=x/guess;
    guess=(guess+r)/2;
    //output the second approximation
    cout<<"*********************************"<<endl;
    cout<<"The second AApproximation = "<<guess<<endl;
    //third approximation
    guess=(guess+r)/2;
    //output the third approximation
    cout<<"*********************************"<<endl;
    cout<<"The second AApproximation = "<<guess<<endl;
    //Output the actual answer
    cout<<"*********************************"<<endl;
    cout<<"Exit answer = "<<sqrt(x)<<endl;
    
    //Exit Stage right
           
    return 0;
}

