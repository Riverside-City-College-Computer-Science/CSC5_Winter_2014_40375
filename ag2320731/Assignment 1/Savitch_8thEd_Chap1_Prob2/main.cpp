/* 
 * File:   main.cpp
 * Author: Adam Grose
 * January 9th, 2014
 * purpose: calculate the number of total peas
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//No Global Constants

//No Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
 //declare variables
    int nmbPods;//number of pods
    int nmbPeas;//number of peas per pod
    int ttlpeas;//total number of peas
    //Input "Hello"
    cout<<"Hello\n";
    //Input the number of peas in each pod
    cout<<"Enter the number of peas per pod: ";
    cin>>nmbPeas;
    //Input the number of pods
    cout<<"Enter the number of pods: ";
    cin>>nmbPods;
    //Calculate total number of peas
    ttlpeas=nmbPods*nmbPeas;
    //Output results
    cout<<endl<<"If you have ";
    cout<<nmbPods;
    cout<<" Pea pods\n";
    cout<<"and ";
    cout<<nmbPeas;
    cout<<" peas in each pod, then\n";
    cout<<"There are ";
    cout<<ttlpeas;
    cout<<" peas in all the pods\n";    
    //Output "Goodbye"
    cout<<"Good-Bye\n";
    //Exit Stage Right
        
    
    return 0;
}

