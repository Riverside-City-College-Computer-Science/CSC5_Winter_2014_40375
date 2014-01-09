/*
Edwin Gibbs
January 9th, 2014
Interpolation Example using temperature conversion degree fahr to degree cels*/

//System Libraries
#include <cstdlib>
#include <iostream>

//Global constants

//Functional Prototypes

//Execution

using namespace std;
int main(int argc, char *argv[]){
    //Declare Variables
    short f,f1=32,f2=212,cIntrp,cEq,c1=0,c2=100;
    cout<<"What degree fahrenheit temperature"
    <<"would you like to convert to degree c"<<endl;
    cin>>f;
    //Calculate two different ways
    cEq=5.0/9*(f-32);
    cIntrp=c1+(c2-c1)*(f-f1)/static_cast<float>(f2-f1);
    //The resulting temperature is
    cout<<"The c equation conversion by equation = "<<cEq<<endl;
    cout<< "The c by Interpolation ="<<cIntrp<<endl;
    //Exit
    system("PAUSE");
    return EXIT_SUCCESS;
}
