/*
 * David W. Smith - 1/9/14
 * Interpolation of Fahrenheit / Celsius
*/

// System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Global constants

// Function prototypes

// Execution begins here
int main(int argc, char** argv) {
    //Define local variables
    float dPaymnt,iRate,iN,iL,tPower;
    
    //Get user input
    cout << "Rate? ";
    cin >> iRate;
    cout << "Number of Payments ";
    cin >> iN;
    cout << "Loan amount? ";
    cin >> iL;
    //Calculate payment
    tPower = pow(1.0+iRate,iN);
    dPaymnt = iRate * tPower * iL/(tPower-1);
    //Output Payment
    cout << "Payment will be: " << dPaymnt << endl;

    return 0;
}

