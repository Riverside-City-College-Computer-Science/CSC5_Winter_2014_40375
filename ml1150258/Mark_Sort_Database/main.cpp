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

//Function Prototypes
void filAray(int [],int [],int);
void prntAry(int [],int [],int,int);
void prntAry(int [],int,int);
void swap(int &,int &);
void minPos(int [],int[],int,int);
void mrkSort(int [],int [],int);

//Executions Begin Here!
int main(int argc, char** argv) {
    //Declare variables and initialize the
    //random number generator
    const int SIZE=200;
    int array[SIZE],index[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //Fill the arrays
    filAray(array,index,SIZE);
    //Print the arrays
    prntAry(array,index,SIZE,10);
    //Test out the min pos routine
    mrkSort(array,index,SIZE);
    //Print the array
    prntAry(array,index,SIZE,10);
    prntAry(index,SIZE,10);
    prntAry(array,SIZE,10);
    //Exit Stage Right!!!
    return 0;
}

void mrkSort(int a[],int indx[],int n){
    for(int i=0;i<n-1;i++){
        minPos(a,indx,n,i);
    }
}

void minPos(int a[],int indx[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[indx[pos]]>a[indx[i]])
                swap(indx[pos],indx[i]);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntAry(int a[],int indx[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[indx[i]]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//2 Digit random numbers
void filAray(int a[],int indx[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
        indx[i]=i;
    }
}

