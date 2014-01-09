/*
 * Name: Jonathan D. Tarris
 * Date: January 9, 2014
 * Interpolation Example using temperature conversion deggre Fahrenheit to 
 * degree Celsius
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
    short f,
          f1,
          f2,
          cIntrp,
          cEq,
          c1,
          c2;
    ifstream input;
    
    //Open the input file
    input.open("Table.dat");
    //Read in the Table data
    input>>f1>>c1;
    input>>f2>>c2;
    //Propt user for degrees C input F
    cout<<"What degree Fahrenheit temperature would you like to convert to degree C"<<endl;
    cin>>f;
    //Caluclate 2 different ways
    cEq=5.0/9*(f-32);
    cIntrp=c1+(c2-c1)*(f-f1)/static_cast<float>(f2-f1);
    //Output resulting temp
    cout<<"The C by Equation = "<<cEq<<endl;
    cout<<"The C by Interpolation = "<<cIntrp<<endl;
    input.close();
    //Exit stage right
    system("PAUSE");
    return EXIT_SUCCESS;
}
