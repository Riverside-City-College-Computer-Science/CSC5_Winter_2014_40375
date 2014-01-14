/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 10, 2012, 12:10 PM
 * Gaddis Prob 2 Chap 1
 * Add 66 + 99
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Add the numbers 66 and 99 using 1 byte integers
    char ca=66,cb=99,csum;//Char -128 to +127
    //Calculate the addition
    csum=ca+cb;
    //Output the result
    cout<<"The sum of "<<static_cast<int>(ca);
    cout<<" + "<<static_cast<int>(cb);
    cout<<" = "<<static_cast<int>(csum)<<endl;
    //Add the numbers 66 and 99 using 1 byte integers
    unsigned char uca=66,ucb=99,ucsum;//Unsigned Char 0 to 255
    //Calculate the addition
    ucsum=uca+ucb;
    //Output the result
    cout<<"The sum of "<<static_cast<int>(uca);
    cout<<" + "<<static_cast<int>(ucb);
    cout<<" = "<<static_cast<int>(ucsum)<<endl;
    //Add the numbers 66 and 99 using 2 byte integers
    short sa=66,sb=99,ssum;//short -35736 to +35735
    //Calculate the addition
    ssum=sa+sb;
    //Output the result
    cout<<"The sum of "<<sa;
    cout<<" + "<<sb;
    cout<<" = "<<ssum<<endl;
    //Add the numbers 66 and 99 using 2 byte integers
    unsigned short usa=66,usb=99,ussum;//Unsigned short 0 to 65535
    //Calculate the addition
    ussum=usa+usb;
    //Output the result
    cout<<"The sum of "<<usa;
    cout<<" + "<<usb;
    cout<<" = "<<ussum<<endl;
    //Add the numbers 66 and 99 using 4 byte integers
    int ia=66,ib=99,isum;//int -2^31 to 2^31-1
    //Calculate the addition
    isum=ia+ib;
    //Output the result
    cout<<"The sum of "<<ia;
    cout<<" + "<<ib;
    cout<<" = "<<isum<<endl;
    //Add the numbers 66 and 99 using 4 byte integers
    unsigned int uia=66,uib=99,uisum;//Unsigned int -2^31 to 2^31-1
    //Calculate the addition
    uisum=uia+uib;
    //Output the result
    cout<<"The sum of "<<uia;
    cout<<" + "<<uib;
    cout<<" = "<<uisum<<endl;
    //Add 2, 4 byte integers read from the input line
    int uix=66,uiy=99,uiz;//Unsigned int -2^31 to 2^31-1
    //Input 2 integers
    cout<<"Input 2 integers for addition"<<endl;
    cin>>uix>>uiy;
    cout<<"You typed -> "<<uix<<" and "<<uiy<<endl;
    //Calculate the addition
    uiz=uix+uiy;
    //Output the result
    cout<<"The sum of "<<uix;
    cout<<" + "<<uiy;
    cout<<" = "<<uiz<<endl;   
    //Exit
    return 0;
}

