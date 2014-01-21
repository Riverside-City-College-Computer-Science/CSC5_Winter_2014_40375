/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 21, 2014, 8:49 AM
 * 
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
  
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float prin,interest;
    int periods;
    //read in the variables
    cout<<"Principle = $'s"<<endl;
    cin>>prin;
    cout<<"Interest in %/Year"<<endl;
    cin>>interest;
    cout<<"Number of compounding periods (yrs)"<<endl;
    cin>>periods;
    //run the function
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Future Value = $"<<fv1(prin,interest,periods)<<endl;
    cout<<"Future Value = $"<<fv2(prin,interest,periods)<<endl;
    cout<<"Future Value = $"<<fv3(prin,interest,periods)<<endl;
    return 0;
}

   
//future Value Function 4
//input
//        pv-> present value $'s
//        iRate->interest rate %
//        n->number of compounding periods (yrs) 
float fv4(float pv,float iRate,int n){
    if(n==0)return pv;
    else return fv4(pv,iRate,n-1)+(1+iRate/100);
   
}


//future Value Function 3
//input
//        pv-> present value $'s
//        iRate->interest rate %
//        n->number of compounding periods (yrs) 
float fv3(float pv,float iRate,int n){
    return pv*exp(n*log(1.0+iRate)/100.0,n);
   
}


//future Value Function 2
//input
//        pv-> present value $'s
//        iRate->interest rate %
//        n->number of compounding periods (yrs) 
float fv2(float pv,float iRate,int n){
    return pv*pow((1+iRate)/100.0,n);
   
}


//future Value Function 
//input
//        pv-> present value $'s
//        iRate->interest rate %
//        n->number of compounding periods (yrs) 
float fv1(float pv,float iRate,int n){
    float save=pv;
    for(int years=1;years<=n;years++){
        save*=(1+iRate/100);
    }
    return save;
    
}


