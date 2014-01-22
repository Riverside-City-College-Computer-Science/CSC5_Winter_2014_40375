/* 
 * File:   main.cpp
 * Author: Cesar E. Velazquez
 * Created on January 22, 2014, 10:19 AM
 * Illustrate -> Pass by Reference, Random Numbers
 * Overloading Functions
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void swap(int &,int &);
void swap(short &,short &);
short sDrvGen();
int iDrvGen();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variable
    short sa,sb;
    int ia,ib;
    //Initialize var
    sa=sDrvGen(); sb=sDrvGen();
    ia=iDrvGen(); ib=iDrvGen();
    //Output
    cout<<"Short Before Swap {"<<sa<<" , "<<sb<<" } "<<endl;
    cout<<"Int   Before Swap {"<<ia<<" , "<<ib<<" } "<<endl;
    //Perform the Swap
    swap(sa,sb); swap(ia,ib);
    //Output result of swap
    cout<<"Short After Swap {"<<sa<<" , "<<sb<<" } "<<endl;
    cout<<"Int   After Swap {"<<ia<<" , "<<ib<<" } "<<endl;
    //Exit Stage Right

    return 0;
}

int iDrvGen(){
    return static_cast<int>(rand());
}

short sDrvGen(){
    return static_cast<short>(rand());
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
