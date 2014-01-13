/* 
 * File:   main.cpp
 * Author: Cesar E. Velazquez
 * Created on January 13, 2014, 11:35 AM
 * Gaddis Ch.3 Prob.17
 */

#include <iostream>
#include <cmath>

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float payment, loan, intRate, periods;
    //Input Info
    cout<<"Input loan amount in dollars, interest rate, periods "
        <<"compounding periods in years "<<endl;
    cin>>loan>>intRate>>periods;
    //Calc the payment
    float temp=pow(1+intRate,periods);
    payment=intRate*temp*loan/(temp-1);
    //output the payment per month
    cout<<"Payment per month = $ "<<payment/12<<endl;
    
    //Exit

    return 0;
}

