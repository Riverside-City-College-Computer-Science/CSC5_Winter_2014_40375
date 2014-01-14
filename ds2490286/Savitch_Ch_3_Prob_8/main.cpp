/*
 * File:   main.cpp
 * Author: David W. Smith
 * Created: 01/14/14
 * Showing the effects of inflation
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_PERC=100;

//Function Declarations

//Execution begins here!
int main(){
    //Declare variables
    float price,infltn;
    //Input price
    cout << "Input starting price "
         << "of item in $" << endl;
    cin >> price;
    cout << "Enter inflation rate in %" << endl;
    cin >> infltn;
    cout << setprecision(2);
    cout << fixed;
    cout << showpoint;
    cout << "Initial price: $" << price << endl;
    //Adjust
    infltn /= CNV_PERC;
    // Calculate first year's increase
    price *= (1+infltn);
    // Output
    cout << "First year's price: $" << price << endl;
    // Calculate second year's increase
    price *= (1+infltn);
    // Output
    cout << "Second year's price: $" << price << endl;
    // Calculate third year's increase
    price *= (1+infltn);
    // Output
    cout << "Third year's price: $" << price << endl;
    //Exit, stage right.
    return 0;
}

