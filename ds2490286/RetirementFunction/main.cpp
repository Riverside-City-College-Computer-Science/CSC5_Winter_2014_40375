/* 
 * File:   main.cpp
 * Author: David W. Smith
 * Created on January 21, 2014, 10:16 AM
 * 
 * Modify muni bond retirement program to utilise
 * function calls.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const unsigned char CNV_PERC=100;

//Function Prototypes
float retire(float,float,float);

//Execution begins here
int main(int argc, char** argv) {
    float iSalary,iYrDep,iBondRt,rSave;
    //Input some values
    cout<<"What salary do you make $'s"<<endl;
    cin>>iSalary;
    cout<<"What percentage of your salary would "
        <<"you put into retirement? %"<<endl;
    cin>>iYrDep;
    cout<<"What muni bond rate will you use %"<<endl;
    cin>>iBondRt;
    cout<<setprecision(2)<<fixed<<showpoint;
    //Heading
    cout<<endl;
    cout<<"Income in retirement >= $"<<iSalary<<endl;
    cout<<"Muni Bond rate = "<<iBondRt<<endl;
    cout<<"Yearly Deposit = $"<<iYrDep<<endl;
    cout<<"Required Savings to Retire = $"<<(iSalary-iYrDep)/iBondRt<<endl;
    cout<<"Year Retirement Savings"<<endl;
    rSave = retire(iSalary,iYrDep,iBondRt);
    cout << "Your final amount : $" << rSave;
    //Exit, stage right
    return 0;
}

float retire(float salary, float yrDep, float iRate) {
    //declare local variables
    float retSave = 0;
    iRate/=CNV_PERC;
    yrDep*=(salary/CNV_PERC);
    //Loop and print as you go to watch the savings grow
    int year=0;
    do{
        retSave*=(1+iRate);
        retSave+=yrDep;
        year++;
        cout<<setw(4)<<year;
        cout<<setw(15)<<retSave<<endl;
    }while(retSave<(salary-yrDep)/iRate);
    return retSave;
}

