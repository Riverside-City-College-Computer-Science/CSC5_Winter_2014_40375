/* 
 * File:   main.cpp
 * Author: Jonathan D. Tarris
 * Class#: 40375
 * Created on January 13, 2014, 10:34 AM
 * Truth Table
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Vars
    bool x = true,
         y = true;
    
    //Output the table heading
    cout<<"X Y !Y !Y X&&Y X||Y X^Y (X^Y)^X (X^Y)^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    //Output the first row
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<endl;
    //Second Row
    y = false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<endl;
    //Third Row
    x=false;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<endl;
    //Forth Row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<endl;
    return 0;
}