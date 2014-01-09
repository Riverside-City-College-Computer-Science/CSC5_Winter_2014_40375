/*
  David Ballantyne
  01/09/14
  purpose: gaming interpolation example
           Fahrenheit to Celsius
*/
//Libraries
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Declare Variables
    short f,f1,f2,c,cIntrp,cEq,c1,c2;
    ifstream input;
    //openfile
    input.open("Table.dat");
    //input
    input>>f1>>c1;
    input>>f2>>c2;
    cout<<"What degree Fahrenheit temperature "
         <<"would you like to convert to Celcius?"<<endl;
         cin>>f;
    //Process equation & interpolation
    cEq=5.0/9*(f-32);     
    cIntrp= c1+(c2 -c1) * ((f- f1)/static_cast<float>(f2-f1));
    //resulting temp is
    cout<<" The C by equation = "<< cEq<<" C"
        << endl<<" The C by interpolation = "
        << cIntrp<<" C" <<endl;
    input.close();
    //Exit Stage Right    
    system("PAUSE");
    return EXIT_SUCCESS;
}
