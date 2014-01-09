/* 
 * File:   main.cpp
 * Author: Jennifer Clark
 * Created on January 9, 2014, 10:27 AM
 * Character Graphics
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare the character variable
    char letter;
    //input the letter
    cout<<"What letter would you like to use to output a capital C"<<endl;
    cin>>letter;
    //Output the capital C
    cout<<"  "<<letter<<" "<<letter<<" "<<letter<<endl;
    cout<<" "<<letter<<"     "<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<" "<<letter<<"     "<<letter<<endl;
    cout<<"  "<<letter<<" "<<letter<<" "<<letter<<endl;
    return 0;
}

