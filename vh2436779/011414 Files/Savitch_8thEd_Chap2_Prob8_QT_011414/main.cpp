/*
    Victoria Hodnett
    January 14, 2014
    Savitch 8th Edition Chapter 2 Problem 8
    Inflation, effects of
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_PERC = 100;

//Function Prototypes

//Execution Begins Here
int main(){
    //Declare variables
    float price, infltn;
    int year, counter = 1;
    //Input price
    cout << "Input the starting price of an item: $";
    cin >> price;
    //Input amount of years
    cout << "How many years from now will you purchase this item? ";
    cin >> year;
    //Input inflation
    cout << "Input the inflation rate over time in percent (%): ";
    cin >> infltn;
    //Adjust
    infltn /= CNV_PERC;
    do {
        //Calculate the next year's increase
        price *= (1+infltn);
        //Output
        cout << "Price increase for year " << year - (year - counter) <<
                " = $" << fixed << showpoint << setprecision(2) << price << endl;
        counter++;
    } while (counter <= year);
    //Exit
    return 0;
}

