/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 30, 2014, 8:49 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [],int);
void prntAry(const int [],int,int);
int  find(const int [],int,int,int,int,int,int);
void find(const int [],int,int,int [],int,int,int);
void prntVec(const vector<int>&,int);
void find(const int [],int,int,vector<int> &,int,int,int);
int main(int argc, char** argv) {
//Declare and setup the problem
    const int SIZE=100;
    int array[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //Initialize the array
    filAray(array,SIZE);
    //Display the array
    prntAry(array,SIZE,10);
    //Find a value
    int val1=19,pos=-1,val2=77,val3=55,val4=24;
    do{
        pos=find(array,SIZE,val1,pos+1,val2,val3,val4);
        cout<<"Value found at "<<pos<<endl;
    }while(pos>0);
    
    //Declare an array and fill
    int brray[SIZE];
    find(array,SIZE,val1,brray,val2,val3,val4);
    //Print array
    prntAry(brray,SIZE,10);
    //Declare a vector and fill
    vector<int> posVec;
    find(array,SIZE,val1,posVec,val2,val3,val4);
    //Print the vector
    prntVec(posVec,10); 
    //Exit Stage RIGHT!!!
    return 0;
}
void find(const int a[],int n,int val1,int b[],int val2,int val3,int val4){
    int cnt=0;
    for(int i=0;i<n;i++){
        b[i]=-1;
        if(a[i]==val1)b[cnt++]=i;
        if(a[i]==val2)b[cnt++]=i;
        if(a[i]==val3)b[cnt++]=i;
        if(a[i]==val4)b[cnt++]=i;
    }
}
int  find(const int a[],int n,int val1,int pStrt,int val2,int val3,int val4){
    for(int i=pStrt;i<n;i++){
        if(a[i]==val1)return i;
        if(a[i]==val2)return i;
        if(a[i]==val3)return i;
        if(a[i]==val4)return i;
    }
    return -1;
}
//Fill the array with 2 digit numbers
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}
//Print the array with perLine elements on a line
void prntAry(const int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void find(const int a[],int n,int val1,vector<int> &vec,int val2,int val3,int val4){
    for(int i=0;i<n;i++){
        if(a[i]==val1)vec.push_back(i);
        if(a[i]==val2)vec.push_back(i);
        if(a[i]==val3)vec.push_back(i);
        if(a[i]==val4)vec.push_back(i);
    }
}
void prntVec(const vector<int>&vec,int perLine){
    cout<<endl;
    cout<<"Found "<<vec.size()<<" values!"<<endl;
    cout<<"Position Vector where found = { ";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<"}"<<endl;
}