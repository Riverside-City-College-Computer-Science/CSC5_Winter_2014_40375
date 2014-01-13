/* 
 * File:   main.cpp
 * Author: Richard Panganiban
 * January 13, 2014
 * Payment
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
    float payment, loan, intRate, periods;
    //Input info
    cout<<"Input loan in dollars, interest rate per year and compounding "
          <<"periods in years "<<endl;
    cin>>loan>>intRate>>periods;
    //Calculate the payment
    float temp=pow(1+intRate,periods);
    payment=intRate*temp*loan/(temp-1);
    //Output the payment per month
    cout<<"Payment per month = $"<<payment/12<<endl;
    return 0;
}

