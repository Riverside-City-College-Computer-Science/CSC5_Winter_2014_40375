/* 
Name: Fuaad Khan
Date: January 9, 2014
Purpose: Interpolation example using temperature convversion degree Farenheit to
         degree Celsius.
*/

//System libraries
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants

//Function prototype

//Execuction Begins Here!
int main(int argc, char *argv[]){
    
    //Declare and initialize Variables
    short f, f1, f2, cEq, cIntrp, c1, c2;
    ifstream input;
    
    //Open the input file
    input.open("Table.dat");
    
    //Read in the table
    input>>f1>>c1;
    input>>f2>>c2;
    
    //Input the temperature f to convert to c
    cout<<"What degreee farenheit temperature would you like to convert to degee c?"<<endl;
    cin>>f;
    
    //Calculate 2 different ways
    cEq=5.0/9*(f-32);
    cIntrp=c1+(c2-c1)*(f-f1)/static_cast<float>(f2-f1);
    
    //The resulting temperature is:
    cout<<"The C by equation equals "<<cEq<<"."<<endl;
    cout<<"The C by interpolation equals "<<cIntrp<<"."<<endl;
    input.close();
    
    //Exit Stage Right
    system("PAUSE");
    return EXIT_SUCCESS;
}
