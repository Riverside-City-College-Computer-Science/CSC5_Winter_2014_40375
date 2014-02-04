/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3, 2014, 8:13 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void filVec(vector<int> &,int);
void prntVec(vector<int> &,int);
void swap(int &,int &);
void swap(vector<int> &,int,int);
void minPos(vector<int> &,int);
void mrkSort(vector<int> &);
void copy(vector<int> &,vector<int> &);

//Executions Begin Here!
int main(int argc, char** argv) {
    //Declare variables and initialize the
    //random number generator
    const int SIZE=200;
    vector<int> array;
    vector<int> brray;
    srand(static_cast<unsigned int>(time(0)));
    //Fill the arrays
    filVec(array,SIZE);
    copy(array,brray);
    //Print the array
    prntVec(array,10);
    //Test out the min pos routine
    mrkSort(brray);
    //Print the array
    prntVec(brray,10);
    //Exit Stage Right!!!
    return 0;
}

void copy(vector<int> &a,vector<int> &b){
    for(int i=0;i<a.size();i++){
        b.push_back(a[i]);
    }
}

void mrkSort(vector<int> &a){
    for(int i=0;i<a.size()-1;i++){
        minPos(a,i);
    }
}

void minPos(vector<int> &a,int pos){
    for(int i=pos+1;i<a.size();i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
        //if(a[pos]>a[i])swap(a,pos,i);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swap(vector<int> &a,int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void prntVec(vector<int> &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//2 Digit random numbers
void filVec(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        a.push_back(rand()%90+10);
    }
}