/* 
 * File:   main.cpp
 * Author: Donald Allum Jr.
 *Created on January 13, 2014, 10:34 AM
 * Truth Table
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare variables
    bool x=true,y=true;
    //Output the table heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X "
            <<"!(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;   
    //Output the first row
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";     
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //Output the second row
    y=false;
     cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";     
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
  
   
    return 0;
}

