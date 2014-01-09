/*
  Adam Grose
  January 9, 2014
  Interpolation Example
  Using Temperature Conversions
  Degreee Fahrenheit to degree
  Celsius
*/

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare and initialize Variables
    short f, f1=32, f2=212, cInt, cEq, c1=0, c2=100;
    //input the temperature f to convert to c
    cout<<"What degree fahrenheit temperature would you like to convert degree c\n";
    cin>>f;
    //calculate 2 different ways
    cEq=5.0/9*(f-32);
    cInt=c1+(c2-c1)*(f-f1)/static_cast<float>(f2-f1);
    //resulting temperature is
    cout<<"The C by Equation = "<<cEq<<endl;
    cout<<"The C by Interpolation = "<<cInt<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
