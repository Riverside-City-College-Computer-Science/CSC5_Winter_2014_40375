/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on February 3, 2014, 8:14 AM
 * Mark Sorting
 */

//System Libraries
#include <Iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void filAray (int [], int);
void printAray (int[],int,int);
void swap (int &, int &);
void swap (int [],int,int);
void minPos (int [],int,int);
void mrkSort (int [],int);
void copy (int [], int [],int);

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare Variables and initialize the random number generator
    const int SIZE=200;
    int array[SIZE],brray[SIZE];
    srand(static_cast<unsigned short>(time(0)));
    //fill the array
    filAray ( array, SIZE);
    copy (array,brray,SIZE);
    //Print the array
    printAray ( array, SIZE,10);
    //Test out of the min pos routine
    mrkSort (brray,SIZE);
    //Print the array
    printAray ( brray, SIZE,10);
    //Exit Stage Right
    return 0;
}

void copy (int a[], int b[],int n){
    for (int i=0;i<n;i++){
        b[i]=a[i];
    }
}

void mrkSort (int a[],int n){
    for (int i=0;i<n-1;i++){
    minPos (a,n,i);
    }
}

void minPos (int a[],int n,int pos){
    for (int i=pos+1;i<n;i++){
        if (a[pos]>a[i])swap(a[pos],a[i]);
        //if (a[pos]>a[i])swap(a,pos,i);
    }
}

void swap (int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void swap (int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
    
}

void printAray (int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if (i%10==perLine-1)cout<<endl;
    }
    cout<<endl;
}

//2Digits random numbers
void filAray (int a[], int n){
    for (int i=0;i<n;i++){
        a[i]=rand()%90+10;
        
    }
}