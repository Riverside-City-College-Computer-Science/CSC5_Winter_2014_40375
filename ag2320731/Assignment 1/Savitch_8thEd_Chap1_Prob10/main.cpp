/* 
 * File:   main.cpp
 * Author: Adam Grose
 * January 9th, 2014
 * Purpose: Output "C" composed of any keyboard character
 */
//System Libraries
#include <iostream>

using namespace std;

//No Global Constants or Variables

//No Prototype Functions

//Execution Begins Here
int main(int argc, char** argv) {
   
   //Declare variables
    char kybchar;//keyboard character 
    
    //Output Large C
    cout<<"Enter any character\n";
    cin>>kybchar;
    cout<<endl<<"  "<<kybchar<<" "<<kybchar<<" "<<kybchar<<endl;
    cout<<" "<<kybchar<<"      "<<kybchar<<endl;
    cout<<kybchar<<endl;
    cout<<kybchar<<endl;
    cout<<kybchar<<endl;
    cout<<kybchar<<endl;
    cout<<kybchar<<endl;
    cout<<" "<<kybchar<<"      "<<kybchar<<endl;
    cout<<"  "<<kybchar<<" "<<kybchar<<" "<<kybchar<<endl;
    
    return 0;
}

