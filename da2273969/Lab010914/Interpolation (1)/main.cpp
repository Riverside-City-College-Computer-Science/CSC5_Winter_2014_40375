/*
Donald Alum Jr.
January 9th, 2014
Interpolation Example 
using temperature conversion 
degree Farenheit to degree
Celsius
*/

//System Libraries

#include <iostream>
using namespace std;
//Global constants

//Function prototypes

//Execution begins here

int main(int argc, char *argv[]){
    
    //Declare and initialize variables
    short f,f1=32,f2=212,cIntrp,cEq,c1=0,c2=100;
    //Input the temperature f to convert to c
    cout<<"What degree Farenheit temperature"
    <<"would you like to convert to degree c?"<<endl;
    cin>>f;
    //Calculate 2 different ways
    cEq=5.0/9*(f-32);
    cIntrp=c1+(f-f1)*(c2-c1)/static_cast<float>(f2-f1);
    //The resulting teperature is 
    //Exit stage right
    cout<<"The C by equation = "<<cEq<<endl;
    cout<<"The C by interpolation = "<<cIntrp<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
