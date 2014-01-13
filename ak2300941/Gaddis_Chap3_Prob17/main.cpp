/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on January 13, 2014, 11:33 AM
 * Cheap to Rent or to Buy
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float rate, N, L, payment;
    //Input the Interest Rate
    cout<<"What is the interest rate? "<<endl;
    cin>>rate;
    //Input the compound periods
    cout<<"What is the compounds periods? "<<endl;
    cin>>N;
    //Input the Loans
    cout<<"What is the loan? "<<endl;
    cin>>L;
    //Calculate the Payment
    float temp=pow(1+rate,N);
    payment=rate*temp*L/(temp-1);
    //Display output
    cout<<"The payment is "<<payment/12<<endl;
    
    return 0;
}

