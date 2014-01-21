/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 21, 2014, 8:49 AM
 * 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
float retire (float, float, int, float);
//Execution begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float prin, interst, dep;
    int periods;
    //read in the variables
    cout<<"Principal = $'s"<<endl;
    cin>>prin;
    cout<<"Interest in %/year"<<endl;
    cin>>interst;
    cout<<"Number of compounding periods (Year)"<<endl;
     cin>>periods;
    cout<<"Deposit made yearly $'s"<<endl;
    cin>>dep;
    //Run the fuctions
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Future value = $"<<retire(prin, interst, periods, dep)<<endl;
    return 0;
}

//Future value Function
//Inputs
//     PV = Present Value $'s
//     iRate=Interest Rate %
//     n-->Number of compounding periods (year)
float retire (float pv, float iRate, int n, float dep){
    float save=pv;
    for (int years=1; years<=n; years++){
        save*=(1+iRate/100);
        save+=dep;
    }
    return save;
}