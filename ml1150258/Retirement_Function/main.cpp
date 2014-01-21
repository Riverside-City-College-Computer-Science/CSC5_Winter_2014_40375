/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 21, 2014, 8:52 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
float retire(float,float,int,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float prin,interest,deposit;
    int periods;
    //Read in the variables
    cout<<"Principal = $'s"<<endl;
    cin>>prin;
    cout<<"Interest in %/year"<<endl;
    cin>>interest;
    cout<<"Number of compounding periods (yrs)"<<endl;
    cin>>periods;
    cout<<"Deposit made yearly $'s"<<endl;
    cin>>deposit;
    //Run the function
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Future value = $"<<retire(prin,interest,periods,deposit)<<endl;
    //Exit stage right
    return 0;
}


//Future Value Function
//Inputs
//    pv->Present Value $'s
//    iRate->Interest Rate %
//    n->Number of compounding periods (yrs)
//    dep->Yearly deposit $'s
//Output
//    Future value in $'s
float retire(float pv,float iRate,int n,float dep){
    float save=pv;
    for(int years=1;years<=n;years++){
        save*=(1+iRate/100);
        save+=dep;
    }
    return save;
}