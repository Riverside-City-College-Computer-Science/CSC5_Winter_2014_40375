/* 
 * David Ballantyne
 * Created on January 21, 2014, 10:15 AM
 * purpose: retirement_function
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const unsigned char CNV_PERC=100;

//Function Prototypes
float rt1(float,float,int,float);
//Execution Begins Here1
int main(int argc, char** argv) {
    //Declare Variables
    float retSave=0, salary, yrDep, iRate;
    
    //Input some values
    cout<<"What salary do you make $'s"<<endl;
    cin>>salary;
    cout<<"What percentage of your salary would "
        <<"you put into retirement? %"<<endl;
    cin>>yrDep;
    cout<<"What municipal bond rate will you use %"<<endl;
    cin>>iRate;
    
    //Heading
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<endl;
    cout<<"Future value = $'s "<<rt1(retSave,salary,iRate,yrDep);

    //Exit Stage Right
    return 0;
}
float rt1(float retSave, float salary, int yrDep, float iRate){
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<endl;
    cout<<"Income in retirement = $"<<salary<<endl;
    cout<<"Muni Bond rate = "<<iRate<<endl;
    cout<<"Yearly Deposit = $"<<yrDep<<endl;
    cout<<"Required Savings to Retire = $"<<(salary-yrDep)/iRate<<endl;
    cout<<"Year Retirement Savings"<<endl;
        int year=0;
        yrDep*=(salary/CNV_PERC);
        iRate/=CNV_PERC;
        do{
        retSave*=(1+iRate);
        retSave+=yrDep;
        year++;
        cout<<setw(4)<<year;
        cout<<setw(15)<<retSave<<endl;
        }while(retSave<(salary-yrDep)/iRate);
        return retSave;
}
