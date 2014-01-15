/* 
 * File:   main.cpp
 * Author: Richard Panganiban
 *January 15, 2014
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const int DOLLAR=100; //100 cents
const int H_Val=50;//50 cents
const int Q_Val=25;//25 cents
const int D_Val=10;//10 cents
const int N_Val=5;//5 cents
const int P_Val=1;//1 cent


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float price,amtTend,nHalf,nPrice;
    char answer;
    //loop to ask numerous times for change calculation
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
                int nPrice=(price+0.005)*DOLLAR;
                int mtTend=(amtTend+0.005)*DOLLAR;
                int amtTend=amtTend*DOLLAR;
                int change=mtTend-nPrice;
        //Calculate how many half dollars
                int nHalf=change/H_Val;
                cout<<"Half Dollar ->"<<nHalf<<endl;
                change-=nHalf*H_Val;
        //Calculate how many quarters
                int nQuart=change/Q_Val;
                cout<<"Quarters ->"<<nQuart<<endl;
                change-=nQuart*Q_Val;
        //Calculate how many dimes 
                int nDimes=change/D_Val;
                cout<<"Dimes ->"<<nDimes<<endl;
                change-=nDimes*D_Val;
        //Calculate how many nickels
                int nNckls=change/N_Val;
                cout<<"Nickels ->"<<nNckls<<endl;
                change-=nNckls*N_Val;
        //Calculate how many pennies
                int nPenn=change/P_Val;
                cout<<"Pennies ->"<<nPenn<<endl;
                change-=nPenn*P_Val;
                cout<<"Would you like to purchase another item (y or n)?"<<endl;
                cin>>answer;
    }while(answer=='y');
    //Exit stage right
    
    return 0;
}

