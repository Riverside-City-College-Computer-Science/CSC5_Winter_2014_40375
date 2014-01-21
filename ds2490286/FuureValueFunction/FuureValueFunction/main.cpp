/* 
 * File:   main.cpp
 * Author: David W. Smith
 * Created on January 21, 2014, 8:52 AM
 * Future Value Function example
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


//Global Constants

//Function Prototypes
float fv1(float,float,int);
float fv2(float,float,int);
float fv3(float,float,int);
float fv4(float,float,int);
float fv5(float,float,int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float prin, interest, result, result2, result3, result4, result5;
    int periods;
    //Read in the variables
    cout << "Principle ";
    cin >> prin;
    cout << "Interest in %/year ";
    cin >> interest;
    cout << "Number of compounding periods (yrs) ";
    cin >> periods;
    cout << "Calling function 1..." << endl;
    result = fv1(prin,interest,periods);
    cout << "Calling function 2..." << endl;
    result2 = fv2(prin,interest,periods);
    cout << "Calling function 3..." << endl;
    result3 = fv3(prin,interest,periods);
    cout << "Calling function 4..." << endl;
    result4 = fv4(prin,interest,periods);
    result5 = fv5(prin,interest,periods);
    cout << setprecision(2);
    cout << fixed;
    cout << showpoint;
    cout << "result = " << result << endl;
    cout << "result2 = " << result2 << endl;
    cout << "result3 = " << result3 << endl;
    cout << "result4 = " << result4 << endl;
    cout << "result5 = " << result5 << endl;
    return 0;
}

//Future Value function
//PV = present value
//iRate = interest rate
//n = # of compounding periods (yrs)

float fv1(float pv,float iRate,int n) {
    float save = pv;
    for (int years=1; years <= n; years++)
        save *= (1+iRate/100);
    return save;
}

float fv2(float pv,float iRate,int n) {
    return static_cast<float>(pv * pow((1.0+iRate/100.0),n));
}

float fv3(float pv,float iRate,int n) {
    return static_cast<float>(pv * exp(n*log(1.0+iRate/100.0)));
}

float fv4(float pv,float iRate,int n) {
    if (n==0)
        return pv;
    else
        return fv4(pv, iRate, n-1)*(1+iRate/100);
}

float fv5(float pv,float iRate,int n) {
    float save = pv;
    for (int years=n; years <= 1; years--)
        save *= (1+iRate/100);
    return save;
}