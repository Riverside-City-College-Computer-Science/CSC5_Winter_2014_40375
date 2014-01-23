//
//  main.cpp
//  Swap_012214
//  Created by Donald Allum on 1/22/14.
//  Illustrate-> Pass by reference, random numbers overloading functions

//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//Global constants

//Function prototypes
void swap(int&,int&);
void swap(short&,short&);
short sDrvGen();
int   iDrvGen();


//Execution begins here

int main(int argc, const char * argv[]){
    
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    short sa,sb;
    int ia,ib;
    //initialize variables
    sa=sDrvGen();
    sb=sDrvGen();
    ia=iDrvGen();
    ib=iDrvGen();
    //output before the swap
    cout<<"Short Before swap {"<<sa<<","<<sb<<"}"<<endl;
    cout<<"Int   Before swap {"<<ia<<","<<ib<<"}"<<endl;
    //Perform the swap
    swap(sa,sb); swap(ia,ib);
    //Output the result of the swap
    
    cout<<"Short after swap {"<<sa<<","<<sb<<"}"<<endl;
    cout<<"Int   after swap {"<<ia<<","<<ib<<"}"<<endl;
    //exit stage right
    
    return 0;
}
//Genereate a 4 digit integer
int   iDrvGen(){
    int random=rand()%9000+1000;
    return random;
}
//Generate a short between 1 and 1000
short sDrvGen(){
    short random=rand()%1000+1;
    return random;
}


void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
    
}
void swap(short &a,short &b){
    short temp=a;
    a=b;
    b=temp;
}