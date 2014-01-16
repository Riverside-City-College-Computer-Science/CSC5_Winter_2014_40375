/* 
 * File:   main.cpp
 * Author: David Smith
 * Created on January 16, 2014, 8:46 AM
 * Savitch 8th ed. Chap. 2 Prob. 9
 */

// System libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants
   const int CNV_YR_MNS=12; //12 mos per yr
   const int CNV_PERC=100; //conv. percentages

// Function Prototypes

// Start execution here
int main(int argc, char** argv) {
    //Local vars
    float price,iRate,interest,paymnt,prin,owed,intpay,npay=0;
    //Input price, payment & yearly interest rate
    cout << "What was the purchase price? " << endl;
    cin >> price;
    cout << "What was the finance rate? " << endl;
    cin >> interest;
    cout << "What is your monthly payment? " << endl;
    cin >> paymnt;
    //Convert & setup heading
    interest /= (CNV_PERC*CNV_YR_MNS);
    owed = price;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Month    Owed   Interest Payment Principal" << endl;
    intpay = owed * interest;
    prin = paymnt - intpay;
    for (int month = 0; owed > 0; month++) {
        owed -= (paymnt - intpay);
        npay = paymnt;
        intpay = owed * interest;
        prin = npay - intpay;
        cout << setw(5)<< month << setw(8)<< owed << setw(10)<< intpay
             << setw(9) << paymnt << setw(10) << prin << endl;
    }
    //Output final payment
    cout << "Your final payment is $" << owed + intpay << endl;
    //Exit, stage right.
    return 0;
}

