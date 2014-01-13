/* 
 * File:   main.cpp
 * Author: Donald Allum Jr.
 * Created on January 13, 2014, 11:33 AM
 * 
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_YRS_MNS=12;//conversion years to months

//Function Prototypes

//Execution begins here


int main(int argc, char** argv) {
    //Declare variables
    float pay,rate,n,l;//n=periods, l=loans
    
    //Input information
    cout<<"Enter the price, rate and "
            <<"Compounding period."<<endl;
    cin>>l>>rate>>n;
    //Calculate the monthly payment
    float temp=pow(1+rate,n);
    pay=rate*l*temp/(temp-1);
    //Output the payment per month
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"your payment is $"<<pay/CNV_YRS_MNS<<endl;
    //Exit stage right
    return 0;
}

