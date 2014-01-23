/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 22, 2014, 7:57 PM
 * Read in 3 integers and convert to a float
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void read(int &,int &,int &);
float cnvrt(int,int,int);

int main(int argc, char** argv) {
    //Declare the inputs and output
    int whole,num,den;
    float result;
    //Read the data
    read(whole,num,den);
    //Convert
    result=cnvrt(whole,num,den);
    //Format the output
    cout<<setprecision(3)<<fixed<<showpoint;
    cout<<"$"<<result<<endl;
    //Exit Stage Right
    return 0;
}

float cnvrt(int whole,int num,int den){
    return whole+1.0f*num/den;
}

void read(int &whole,int &num,int &den){
    //Declare the / symbol
    char slash;
    //Prompt for inputs
    cout<<"Input stock price as xxx x/x"<<endl;
    cin>>whole>>setw(2)>>num>>slash>>den;
}

