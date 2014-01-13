/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Class#: 40375
 * Created on January 13, 2014, 11:03 AM
 * Savitch Chap 2 Prob 12
 * Calculate the square root
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    float x, guess, r;
    
    //input x
    cout<<"Input a number to find square root"<<endl;
    cin>>x;
    
    //Calculate
    guess = x/2;
    for(int i = 0; i < 10; i++){
        r = x/guess;
        guess = (guess+r)/2;
        cout<<i+1<<" Approximation = "<<guess<<endl;
    }
    //Output actual square root
    cout<<"Exact Square Root = "<<sqrt(x)<<endl;
    return 0;
}

