/* 
 * File:   main.cpp
 * Author: Adam Grose
 * January 9, 2014
 * Purpose: Output "C" composed of any keyboard character
 */

//Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//No Global Constants or Variables

//No Prototype Functions

//Execution Begins Here
int main(int argc, char** argv) {
   
   //Declare variables
    char kybchar;//keyboard character 
    
    cout<<"Enter any character\n";
    cin>>kybchar;
    cout<<"   "<<kybchar<<" "<<kybchar<<" "<<kybchar<<endl;
    cout<<" "<<kybchar<<"      "<<kybchar<<endl;
    cout<<kybchar<<endl;
    cout<<kybchar<<endl;
    cout<<kybchar<<endl;
    cout<<kybchar<<endl;
    cout<<kybchar<<endl;
    cout<<" "<<kybchar<<"      "<<kybchar<<endl;
    cout<<"   "<<kybchar<<" "<<kybchar<<" "<<kybchar;
    
    //Exit Stage Right
    
    return 0;
}

