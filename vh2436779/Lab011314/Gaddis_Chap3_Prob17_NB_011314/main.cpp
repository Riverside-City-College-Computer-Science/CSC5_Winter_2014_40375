/* 
 * File:   main.cpp
 * Author: Victoria Hodnett
 * Created on January 13, 2014, 11:33 AM
 * Gaddis Chapter 3 Problem 17
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_YRS_MNS = 12; // Conversion years to months

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float payment, loan, intRate, periods;
    //Input loan amount
    cout << "What is your loan amount in dollars, excluding commas? $";
    cin >> loan;
    //Input interest rate
    cout << "What is the interest rate in percent? ";
    cin >> intRate;
    //Change percent to decimal
    intRate /=100;
    //Input compounding periods
    cout << "What is the number of compounding periods in years? ";
    cin >> periods;
    //Calculate payment
    float temp = pow((1+intRate), periods);
    payment = ((intRate * temp)/(temp - 1)) * loan;
    //Output payment
    cout << "Your payment is $" << fixed << showpoint << setprecision(2)
        << payment/CNV_YRS_MNS << " per month." << endl;
    
    //Exit
    return 0;
}

