/*
  Adam Grose
 January 9th, 2014
  Purpose: Solution of physics problem
*/

//Libraries
#include <iostream>
using namespace std;

//Global Constants and Variables
const float GRAVITY=3.217e1f;

//No Function Prototypes

//Begin Execution
int main(){
   //Declare Variables
    float time,dstDrop;

    //Input the time
    cout<<"Enter Number of Seconds in Free Fall - ";
    cin>>time;
    //Calculate the drop
    dstDrop=0.5f*GRAVITY*time*time;

    //Output the distance
    cout<<"The Drop in Free Fall = ";
    cout<<dstDrop<<"(feet)"<<endl;
    return 0;
}
