/*
Donald Allum Jr
January 14th, 2014
*/


//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution begins here


int main(int argc, char *argv[]){
    //Declare Variables
    unsigned short min,max,t1,t2,t3;
    float avg;
    //Input a test
    cout<<"What is the first test score?\n";
    cin>>t1;
    min=max=t1;
    //Input the next score
    cout<<"What is the next test score?\n";
    cin>>t2;
    if(t2>max)max=t2;
    if(t2<min)min=t2;
    //Input the last score
    cout<<"What is the last test score?\n";
    cin>>t3;
    if(t3>max)max=t3;
    if(t3<min)min=t3;
    //Calculate the avg
    avg=(t1+t2+t3)/3;
    //Print what has been found so far
    cout<<"The max value ="<<max<<endl;
    cout<<"The min value ="<<min<<endl;
    cout<<"The average value ="<<avg<<endl;
    //Sorting
    cout<<"The sorted order is from high to low \n";
    if(t1>t2&&t1>t3){
       cout<<t1<<",";
       if(t2>t3){
          cout<<t2<<","<<t3<<endl;
       }else{
         cout<<t3<<","<<t2<<endl;
       }
    }else if(t2>t1&&t2>t3){
       cout<<t2<<",";
       if(t1>t3){
         cout<<t1<<","<<t3<<endl;
       }else{
         cout<<t3<<","<<t1<<endl;
       }
    }else{
        cout<<t3<<",";
        if(t1>t2){
          cout<<t1<<","<<t2<<endl;
        }else{
          cout<<t2<<","<<t1<<endl;
        }
    }
    //Exit stage right
    system("PAUSE");
    return EXIT_SUCCESS;
}
