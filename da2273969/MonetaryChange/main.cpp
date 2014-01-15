/* 
 * File:   main.cpp
 * Author: Donald Allum Jr.
 * Created on January 15, 2014, 9:05 AM
 * 
 */

//System Libraries

#include <iostream>
using namespace std;

//Global Constants
const int DLR_VAL=100;//100 cents
const int H_VAL=50;   //50 cents
const int Q_VAL=25;   //25 cents
const int D_VAL=10;   //10 cents
const int N_VAL=5;    //5 cents
const int P_VAL=1;    //1 cent

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float price,amtTend;
    char answer;
    //loop to ask numerous times for 
    //Change calculation
    do{
        //What is the price of the item?
        cout<<"what is the price of the item? ($'s)\n";
        cin>>price;
        //How much was received?
        do{
           cout<<"what was received/tendered? ($'s) \n";
           cout<<"Has to be greater than the price \n";
           cin>>amtTend;
        }while(amtTend<price);
        //Convert to pennies
                int nPrice=(price+0.005)*DLR_VAL;   //Round up to nearest penny
                int mtTend=(amtTend+0.005)*DLR_VAL; //Round up to nearest penny
                int change=mtTend-nPrice;
        //Calculate how many Half Dollars
                int nHalf=change/H_VAL;
                cout<<"Half Dollars -> "<<nHalf<<endl;
                change-=nHalf*H_VAL;
        //Calculate how many Quarters
                int nQuart=change/Q_VAL;
                cout<<"Quarters -> "<<nQuart<<endl;
                change-=nQuart*Q_VAL;
         //Calculate how many Dimes
                int nDimes=change/D_VAL;
                cout<<"Dimes -> "<<nDimes<<endl;
                change-=nDimes*D_VAL;
         //Calculate how many Nickels
                int nNkls=change/N_VAL;
                cout<<"Nickels -> "<<nNkls<<endl;
                change-=nNkls*N_VAL;
         //Calculate how many Pennies
                int nPenny=change/P_VAL;
                cout<<"Pennies -> "<<nPenny<<endl;
                change-=nPenny*P_VAL;
                cout<<"Would you like to purchase another item? y/n "<<endl;
                cin>>answer;
    }while(answer=='y'); 
    //Exit stage right
    

    return 0;
}

