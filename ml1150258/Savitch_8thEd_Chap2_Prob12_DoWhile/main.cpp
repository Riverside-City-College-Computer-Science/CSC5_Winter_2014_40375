/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 13, 2014, 11:07 AM
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
    //Declare variables
    float x,r,nGuess,oGuess;
    //Input the value to find the sq root of
    cout<<"What number do you wish to find the "
        <<"Square Root of ?"<<endl;
    cin>>x;
    //First approximation and keep count;
    nGuess=oGuess=x/2;
    int count=0;
    do{
        oGuess=nGuess;
        r=x/oGuess;
        nGuess=(oGuess+r)/2;
        count++;
    }while(nGuess-oGuess);
    //Output the approximation
    cout<<"The Approximation = "<<nGuess<<endl;
    cout<<"It took "<<count<<" iterations for the solution"<<endl;
    //Output the actual answer
    cout<<"Exact answer = "<<sqrt(x)<<endl;
    //Exit Stage Right
    return 0;
}
