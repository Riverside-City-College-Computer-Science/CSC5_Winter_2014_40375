/* 
 * File:   main.cpp
 * Author: Cody Rudd
 * Created on January 21, 2014, 10:20 AM
 * Retirement
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
float savneed(float,float,int,float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float prin,iRate,depo;
    int per;
    //Read in
    cout<<"Principal ($'s)"<<endl;
    cin>>prin;
    cout<<"Interest Rate in a Year (%)"<<endl;
    cin>>iRate;
    cout<<"Number of Periods in a Year"<<endl;
    cin>>per;
    cout<<"Deposit Made Yearly?"<<endl;
    cin>>depo;
    //Format
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"Required Savings = $"<<savneed(prin,iRate,per,depo)<<endl;
    return 0;
}

float savneed(float pv,float rate,int n,float dep){
    float save=pv;
    for(int years=1;years<=n;years++){
        save*=(1+rate/100);
        save+=dep;
    }
    return save;
}
