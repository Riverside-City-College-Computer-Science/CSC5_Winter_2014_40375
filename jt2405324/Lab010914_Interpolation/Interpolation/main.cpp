/*
 * Name: Jonathan D. Tarris
 * Date: January 9, 2014
 * Interpolation Example using temperature conversion deggre Fahrenheit to 
 * degree Celsius
*/

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char *argv[]){
    //Declare and initialize variables
    short f,
          f1=32,
          f2=212,
          cIntrp,
          cEq,
          c1=0,
          c2=100;
    
    //Propt user for degrees C input F
    cout<<"What degree Fahrenheit temperature would you like to convert to degree C"<<endl;
    cin>>f;
    
    //Caluclate 2 different ways
    cEq=5.0/9*(f-32);
    cIntrp=c1+(c2-c1)*(f-f1)/static_cast<float>(f2-f1);
    
    //Output resulting temp
    cout<<"The C by Equation = "<<cEq<<endl;
    cout<<"The C by Interpolation = "<<cIntrp<<endl;
    //Exit stage right
    system("PAUSE");
    return EXIT_SUCCESS;
}
