/* 
 * File:   main.cpp
 * Author: Victoria Hodnett
 * Created on January 15, 2014, 10:58 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float sum = 0.0f, frac=0.1f,prod;
    int loop = 1e7;//10 million
    //Loop
    for (int i = 1; i <= loop; i++){
        sum+=frac;
    }
    prod = loop * frac;
    //Output the result
    cout << frac << " added " << loop << " times = "
         << sum << endl;
    cout << "However the product "
         << frac << " times " << loop << " = "
         << prod << endl;
    //Exit
    return 0;
}

