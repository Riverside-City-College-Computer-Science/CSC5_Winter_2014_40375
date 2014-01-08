/* 
 * File:   main.cpp
 * Author: Donald Allum Jr.
 * Created on January 7, 2014, 9:01 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//System Constants
const float GRAVITY=32.174;//Units=(ft/sec^2)


//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
//Declare Variables
    float time,freefall;
    //Input the time
    cout<<"Input the time in seconds"<<endl;
    cin>>time;
    freefall=GRAVITY*time*time*1/2;
            //Output the result
    cout<<"The Distance Dropped = "
            <<freefall<<"(ft)"<<endl;
    //Exit Stage Right
    return 0;
}

