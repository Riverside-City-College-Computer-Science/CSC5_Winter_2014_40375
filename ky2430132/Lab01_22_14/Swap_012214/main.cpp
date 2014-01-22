/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 22, 2014, 10:19 AM
 * illustrate -> pass by reference, random numbers
 * overloading function
 */

//System libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Global Constants

//Function Prototypes
void swap (int &, int &);
void swap (short &, short &);
short sDrvGen();
int   iDrvGen();


//Execution Begins Here!
int main(int argc, char** argv) {
//initialize the random number generator
    srand (static_cast<unsigned int>(time(0)));
    
    //declare variables
    short sa, sb;
    int ia, ib;
    //initialize Variables
    sa=sDrvGen();sb=sDrvGen();
    ia=iDrvGen();ib=iDrvGen();
    //Output before the swap
    cout<<"before swap ("<<sa<<","<<sb<<")"<<endl;
    cout<<"Int    Before swap ("<<ia<<","<<ib<<")"<<endl;
    //Perform the Swap
    swap(sa,sb); swap(ia,ib);
    //Output the result of the swap
    cout<<"After swap ("<<sa<<","<<sb<<")"<<endl;
    cout<<"Int    After swap ("<<ia<<","<<ib<<")"<<endl;
    //Exit Stage Right
    return 0;
}

//Generate a 4 digit integer;
int   iDrvGen(){
    int random=rand()%9000+1000;
 return random;   
}

//Generate a short between 1 and 1000;
short sDrvGen(){
    short random=rand()%1000+1;
    return random;
}

void swap (int &a, int &b){
    a=a^b;
    b=a^b;
    a=a^b;
            
}
void swap (short &a, short &b){
    short temp=a;
    a=b;
    b=temp;
}
