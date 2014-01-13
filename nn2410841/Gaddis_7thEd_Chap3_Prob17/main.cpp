/* 
 * Nhat Nguyen
 * Created on January 13, 2014, 11:33 AM
 * Gaddis Chapter 3 Problem 17
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Define Variables
    float payment, loan, intRate, periods;
    //Input information
    cout<<"Input loan amount in dollars, interest rate per year and "
        <<"compounding periods in years "<<endl;
    cin>>loan>>intRate>>periods;
    //Calculate the payment
    float temp=pow(1+intRate,periods);
    payment=intRate*temp*loan/(temp-1);
    //Output the payment per month
    cout<<"Payment per month = $"<<payment/12<<endl;
    //Exit Stage Right
    return 0;
}

