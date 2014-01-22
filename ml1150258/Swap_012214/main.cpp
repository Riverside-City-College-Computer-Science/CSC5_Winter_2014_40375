/* 
 * File:   main.cpp
 * Author: Dr. Mark E.Lehr
 * Created on January 22, 2014, 10:19 AM
 * Illustrate -> Pass by Reference, Random Numbers
 * Overloading Functions
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void swap(int &,int &);
void swap(short &,short &);
short sDrvGen();
int   iDrvGen();

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    short sa,sb;
    int   ia,ib;
    //Initialize Variables
    sa=sDrvGen(); sb=sDrvGen();
    ia=iDrvGen(); ib=iDrvGen();
    //Output before the swap
    cout<<"Short Before Swap {"<<sa<<","<<sb<<"}"<<endl;
    cout<<"Int   Before Swap {"<<ia<<","<<ib<<"}"<<endl;
    //Perform the Swap
    swap(sa,sb); swap(ia,ib);
    //Output the result of the swap
    cout<<"Short After  Swap {"<<sa<<","<<sb<<"}"<<endl;
    cout<<"Int   After  Swap {"<<ia<<","<<ib<<"}"<<endl;
    //Exit stage right
    return 0;
}

//Generate any 4 digit integer
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

