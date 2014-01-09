/*
Cesar F Vasquez
January 9th, 2014
Interpolation Example
uing temperature conversion
degree Fahrenheit to degree
Celsius
*/

//System Libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char *argv[]){
    //Declare and initialize variables
    short f,f1=32,f2=212,cIntrp,cEq,c1=0,c2=100;
    //Input the temperature f to convert to c
    cout<<"What degree farhenheit temperature "
        <<"whould you like to convert to degree Celcius"<<endl;
    cin>>f;
    //Calculate 2 differnt ways
    cEq=5.0/9*(f-32);
    cIntrp=c1+(c2-c1)*(f-f1)/static_cast<float>(f2-f1);
    //the resulting temperature is
    cout<<"The C by Equation = "<<cEq<<endl;
    cout<<"The C by Interpolation = "<<cIntrp<<endl;
    //Exit
    system("PAUSE");
    return EXIT_SUCCESS;
}
