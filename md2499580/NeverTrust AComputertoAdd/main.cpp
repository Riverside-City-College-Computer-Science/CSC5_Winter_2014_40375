/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 *
 * Created on January 15, 2014, 10:59 AM
 */

#include <iostream>
using namespace std;

//Global Constants

//Function prototypes

//Execution Begins here

int main(int argc, char** argv) {
    //DEclare Variables
    float sum=0.0f,frac=0.1f,prod;
    int loop=1e7;//10 million
    //loop
    for(int i=1;i<=loop;i++){
        sum+=frac;
    }
    prod=loop*frac;
    //output the result
    cout<<frac<<" added "<<loop<<" times = "<<sum<<endl;
    cout<<"However the product "<<frac<<" times "<<loop<<" = "<<sum<<endl;
    //Exit Stage Right 
    return 0;
}

