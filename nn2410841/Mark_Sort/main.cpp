/* 
 * Nhat Nguyen
 * Created on February 3, 2014, 8:13 AM
 * Mark_Sort
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [], int);
void prntAry(int [], int, int);
void swap(int &, int&);
void swap(int [], int, int);
void minPos(int [], int, int);
void mrkSort(int [], int);
void copy(int [], int [], int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables and initialize the random number generator
    const int SIZE=200;
    int array[SIZE], brray[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //Fill the array
    filAray(array,SIZE);
    copy(array,brray,SIZE);
    //Print the array
    prntAry(array,SIZE,10);
    //Test the array
    mrkSort(brray,SIZE);
    //Print the array
    prntAry(brray,SIZE,10);
    
    return 0;
}

//2 Digit Random Number
void filAray(int a[], int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}

void prntAry(int a[], int n, int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swap(int a[], int i, int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void minPos(int a[], int n, int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

void mrkSort(int a[], int n){
    for(int i=0;i<n;i++){
        minPos(a,n,i);
    }
}

void copy(int a[], int b[], int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}