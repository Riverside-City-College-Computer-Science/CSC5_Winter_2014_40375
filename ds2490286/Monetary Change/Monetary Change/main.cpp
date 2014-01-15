/* 
 * File:   main.cpp
 * Author: David W. Smith
 * Created on January 15, 2014, 9:05 AM
 * Determine change to give to purchaser
 */
//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const int DLR_VAL=100; //100 cents
const int H_VAL=50; //50 cents
const int Q_VAL=25; //25 cents
const int D_VAL=10; //10 cents
const int N_VAL=5; // 5 cents
const int P_VAL=1; // 1 cent

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Define Local Variables
    float price,amtTend;
    char answer;
    //Loop to ask numerous times
    //for change calculation.
    do {
        cout << "What is the price of the item?" << endl;
        cin >> price;
        do {
                cout << "What was received/tendered?" << endl;
                cout << "Has to be greater than the price" << endl;
                cin >> amtTend;
        } while(amtTend < price);
        //Convert to pennies
                int nPrice = (price+.005)*DLR_VAL;
                int mtTend= (amtTend+.005)*DLR_VAL;
                int change = mtTend - nPrice;
        //Calc number of half-dollars
                int nHalf = change / H_VAL;
                cout << "Half Dollars -> " << nHalf << endl;
                change -= nHalf*H_VAL;
        //Calc Quarters
                int nQuart=change/Q_VAL;
                cout << "Quarters -> " << nQuart << endl;
                change -= nQuart*Q_VAL;
        // Calc dimes
                int nDimes=change/D_VAL;
                cout << "Dimes -> " << nDimes << endl;
                change -= nDimes*D_VAL;
        // Calc nickels
                int nNickel=change/N_VAL;
                cout << "Nickels -> " << nNickel << endl;
                change -= nDimes*N_VAL;
        //Calc pennies
                int nPenny=change/P_VAL;
                cout << "Pennies -> " << nPenny << endl;
                change -= nPenny*P_VAL;
        //Are we done?
                cout << "Would you like to purchase another item (y/n)?" << endl;
                cin >> answer;
    } while(answer == 'y');

    //Exit, stage right
    return 0;
}

