/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 13, 2014, 8:51 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare our variables
    short score;
    char grade;
    //Input the score
    cout<<"What is your test/project/hmwk score?"<<endl;
    cin>>score;
    //Process the grade
    short val=score/10-5;
    switch(val){
        case 5:  grade='A';break;
        case 4:  grade='A';break;
        case 3:  grade='B';break;
        case 2:  grade='C';break;
        case 1:  grade='D';break;
        default: grade='F';
    }
    //Output the grade
    cout<<"Your grade is a "<<grade<<endl;
    //Exit stage right
    return 0;
}