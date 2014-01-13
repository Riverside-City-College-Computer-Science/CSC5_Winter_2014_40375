/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 13, 2014, 11:33 AM
 */

#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
//Declare variables
    float Payment,loan, intRate, periods;
    //input information;
    cout<<"Input loan amount in dollars, interest rate per years and "
    <<"compounding periods in years"<<endl;
    cin>>loan>>intRate>>periods;
    //Calculate the payment per month
    float temp=pow(1+intRate,periods);
    Payment=intRate*temp*loan/(temp-1);
    //Output the payment per month
    cout<<"Payment per month = $"<<Payment/12<<endl;
    //Exit stage right
    return 0;
}

