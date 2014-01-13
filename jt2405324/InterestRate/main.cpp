/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Class#: 40375
 * Created on January 13, 2014, 11:31 AM
 * Intrest Rate
 */

//System Libraries
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    float loan, rate, year, payment;
    
    //Assign Vars
    cout<<"Input Loan"<<endl;
    cin>>loan;
    cout<<"Input Rate in Percent"<<endl;
    cin>>rate;
    cout<<"Input Time in Years"<<endl;
    cin>>year;
    
    //Calculate result
    rate /= 100;
    float compRate = pow((1.0+rate),year);
    payment = ((rate*compRate)/(compRate-1.0))*loan;
    
    //Output result
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Annual Payment:    $"<<payment<<endl;
    cout<<"Payment per month: $"<<payment/12<<endl;
    return 0;
}

