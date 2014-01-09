/*
  Jennifer Clark
  January 9, 2014
  Interpolation Example
  using Temp Conversion
  degree F to degree C
*/


//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare and initialize variables
    short f,f1=32,f2=212,cInterp,cEq,c1=0,c2=100;
    ifstream input;
    //Open the input file
    input.open("Table.dat");
    //Read in the table data
    input>>f1>>c1;
    input>>f2>>c2;
    //Input the temperature f to convert to c
    cout<<"What degree Farhenheit temperature would you like to convert to Celsius?"<<endl;
    cin>>f;
    //Calculate 2 different ways
    cEq=5/9.0*(f-32);
    cInterp=c1+(c2-c1)*(f-f1)/static_cast<float>(f2-f1);
    //The resulting temperature is...
    cout<<"The C by Equation = "<<cEq<<endl;
    cout<<"The C by Interpolation = "<<cInterp<<endl;
    input.close();

    //Exit Stage Right
    system("PAUSE");
    return EXIT_SUCCESS;
}
