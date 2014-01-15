/* 
 * File:   main.cpp
 * Author: Edwin Gibbs
 * Created on January 15, 2014, 9:05 AM
 * Monitary Change
 */
//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const int DLR_VAL=100; //100 cents
const int H_VAL=50; //50 cents
const int Q_VAL=25;//25 cents
const int D_VAL=10;//10 cents
const int N_VAL=5; //5 cents
const int P_VAL=1; //1 cent

//Functional Prototypes

//Execution
int main(int argc, char** argv) {
//Declare Variables
    float price, amtTend;
    char answer;
    //Loop to ask numerous times for change calculation
 do{
        //What is the price of the item
        cout<<"What is the price of the item($'s)?"<<endl;
        cin>>price;
        //How much received?
    do {
        cout<<"What was received/tendered($'s)?"<<endl;
        cout<<"Has to be greater than the price"<<endl;
               cin>>amtTend;
        }while(amtTend<price);
        //Convert to pennies
        int nPrice=(price+.005)*DLR_VAL;//Round up to nearest penny
        int mtTend=(amtTend+.005)*DLR_VAL;//Round up to nearest 6
        int change=mtTend-nPrice;
        //Calculate how many half dollars
        int nHalf=change/H_VAL;
        cout<<"Half dollars ->"<<nHalf<<endl;
        change-=nHalf*H_VAL;
       
         //Calculate how many quarters
        int nQuart=change/Q_VAL;
        cout<<"Quarters ->"<<nQuart<<endl;
        change-=nQuart*Q_VAL;
         //Calculate how many dimes
        int nDimes=change/D_VAL;
        cout<<"Dimes ->"<<nDimes<<endl;
        change-=nDimes*D_VAL;
        //Calculate how many nickels
        int nNkls=change/N_VAL;
        cout<<"Nickels ->"<<nNkls<<endl;
        change-=nNkls*N_VAL;
        //Calculate how many pennies
        int nPns=change/P_VAL;
        cout<<"Pennies ->"<<nPns<<endl;
        change-=nPns*P_VAL;
        cout<<"Would you like to purchase another item (y/n)"<<endl;
        cin>>answer;
    }while(answer=='y');
    //Exit 
    
    return 0;
}
    
    

