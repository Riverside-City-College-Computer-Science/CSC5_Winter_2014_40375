/* 
 *David Ballantyne
 *Created on January 13, 2014, 10:35 AM
 *purpose: Savitch_8thEd_Ch2_Prob12
 */
//Librareis
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
//Global Constants

//Functioning Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Variables
    float x, r, guess;
    //inpur value of sqr root
    cout<<"what number do you wish to find"
        <<" the sqr root of?"<<endl;
    cin>>x;
    //first guess
    guess=x/2;
    r=x/guess;
    guess=(guess+r)/2;
    //output first approximation
    cout<<"The first approximation = "<<guess<<endl;
    //2nd approximation
    r=x/guess;
    guess=(guess+r)/2;
    //output 2nd approximation
    cout<<"The second approximation = "<<guess<<endl;
     //3rd approximation
    r=x/guess;
    guess=(guess+r)/2;
    //output3rd approximation
    cout<<"The third approximation = "<<guess<<endl;
    //4th approximation
    r=x/guess;
    guess=(guess+r)/2;
    //output 4th
    cout<<"The fourth approximation = "<<guess<<endl;
    //output actual answer
    cout<<"Exact answer = "<<sqrt(x)<<endl;
    return 0;
}

