/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 21, 2014, 8:52 AM
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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float prin,interest;
    int periods;
    //Read in the variables
    cout<<"Principal = $'s"<<endl;
    cin>>prin;
    cout<<"Interest in %/year"<<endl;
    cin>>interest;
    cout<<"Number of compounding periods (yrs)"<<endl;
    cin>>periods;
    //Run the function
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Future value = $"<<fv1(prin,interest,periods)<<endl;
    cout<<"Future value = $"<<fv2(prin,interest,periods)<<endl;
    cout<<"Future value = $"<<fv3(prin,interest,periods)<<endl;
    cout<<"Future value = $"<<fv4(prin,interest,periods)<<endl;
    cout<<"Future value = $"<<fv5(prin,interest,periods)<<endl;
    //Exit stage right
    return 0;
}

//Future Value Function
//Inputs
//    pv->Present Value $'s
//    iRate->Interest Rate %
//    n->Number of compounding periods (yrs)
//Output
//    Future value in $'s
float fv5(float pv,float iRate,int n){
    float save=pv;
    for(int years=n;years>=1;years--){
        save*=(1+iRate/100);
    }
    return save;
}

//Future Value Function
//Inputs
//    pv->Present Value $'s
//    iRate->Interest Rate %
//    n->Number of compounding periods (yrs)
//Output
//    Future value in $'s
float fv4(float pv,float iRate,int n){
    if(n==0)return pv;
    else return fv4(pv,iRate,n-1)*(1+iRate/100);
}


//Future Value Function
//Inputs
//    pv->Present Value $'s
//    iRate->Interest Rate %
//    n->Number of compounding periods (yrs)
//Output
//    Future value in $'s
float fv3(float pv,float iRate,int n){
    return static_cast<float>(pv*exp(n*log(1.0+iRate/100.0)));
}


//Future Value Function
//Inputs
//    pv->Present Value $'s
//    iRate->Interest Rate %
//    n->Number of compounding periods (yrs)
//Output
//    Future value in $'s
float fv2(float pv,float iRate,int n){
    return static_cast<float>(pv*pow((1.0+iRate/100.0),n));
}

//Future Value Function
//Inputs
//    pv->Present Value $'s
//    iRate->Interest Rate %
//    n->Number of compounding periods (yrs)
//Output
//    Future value in $'s
float fv1(float pv,float iRate,int n){
    float save=pv;
    for(int years=1;years<=n;years++){
        save*=(1+iRate/100);
    }
    return save;
}

