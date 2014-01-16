/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 16, 2014, 9:03 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//Global Constants
const int CNV_YR_MNS=12;//12 months per year
const int CNV_PERC=100;//convert percentage
//Function Prototypes
//Execution Begins Here!

int main(int argc, char** argv) {
//Declare variables
    float price,iRate,intst,paymnt,prin=0,owed,intpay=0,mpay=0;
    //input price and yearly interest rate
    cout<<"What was the purchase price? $'s"<<endl;
    cin>>price;
    cout<<"What was the finance rate? %"<<endl;
    cin>>intst;
    cout<<"What is your monthly payment? $'s"<<endl;
    cin>>paymnt;
    //Convert and setup heading
    intst/=(CNV_PERC*CNV_YR_MNS);
    owed=price;
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Month  Owed  Interest  Payment  Principal"<<endl;
    //loop on months till paid
    for(int month=0;owed>paymnt;month++){
    owed-=(mpay-intpay);
    mpay=paymnt;
    intpay=owed*intst;
    prin=mpay-intpay;
    cout<<setw(4)<<0<<setw(8)<<owed<<setw(10)
            <<intpay<<setw(8)<<paymnt<<setw(10)<<prin<<endl;;
    }
    //Final payment calculation
    cout<<"Your final payment equal $"<<owed+intpay<<endl;
    //Exit stage right
    return 0;
}

