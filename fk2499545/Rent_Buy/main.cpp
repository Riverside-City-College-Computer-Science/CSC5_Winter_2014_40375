/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 13, 2014, 11:31 AM
 * Is it cheaper to rent or to buy?
 * Gaddis Chapter 3, problem 17
 */

#include <iostream>
#include<math.h>
using namespace std;

//Global Constants

//Function Prototype

//Execution Begins
int main(int argc, char** argv) {
    //Declare Variables
    float loan, payment, rate, year, month;
    
    //Input information
    cout<<"Input loan amount in dollars"<<endl;
    cin>>loan;
    cout<<"Input interest rate percentage"<<endl;
    cin>>rate;
    cout<<"Input compounding period in years"<<endl;
    cin>>year;
    
    //Calculate
    float temp=pow(1+rate, year);
    payment=((rate*temp)/(temp-1))*loan;
    month=payment/12;
    
    //Output payment per year & month
    cout<<"Payment per year = $"<<payment<<endl;
    cout<<"Payment per month = $"<<month<<endl;
    

    return 0;
}

