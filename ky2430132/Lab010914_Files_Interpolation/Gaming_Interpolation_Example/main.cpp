/*
  Kai Ming Yau
  January 9th, 2014
  Interpolation Example
  using temperature conversion
  degree fahrenheit to degree
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
    //Declare and initialize variables
    short f,f1,f2,cIntrp,cEq,c1,c2;
    ifstream input;
    //Open the input file
    input.open("table.dat");
    //Read in the table data
    input>>f1>>c1;
    input>>f2>>c2;
    //input the tempureture f to convert to c
    cout<<"What degree farhenheit temperature"
    <<"Would you like to convert to degree c"<<endl;
    cin>>f;
    //Calculate 2 differnt ways
    cEq=5.0/9*(f-32);
    cIntrp=c1+(c2-c1)*(f-f1)/static_cast<float>(f2-f1);
    //The resulting tempureture is
    cout<<"The C by Equation = "<<cEq<<endl;
    cout<<"The C by Interpolation = "<<cIntrp<<endl;
    //Exit stage right;
    input.close();
    system("PAUSE");
    return EXIT_SUCCESS;
}
