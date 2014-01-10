/* 
 * File:   main.cpp
 * Author: Adam Grose
 * January 9th, 2014
 * Purpose: Calculate change given the number of quarters, dimes, and nickels
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Variables and Constants
unsigned short QRTS=25;//worth of 1 quarter
unsigned short DIME=10;//worth of 1 dime
unsigned short NCKL=5;//worth of 1 nickel

//No Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //declare variables
    unsigned int nmbQtrs, nmbDms, nmbNckl, ttlChng;
   
    //Input amount of Quarters, Dimes, and Nickels
    cout<<"Enter number of quarters - ";
    cin>>nmbQtrs;
    cout<<"Enter number of dimes    - ";
    cin>>nmbDms;
    cout<<"Enter number or nickels  - ";
    cin>>nmbNckl;
    //Calculate total amount in cents
    ttlChng=nmbQtrs*QRTS+nmbDms*DIME+nmbNckl*NCKL;
    //Output the total change
    cout<<endl<<"Number of Quarters = "<<nmbQtrs<<endl;
    cout<<"Number of Dimes    = "<<nmbDms<<endl;
    cout<<"Number of Nickels  = "<<nmbNckl<<endl;
    cout<<endl<<"Total change = "<<ttlChng<<"cents";
    //Exit Stage Right
    return 0;
}
