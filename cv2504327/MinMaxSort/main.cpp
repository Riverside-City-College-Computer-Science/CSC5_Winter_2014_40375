/* 
 * File:   main.cpp
 * Author: Cesar E. Velazquez
 * Created on January 14, 2014, 8:59 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototype

//Exececution begins here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short min, max, t1,t2,t3;
    float avg=0;
    //Input a test
    cout<<"What is the first test score? "<<endl;
    cin>>t1;
    min=max=t1;
    //Input the next score
    cout<<"What is the next test score? "<<endl;
    cin>>t2;
    if(t2>max)max=t2;
    if(t2<min)min=t2;
    //Input last test score
    cout<<"What is the last test score? "<<endl;
    cin>>t3;
    if(t3>max)max=t3;
    if(t3<min)min=t3;
    //Calc the avg
    avg=(t1+t2+t3)/3;
    //Print what has been found so far
    cout<<"The max value= "<<max<<endl;
    cout<<"The min value= "<<min<<endl;
    cout<<"The avg value "<<avg<<endl;
    //Sorting
    cout<<"The sorted order is "<<endl;
    if(t1>t2&&t1>t3){
        cout<<t1<<",";
        if(t2>t3){
            cout<<t2<<","<<t3<<endl;
        }else{
        }
    }else if(t2>t1&&t2>t3){
        cout<<t2<<",";
        if(t1>t3){
            cout<<t3<<","<<t2<<endl;
        }else{
        }
    }
    //Exit stage right
    system("PAUSE");

    return EXIT_SUCCESS;
}

