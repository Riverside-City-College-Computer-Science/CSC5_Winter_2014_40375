/* 
 * File:   main.cpp
 * Author: Cody Rudd
 * Created on January 13, 2014, 11:32 AM
 * Cheaper To Buy Or Rent
 */

//System Libraries
#include <iostream>
#include <cmath>

//Global Constants 

//Function Prototypes

//Execution Begins Here
using namespace std;
int main(int argc, char** argv) {
    //Declare Variables
    float l,r,t,p;
    //Input Loan, Rate, and time
    cout<<"What is the loan taken?"<<endl;
    cin>>l;
    cout<<"What is the rate % ?"<<endl;
    cin>>r;
    cout<<"How many payment in a year?"<<endl;
    cin>>t;
    //Calculate cost
    float temp=pow(1+r,t);
    p=r*temp*l/(temp-1);
    //Output Payment
    cout<<"Payment per month = $"<<p/12<<endl;
    return 0;
}

