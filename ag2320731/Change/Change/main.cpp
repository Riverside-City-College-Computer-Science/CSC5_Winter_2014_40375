/* 
 * File:   main.cpp
 * Author: Adam Grose
 * Created on January 15, 2014, 9:04 AM
 */
//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const int DLR_VAL=100; //100 cents
const int H_VAL=50;//50 cents
const int Q_VAL=25;//25 cents
const int D_VAL=10;//10 cents
const int N_VAL=5; // 5 cents
const int P_VAL=1; // 1 cent

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float price,amtTend;
    char answer;
    //Loop to ask numerous times for
    //change calculation
    do{
        //What is the price of the item
        cout<<"What is the price of the item ($'s)?"<<endl;
        cin>>price;
        //How much was received
        do{
             cout<<"What was received/tendered ($'s)?"<<endl;
             cout<<"Has to be greater than the price"<<endl;
             cin>>amtTend;
        }while(amtTend<price);
        //Convert to pennies
        int nPrice=(price+0.005)*DLR_VAL;//round up to nearest penny
        int mtTend=(amtTend+0.005)*DLR_VAL;//round up to nearest penny
        int change=mtTend-nPrice;
        //Calculate how many Half Dollars
                int nHalf=change/H_VAL;
                cout<<"Half Dollars -> "<<nHalf<<endl;
                change-=nHalf*H_VAL;
        //Calculate how many Quarters
                int nQuart=change/Q_VAL;
                cout<<"Quarters -----> "<<nQuart<<endl;
                change-=nQuart*Q_VAL;
        //Calculate how many Dimes
                int nDimes=change/D_VAL;
                cout<<"Dimes --------> "<<nDimes<<endl;
                change-=nDimes*D_VAL;
        //Calculate how many Nickels
                int nNick=change/N_VAL;
                cout<<"Nickels ------> "<<nNick<<endl;
                change-=nNick*N_VAL;
         //Calculate how many Pennies
                int nPen=change/P_VAL;
                cout<<"Pennies ------> "<<nPen<<endl;
        cout<<"Would you like to purchase another item (y or n)"<<endl;
        cin>>answer;
    }while(answer=='y');
    //Exit stage right
    return 0;
}

