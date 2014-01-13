/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 13, 2014, 11:40 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants
const float CNV_YRS_MNS=12;//Conversion years to months

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float payment, loan, intRate, periods;
    //Input information
    cout<<"Input loan amount in dollars, interest rate per year and "
        <<"compounding periods in years "<<endl;
    cin>>loan>>intRate>>periods;
    //Calculate the payment
    float temp=pow(1+intRate,periods);
    payment=intRate*temp*loan/(temp-1);
    //Output the payment per month
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Payment per month = $"<<payment/CNV_YRS_MNS<<endl;
    //Exit stage right
    return 0;
}

