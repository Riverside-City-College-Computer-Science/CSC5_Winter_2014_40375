/*
  David Ballantyne
  01/08/14
  purpose:Gaddis_7thEd_Ch2_prob4
  Version 2 - Dr. Mark E. Lehr
*//
//Libraries
#include <iomanip>
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Functioning Prototypes

//Execution begins Here
int main(int argc, char *argv[]){
    //Variables
    float meal, tax, tip, subttl, total;
    //process
    meal= 44.50;
    tax= 6.75e-2 * meal; 
    subttl= meal + tax;
    tip= subttl* 1.5e-1;
    total= meal + tip;
    
    //output
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<" Meal Charge $"<< meal<<endl<<
          " Tax         $"<< tax<<endl<<
          " Tip         $"<< tip<<endl<<
          " Total       $"<< total<<endl;
    //Exit Stage Right
    system("PAUSE");
    return EXIT_SUCCESS;
}
