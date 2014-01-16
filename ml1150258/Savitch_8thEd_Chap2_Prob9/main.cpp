/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 2014, 9:02 AM
 */

//Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const int CNV_YR_MNS=12;//12 months per year
const int CNV_PERC=100;//convert percentage

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare
    float price,iRate,intst,paymnt,prin=0,owed,intpay=0,mpay=0;
    //Input price, payment and yearly interest rate
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
    cout<<"Month    Owed   Interest  Payment  Principal"<<endl;
    //loop on months till paid
    for(int month=0;owed>paymnt;month++){
        owed-=(mpay-intpay);
        mpay=paymnt;
        intpay=owed*intst;
        prin=mpay-intpay;
        cout<<setw(4)<<month<<setw(9)<<owed<<setw(11)<<intpay
                <<setw(9)<<paymnt<<setw(10)<<prin<<endl;
    }
    //Final Payment Calculation
    cout<<"Your final payment = $"<<owed+intpay<<endl;
    //Exit stage right
    return 0;
}

