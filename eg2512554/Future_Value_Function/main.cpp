/* 
 * File:   main.cpp
 * Author: Edwin Gibbs
 * Created on January 21, 2014, 8:49 AM
 * Future Value Function
 */

//System Libraries
#include <iostream>
#include<cmath>
using namespace std;

//Global Constants

//Functional pro

float fv1(float, float, int);
float fv2(float, float, int);
float fv3(float, float, int);
float fv4(float, float, int);
float fv5(float, float, int);

int main(int argc, char** argv) {
    //Execution begins here
    //declare variables
    float prin, interest;
    int periods;
    //Read in variables
    cout<<"Principal = $'s"<<endl;
    cin>>prin;
    cout<<"Interest in %/year"<<endl;
    cin>>interest;
    cout<<"Number of compounding periods(yrs)"<<endl;
    cin>>periods;
    //run the function
    cout<<"Future value =$"<<fv1(prin,interest,periods)<<endl;
   cout<<"Future value =$"<<fv2(prin,interest,periods)<<endl;
   cout<<"Future value =$"<<fv3(prin,interest,periods)<<endl;
   cout<<"Future value =$"<<fv4(prin,interest,periods)<<endl;
   cout<<"Future value =$"<<fv5(prin,interest,periods)<<endl;
    return 0;
}

//Future value function
//input
//pv->Present value $'s
//iRate->Interest rate %
//n->Number of compounding periods (years)
//output 
//future value in $'s
 float fv5(float pv, float iRate, int n){
     float save=pv;
     for(int years=n;years>=1;years--){
         save*=(1+iRate/100);
     }
     return save;
 }
 
//Future value function
//input
//pv->Present value $'s
//iRate->Interest rate %
//n->Number of compounding periods (years)
//output 
//future value in $'s
 float fv4(float pv, float iRate, int n){
     if(n==0)return pv;
     else return fv4(pv,iRate,n-1)*(1+iRate/100);
     }
 
 //Future value function
//input
//pv->Present value $'s
//iRate->Interest rate %
//n->Number of compounding periods (years)
//output 
//future value in $'s
 float fv3(float pv, float iRate, int n){
     return static_cast<float>(pv*exp(n*log(1.0+iRate/100.0)));
     }

//Future value function
//input
//pv->Present value $'s
//iRate->Interest rate %
//n->Number of compounding periods (years)
//output 
//future value in $'s
 float fv2(float pv, float iRate, int n){
     return static_cast<float>(pv*exp(n*log(1.0+iRate/100.0)));
     }
     
 
 
//Future value function
//input
//pv->Present value $'s
//iRate->Interest rate %
//n->Number of compounding periods (years)
//output 
//future value in $'s
 float fv1(float pv, float iRate, int n){
     float save=pv;
     for(int years=1;years<=n;years++){
         save*=(1+iRate/100);
     }
     return save;
 }
 

   