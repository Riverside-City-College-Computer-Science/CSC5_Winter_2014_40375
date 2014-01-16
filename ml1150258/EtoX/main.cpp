/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 15, 2014, 9:20 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float ex=1,x,term=1,tol=1e-6;
    //Input the power of x
    cout<<"Input x found in e^x "<<endl;
    cin>>x;
    //Loop and stop when tolerance reached
    for(int i=1;term>tol;i++){
        term*=x/i;
        ex+=term;
    }
    //Compare results
    cout<<"Exact  result of e("<<x<<")="<<exp(x)<<endl;
    cout<<"Approx result of e("<<x<<")="<<ex<<endl;
    //Exit stage right
    return 0;
}

