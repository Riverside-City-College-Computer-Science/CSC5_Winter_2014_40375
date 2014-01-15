/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 15, 2014, 9:05 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const int H_VAL=50;//50cents
const int Q_VAL=25;//25cents
const int D_VAL=10;//10cents
const int N_VAL=5;//5cents
const int P_VAL=1;//1cents
const int DLR_VAL=100;//100cents
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare Variables
    float price, amtTend;
    char answer;
   
    //loop to ask numerous times for
    //change calculation
    do{
       //what is the price of the item
        cout<<"What is the price of the item?"<<endl;
        cin>>price;
        //How much was received
        do{
                cout<<"What was received/tended ($'s)?"<<endl;
                cout<<"has to be greater than the price"<<endl;
                cin>>amtTend;
        }while(amtTend<price);
        //Convert to pennies
                int nPrice=(price+0.001)*DLR_VAL;//Round up to nearest 
                int mtTend=(amtTend+0.001)*DLR_VAL;//Round up to nearest 
                int change=mtTend-nPrice;
        //calculate how many half dollars
                int nHalf=change/H_VAL;
                cout<<"Half Dollars -> "<<nHalf<<endl;
                change-=nHalf*H_VAL;
         //calculate how many Quarter dollars
                int nQuart=change/Q_VAL;
                cout<<"quarters Dollars -> "<<nQuart<<endl;
                change-=nQuart*Q_VAL;
        //calculate how many Dime dollars
                int nDime=change/D_VAL;
                cout<<"Dime Dollars -> "<<nDime<<endl;
                change-=nDime*D_VAL;
        //calculate how many Nickel dollars
                int nNickel=change/N_VAL;
            cout<<"Nickel Dollars -> "<<nNickel<<endl;
                change-=nNickel*N_VAL;
        //calculate how many Pennies dollars
                int npenny=change/P_VAL;
                cout<<"penny Dollars -> "<<npenny<<endl;
                change-=npenny*P_VAL;
                cout<<"Would you like to purchase another item?(y or n)"<<endl;
                cin>>answer;
    }while(answer =='y')
        ;
    
    return 0;
}

