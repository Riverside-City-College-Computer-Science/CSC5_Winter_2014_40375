/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 15, 2014, 9:05 AM
 * 
 */

//system libraries
#include <iostream>

using namespace std;
//global constants
const int DLR_VAL=100//100 cents
const int H_VAL=50;//50 cents
const int O_VAL=25;//25 cents
const int D_VAL=10;//10 cents
const int N_VAL=5;//5 cents
const int F_VAL=1;//1 cent

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float price, amtTend;
    //loop to ask numerous times for change calculation 
    do{
        //what is the price of the item
        cout<<"What is the price of the item ($'s)?"<<endl;
        cin>>price;
        //how much was received
    do{
        
        cout<<"What was received/tendered ($'s)?"<<endl;
        cout<<"Has to be greater than the price"<<endl;
        cin>>amtTend;
        }while(amtTend<price); 
        
     //convert to pennies
        int nPrice=price*DLR_VAL;
        int mtTend=amtTend*DLR_VAL;
        int change=mtTend-nPrice;
    //calculate how many half dollars
        int nHalf=price/H_VAL;
        cout<<"Half Dollars -> "<<nHalf<<endl;
        price-=nHalf*H_VAL;
        cout<<"Would you like to purchase another item (y or n)"<<endl;
            cin>>answer<<endl;
     }while(answer=='y');
    
    //exit stage right
    return 0;
}

