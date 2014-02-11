/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 15, 2014, 10:58 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Begin Execution Here
int main(int argc, char** argv) {
    //Declare variables
    float sum=0.0f,frac=0.5f,prod;
    int loop=1e7;//10 million
    //Loop
    for(int i=1;i<=loop;i++){
        sum+=frac;
    }
    prod=loop*frac;
    //Output the result
    cout<<frac<<" added "<<loop<<" times = "
        <<sum<<endl;
    cout<<"However the product "
        <<frac<<" times "<<loop<<" = "
        <<prod<<endl;
    //Exit stage right
    return 0;
}

