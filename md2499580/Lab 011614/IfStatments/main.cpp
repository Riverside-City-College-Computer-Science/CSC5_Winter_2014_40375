/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 *
 * Created on January 16, 2014, 10:28 AM
 */
//system libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Variables
    int score;
 cout<<"Type in a Score"<<endl;
 cin>>score;   
    if (score >= 90)
    {
       cout<< "Good Job! you got an A\n";
    }
   if (score < 90 && score >= 80)
   {
       cout<<"you got a B"<<endl;
   } 
    
    return 0;
}

