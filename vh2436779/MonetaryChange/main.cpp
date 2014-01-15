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
const int HUN_DLR = 10000; //10000 cents, $100
const int FIF_DLR = 5000; //5000 cents, $50
const int TWN_DLR = 2000; //2000 cents, $20
const int TEN_DLR = 1000; //1000 cents, $10
const int FIV_DLR = 500; //500 cents, $5
const int DLR_VAL = 100; //100 cents, $1
const int H_VAL = 50; //50 cents
const int Q_VAL = 25; //25 cents
const int D_VAL = 10; //10 cents
const int N_VAL = 5;  // 5 cents
const int P_VAL = 1;  // 1 cent

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float price, amtTend;
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
        int nPrice = (price+0.005)*DLR_VAL;//Round up to nearest penny
        int mtTend = (amtTend+0.005)*DLR_VAL;//Round up to nearest penny
        //Calculate change
        int change = mtTend - nPrice;
        //Determine how change is returned
         //Hundreds
            int nHunDlr = change/HUN_DLR;
            cout << "Hundreds: " << nHunDlr << endl;
            change -= nHunDlr*HUN_DLR;
         //Fifties
            int nFifDlr = change/FIF_DLR;
            cout << "Fifties: " << nFifDlr << endl;
            change -= nFifDlr*FIF_DLR;
         //Twenties
            int nTwnDlr = change/TWN_DLR;
            cout << "Twenties: " << nTwnDlr << endl;
            change -= nTwnDlr*TWN_DLR;
         //Tens
            int nTenDlr = change/TEN_DLR;
            cout << "Tens: " << nTenDlr << endl;
            change -= nTenDlr*TEN_DLR;
         //Fives
            int nFivDlr = change/FIV_DLR;
            cout << "Fives: " << nFivDlr << endl;
            change -= nFivDlr*FIV_DLR;
         //Dollars, Ones
            int nDollar = change/DLR_VAL;
            cout << "Ones: " << nDollar << endl;
            change -= nDollar*DLR_VAL;
         //Half Dollars
            int nHalf = change/H_VAL;
            cout << "Half dollars: " << nHalf << endl;
            change -= nHalf*H_VAL;
         //Quarters
            int nQuar = change/Q_VAL;
            cout << "Quarters: " << nQuar << endl;
            change -= nQuar*Q_VAL;
         //Dimes
            int nDime = change/D_VAL;
            cout << "Dimes: " << nDime << endl;
            change -= nDime*D_VAL;
         //Nickels
            int nNickl = change/N_VAL;
            cout << "Nickels: " << nNickl << endl;
            change -= nNickl*N_VAL;
         //Pennies
            int nPenn = change/P_VAL;
            cout << "Pennies: " << nPenn << endl;
        //Output total change
            cout << "Your total change is $" 
                 << (mtTend - nPrice) / 100.0 << endl;
        //Prompt to repeat
        cout << "Would you like to purchase another item? Y/N ";
        cin >> answer;
    }while(answer == 'y' || answer == 'Y');
    
    //Exit
    return 0;
}

