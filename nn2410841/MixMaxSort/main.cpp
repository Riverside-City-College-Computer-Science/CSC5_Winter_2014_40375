/*
  Nhat Nguyen
  January 14th, 2014
  MinMaxSort
*/

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Protoytypes

//Execution Begins Here
int main(int argc, char *argv[]){
    //Define Variables
    unsigned short min, max, t1, t2, t3;
    float avg;
    //Input the test scores
    cout<<"What is the first test score?"<<endl;
    cin>>t1;
    min=max=t1;
    cout<<"What is the second test score?"<<endl;
    cin>>t2;
    if(t2>max)max=t2;
    if(t2<min)min=t2;
    cout<<"What is the third test score?"<<endl;
    cin>>t3;
    if(t3>max)max=t3;
    if(t3<min)min=t3;
    //Calculate the average
    avg=(t1+t2+t3)/3;
    //Print what has been found so far
    cout<<"The max value = "<<max<<endl;
    cout<<"The min value = "<<min<<endl;
    cout<<"The avg value = "<<avg<<endl;
    //Sorting
    cout<<"The sorted order is"<<endl;
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
     }else if(t3>t1&&t2>t2){
         cout<<t3<<",";
         if(t1>t2){
              cout<<t1<<","<<t2<<endl;
         }else{
              cout<<t2<<","<<t1<<endl;
}
}
    //Exit Stage Right
    system("PAUSE");
    return EXIT_SUCCESS;
}
