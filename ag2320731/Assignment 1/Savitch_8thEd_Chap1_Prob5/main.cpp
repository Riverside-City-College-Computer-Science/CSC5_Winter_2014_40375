/* 
 * File:   main.cpp
 * Author: Adam Grose
 * January 9th, 2014
 * Purpose: Output both sum and product
 */

//System Libraries
#include <iostream>
using namespace std;

//No Global Constants or Variables

//No Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    int nmb1;//first integer
    int nmb2;//second integer
    int sum;//sum of first and second integers
    int prdct;// product of first and second integers
    
    //Input 2 integers
    cout<<"Input 2 whole integers and press enter.\n";
    cin>>nmb1>>nmb2;
    //Calculate and output the sum
    cout<<"The sum of ";
    cout<<nmb1;
    cout<<" and ";
    cout<<nmb2;
    cout<<" is \n";
    sum=nmb1+nmb2;
    cout<<sum<<"\n";
    //Calculate and output the product
    cout<<endl<<"The product of ";
    cout<<nmb1;
    cout<<" and ";
    cout<<nmb2;
    cout<<" is \n";
    prdct=nmb1*nmb2;
    cout<<prdct<<endl;
    //Exit Stage Right
    
    
     return 0;
}

