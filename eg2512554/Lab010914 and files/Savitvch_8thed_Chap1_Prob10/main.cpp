/* 
 * File:   main.cpp
 * Author: Edwin Gibbs
 * Created on January 9, 2014, 10:26 AM
 * Character graphics
 */
//system Libraries
#include <iostream>

using namespace std;

//global constants

//Functional Prototypes

//Execution Begins here
int main(int argc, char** argv) {
//Declare character variables 
    char letter;
    //Input the letter
    cout<<"What letter would you like to use "
            <<"to output a capital c"<<endl;
    cin>>letter;
    //Output capital c
    cout<<"  "<<letter<<letter<<letter<<endl;
    cout<<" "<<letter<<"    "<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<""<<letter<<"     "<<letter<<endl;
    cout<<"  "<<letter<<letter<<letter<<endl;
    
     //Exit
     
    return 0;
}

