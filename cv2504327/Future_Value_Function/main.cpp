/* 
 * File:   main.cpp
 * Author: Cesar E. Velazquez
 * Created on January 21, 2014, 8:52 AM
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

//Function Begins Here
int main(int argc, char** argv) {
    //Decalre Variables
    float prin,interest;
    int periods;
    //Read the Variables
    cout<<"Principal = $'s "<<endl;
    cin>>prin;
    cout<<"interest in %/year "<<endl;
    cin>>interest;
    cout<<"Number of compounding periods (yrs)"<<endl;
    cin>>periods;
    //Run the Function
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Future value = $'s"<<fv1(prin,interest,periods)<<endl;
    cout<<"Future value = $'s"<<fv5(prin,interest,periods)<<endl;
    
    return 0;
}

//Future Value Function
//Inputs
//      pv-> Present Value $'s
//      iRate-> Interest Rate
//      n-> number of compounding periods (yrs)
//Output
//      Future Value in $'s
float fv5(float pv,float iRate,int n){
    float save=pv;
    for(int years=n;years>=1;years--){
        save*=(1+iRate/100);
    }
    return save;
    
}

//Future Value Function
//Inputs
//      pv-> Present Value $'s
//      iRate-> Interest Rate
//      n-> number of compounding periods (yrs)
//Output
//      Future Value in $'s
float fv1(float pv,float iRate,int n){
    float save=pv;
    for(int years=1;years<=n;years++){
        save*=(1+iRate/100);
    }
    return save;
    
}