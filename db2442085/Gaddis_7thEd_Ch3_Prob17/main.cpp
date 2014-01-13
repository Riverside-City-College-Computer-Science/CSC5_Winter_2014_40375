/* 
 * David Ballantyne
 * Created on January 13, 2014, 11:34 AM
 * purpose: Gaddis_7thEd_Ch3_Prob17
 */
//Libraries
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float rate, n, loan, pay;
    //prompt
    cout<<"input loan amount "<<endl;
    cin>>loan;
    cout<<"input interest rate ";
    cin>>rate;
    cout<<"input number of years ";
    cin>>n;
    //process
    float temp=pow(1+rate,n);
    pay=(rate*temp*loan)/(temp-1);
    //output
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"your monthly house bill is $"<<pay/12.0;
  
    //exit   
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

