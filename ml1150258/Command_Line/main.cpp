/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2013, 1:56 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution starts here!
int main(int argc, char **argv) {
    //Loop thru all command line arguments
    for(int i=0;i<argc;i++){
        cout<<argv[i]<<endl;
    }
    //Exit Stage Right!
    return 0;
}
