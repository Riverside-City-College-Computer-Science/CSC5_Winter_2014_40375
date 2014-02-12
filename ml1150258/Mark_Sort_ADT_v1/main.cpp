/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3, 2014, 8:13 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants
const int MAXSIZE=1000;

//ADT's
struct Array{
    int data[MAXSIZE];
    int szUtil;
};

//Function Prototypes
void filAray(Array &,int);
void prntAry(const Array &,int);
void swap(int &,int &);
void minPos(Array &,int);
void mrkSort(Array &);
void xcopy(const Array &,Array &);

//Executions Begin Here!
int main(int argc, char** argv) {
    //Declare variables and initialize the
    //random number generator
    int dSize=50;
    Array array,brray;
    srand(static_cast<unsigned int>(time(0)));
    //Fill the arrays
    filAray(array,dSize);
    xcopy(array,brray);
    //Print the array
    prntAry(array,10);
    //Test out the min pos routine
    mrkSort(brray);
    //Print the array
    prntAry(brray,10);
    //Exit Stage Right!!!
    return 0;
}

void xcopy(const Array &a,Array &b){
    b.szUtil=a.szUtil;
    for(int i=0;i<a.szUtil;i++){
        b.data[i]=a.data[i];
    }
}

void mrkSort(Array &a){
    for(int i=0;i<(a.szUtil-1);i++){
        minPos(a,i);
    }
}

void minPos(Array &a,int pos){
    for(int i=pos+1;i<a.szUtil;i++){
        if(a.data[pos]>a.data[i])
            swap(a.data[pos],a.data[i]);
        //if(a[pos]>a[i])swap(a,pos,i);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(const Array &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.szUtil;i++){
        cout<<a.data[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//2 Digit random numbers
void filAray(Array &a,int n){
    if(n<1||n>MAXSIZE)n=2;
    a.szUtil=n;
    for(int i=0;i<a.szUtil;i++){
        a.data[i]=rand()%90+10;
    }
}