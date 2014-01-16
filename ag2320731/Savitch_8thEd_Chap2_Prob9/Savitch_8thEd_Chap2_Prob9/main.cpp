/* 
 * File:   main.cpp
 * Author: Adam Grose
 * Created on January 16, 2014, 9:02 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global constants
const int CNV_YR_MNS=12;
const int CNV_PERC=100;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float price,iRate,intst,paymnt,prin=0,owed,intpay=0,mpay=0;
    //Input price, payment, and yearly interest rate
    cout<<"What was the purchase price? $'s"<<endl;
    cin>>price;
    cout<<"What was the finance rate? %"<<endl;
    cin>>intst;
    cout<<"What is your monthly payment? $'s"<<endl;
    cin>>paymnt;
    //convert and setup heading
    intst/=(CNV_PERC*CNV_YR_MNS);
    owed=price;
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Month    Owed   Interest   Payment   Principle"<<endl;
    //Loop on months till paid
    for(int month=0;owed>paymnt;month++){
    owed-=(mpay-intpay);
    mpay=paymnt;
    intpay=owed*intst;
    prin=mpay-intpay;
    cout<<setw(4)<<month<<setw(9)<<owed<<setw(11)<<intpay<<setw(9)<<paymnt<<setw(12)<<prin<<endl;
    }
    //Final payment Calculation
    cout<<"Your final payment = $"<<owed+intpay;
    //Exit Stage Right
    return 0;
}

