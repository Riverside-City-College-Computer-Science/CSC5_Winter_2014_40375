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
    if(score>=90){
        grade='A';
    }else if(score>=80){
        grade='B';
    }else if(score>=70){
        grade='C';
    }else if(score>=60){
        grade='D';
    }else{              
        grade='F';
    }
    //Output the grade
    cout<<"Your grade is a "<<grade<<endl;
    //Exit stage right
    return 0;
}