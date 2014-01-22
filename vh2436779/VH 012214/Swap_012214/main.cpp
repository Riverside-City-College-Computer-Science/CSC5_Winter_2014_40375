/* 
 * File:   main.cpp
 * Author: Victoria Hodnett
 * Created on January 22, 2014, 10:19 AM
 * Illustrate: Pass by Reference, Random Numbers,
 * Overloading Functions
 * Swap
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void  swap(int&, int&);
void  swap(short&, short&);
short sDrvGen();
int   iDrvGen();

//Execution Begins
int main(int argc, char** argv) {
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //srand(0); Why does it come out the same each time?
    //Declare variables
    short sa, sb;
    int ia, ib;
    //Initialize variables
    sa = sDrvGen(); sb = sDrvGen();
    ia = iDrvGen(); ib = iDrvGen();
    //Output before the swap
    cout << "Short Before Swap: {" << sa << ", " << sb << "}" << endl;
    cout << "Int   Before Swap: {" << ia << ", " << ib << "}" << endl;
    //Perform the swap
    swap(sa, sb); swap(ia, ib);
    //Output the result of the swap
    cout << "Short After  Swap: {" << sa << ", " << sb << "}" << endl;
    cout << "Int   After  Swap: {" << ia << ", " << ib << "}" << endl;
    
    //Exit
    return 0;
}

void swap(int& a, int& b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void swap(short& a, short& b){
    short temp = a;
    a = b;
    b = temp;
}

//Generate short between 1 and 1000
short sDrvGen(){
    short random = rand()%1000+1;
    return random;
}
/*
 * Generate completely random short
short sDrvGen(){
    return static_cast<short>(rand());
}
*/

//Generate a 4-digit integer
int iDrvGen(){
    int random = rand()%9000+1000;
    return random;
}
/*
 * Generate completely random int
int iDrvGen(){
    return static_cast<int>(rand());
}
*/