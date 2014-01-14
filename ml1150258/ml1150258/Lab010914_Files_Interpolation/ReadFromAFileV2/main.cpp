/*
  Dr. Mark E. Lehr
  January 9th, 2014
  Interpolation Example
  using temperature conversion
  degree Fahrenheit to degree
  Celsius
*/

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char *argv[]){
    //Declare variables
    short f,f1,f2,cIntrp,cEq,c1,c2;
    ifstream input;
    //Open the input file
    input.open("Table.dat");
    //Read in the table data
    input>>f1>>c1;
    input>>f2>>c2;
    //Input the temperature f to convert to c
    cout<<"What degree farhenheit temperature "
        <<"would you like to convert to degree c"<<endl;
    cin>>f;
    //Calculate 2 differnt ways
    cEq=static_cast<short>(5.0f/9*(f-32));
    cIntrp=static_cast<short>(c1+(c2-c1)*(f-f1)/static_cast<float>(f2-f1));
    //The resulting temperature is
    cout<<"The C by Equation = "<<cEq<<endl;
    cout<<"The C by Interpolation = "<<cIntrp<<endl;
    //Exit stage right
    input.close();
    //system("PAUSE");
    return 0;
}
