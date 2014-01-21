/* 
 * File:   main.cpp
 * Author: Donald Allum Jr
 * Created on January 21, 2014, 10:19 AM
 */

//System libraries

#include <iostream>
#include <iomanip>
using namespace std;
//Global constants

//Function prototypes
float retire(float,float,int,float);


//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float prin,interest,deposit;
    int periods;
    //Read in the variables
    cout<<"Principal = $'s "<<endl;
    cin>>prin;
    cout<<"Interest in %/year "<<endl;
    cin>>interest;
    cout<<"Number of compounding periods (yrs)"<<endl;
    cin>>periods;
    cout<<"Deposit made yearly $'s\n";
    cin>>deposit;
    //Run the function
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Future value = $"<<retire(prin,interest,periods,deposit)<<endl;
    
    //Exit stage right
    
    return 0;
}

//Future value function
//Inputs
//  pv->Present value $'s
//  iRate->Interest rate %
//  n->Number of compounding periods (yrs)
//  dep->Yearly deposit $'s
//Output
//  Future value in $'s

float retire(float pv,float iRate,int n,float dep){
    float save=pv;
    for (int years=1;years<=n;years++){
        save*=(1+iRate/100);
        save+=dep;
    }
    return save;
}
