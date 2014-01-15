/* 
 * File:   main.cpp
 * Author: Victoria Hodnett
 * Created on January 15, 2014, 9:05 AM
 * Monetary Change
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const int DLR_VAL = 100; //100 cents
const int H_VAL = 50; //50 cents
const int Q_VAL = 25; //25 cents
const int D_VAL = 10; //10 cents
const int N_VAL = 5;  // 5 cents
const int P_VAL = 1;  // 1 cent

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float price, amtTend, chng;
    char answer;
    //Loop to ask numerous times for change calculation
    do{
        //What is the price of the item
        cout << "What is the price of the item? $";
        cin >> price;
        do{
            //How much was received?
            cout << "What was the amount tendered? Must be greater "
                    "than or equal to the price. $";
            cin >> amtTend;
        }while (amtTend < price);
        //Convert to pennies
        int nPrice = price*DLR_VAL;
        int mtTend = amtTend*DLR_VAL;
        //Calculate change
        chng = mtTend - nPrice;n
        //Determine how change is returned
        //Dollars
        int nDollar = chng/DLR_VAL;
        cout << "Dollars: " << nDollar << endl;
        chng -= nDollar*DLR_VAL;
        //Half Dollars
        int nHalf = chng/H_VAL;
        cout << "Half dollars: " << nHalf << endl;
        chng -= nHalf*H_VAL;
        //Quarters
        int nQuar = chng/Q_VAL;
        cout << "Quarter: " << nQuar << endl;
        cout << "Would you like to purchase another item? Y/N ";
        cin >> answer;
    }while(answer == 'y' || answer == 'Y');
    
    //Exit
    return 0;
}

