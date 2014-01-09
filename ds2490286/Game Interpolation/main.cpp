/*
 * David W. Smith - 1/9/14
 * Interpolation of Fahrenheit / Celsius
*/

// System Libraries
#include <iostream>
#include <fstream>
using namespace std;

// Global constants

// Function prototypes

// Execution begins here
int main(int argc, char *argv[]){
    //Declare & init variables
    short f,f1=32,f2=212,cIntrp,cEq,c1=0,c2=100;
    ifstream input;
    input.open("Table.dat");
    input >> f1 >> c1;
    input >> f2 >> c2;
    //Input the temperature f to convert to to c
    cout << "What temperature fahrenheit would you" << endl;
    cout << "like to convert to degrees celsious?" << endl;
    cin>>f;
    //Calc 2 different ways
    cEq=5.0/9*(f-32);
    cIntrp=c1+(c2-c1)*(f-f1)/static_cast<float>(f2-f1);
    //Display 2 results
    cout << "C by Equation: " << cEq << endl;
    cout << "C by Interpolation: " << cInterp << endl;
    // Exit, stage right
    input.close("Table.dat");
    system("PAUSE");
    return EXIT_SUCCESS;
}
