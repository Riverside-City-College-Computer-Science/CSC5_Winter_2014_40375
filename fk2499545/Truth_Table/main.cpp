/* 
 * File:   main.cpp
 * Author: Fuaad Khan
 * Created on January 13, 2014, 10:34 AM
 * Truth tabele       
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare VAriables
    bool x=true, y=true;
    //Output table heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X "
            <<"!(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    //Output the first row
    cout<< (x?'T':'F')<<" ";
    cout<< (y?'T':'F')<<"  ";
    cout<< (!x?'T':'F')<<"  ";
    cout<< (!y?'T':'F')<<"  ";
    cout<< (x&&y?'T':'F')<<"   ";
    cout<< (x||y?'T':'F')<<"   ";
    cout<< (x^y?'F':'T')<<"    ";
    cout<< ((x^y)^y?'T':'F')<<"    ";
    cout<< ((x^y)^x?'T':'F')<<"            ";
    cout<< (!(x&&y)?'F':'T')<<"     ";
    cout<< (!x||!y?'F':'T')<<"       ";
    cout<< (!(x||y)?'F':'T')<<"      ";
    cout<< (!x&&!y?'F':'T')<<"  ";
    cout<<endl;
    //Output the second row
    y=false;
    cout<< (x?'T':'F')<<" ";
    cout<< (y?'T':'F')<<" ";
    cout<< (!x?'T':'F')<<" ";
    cout<< (!y?'T':'F')<<" ";
    cout<< (x&&y?'T':'F')<<" ";
    cout<< (x||y?'T':'F')<<" ";
    cout<< (x^y?'T':'F')<<" ";
    cout<< ((x^y)^y?'T':'F')<<" ";
    cout<< ((x^y)^x?'T':'F')<<" ";
    cout<< (!(x&&y)?'T':'F')<<" ";
    cout<< (!x||!y?'T':'F')<<" ";
    cout<< (!(x||y)?'T':'F')<<" ";
    cout<< (!x&&!y?'T':'F')<<" ";
    cout<<endl;
    //Output third row
    x=false, y=true;
    cout<< (x?'T':'F')<<" ";
    cout<< (y?'T':'F')<<" ";
    cout<< (!x?'T':'F')<<" ";
    cout<< (!y?'T':'F')<<" ";
    cout<< (x&&y?'T':'F')<<" ";
    cout<< (x||y?'T':'F')<<" ";
    cout<< (x^y?'T':'F')<<" ";
    cout<< ((x^y)^y?'T':'F')<<" ";
    cout<< ((x^y)^x?'T':'F')<<" ";
    cout<< (!(x&&y)?'T':'F')<<" ";
    cout<< (!x||!y?'T':'F')<<" ";
    cout<< (!(x||y)?'T':'F')<<" ";
    cout<< (!x&&!y?'T':'F')<<" ";
    cout<<endl;
    //output fourth row
    x=false, y=false;
    cout<< (x?'T':'F')<<" ";
    cout<< (y?'T':'F')<<" ";
    cout<< (!x?'T':'F')<<" ";
    cout<< (!y?'T':'F')<<" ";
    cout<< (x&&y?'T':'F')<<" ";
    cout<< (x||y?'T':'F')<<" ";
    cout<< (x^y?'T':'F')<<" ";
    cout<< ((x^y)^y?'T':'F')<<" ";
    cout<< ((x^y)^x?'T':'F')<<" ";
    cout<< (!(x&&y)?'T':'F')<<" ";
    cout<< (!x||!y?'T':'F')<<" ";
    cout<< (!(x||y)?'T':'F')<<" ";
    cout<< (!x&&!y?'T':'F')<<" ";
    cout<<endl;

    return 0;
}

