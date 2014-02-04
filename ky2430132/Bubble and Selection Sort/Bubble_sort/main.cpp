/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on February 4, 2014, 9:59 AM
 */

//System Libraries
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
void bubble (vector<int> &,int );
void filVec (vector<int> &,int);
void prntVec (const vector<int> &, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variable and initialize the random number
    const int SIZE=50000;
    vector<int> array;
    srand(static_cast<unsigned short>(time(0)));
    //fill the array
    filVec (array, SIZE);
    //print the array
    //prntVec (array, 10);
    //bubble sort
    int strTime=time(0);
    bubble (array,SIZE);
    int endTime=time(0);
    cout<<"Total time taken = "<<endTime-strTime<<"secs";
    //print array
    //prntVec (array, 10);
            
    return 0;
}
void bubble (vector<int> &a,int n){
    bool swap;
    int temp;
    do{
          swap=false;
          for (int count=0;count<(n-1);count++){
              if (a[count]>a[count+1]){
                  temp=a[count];
                  a[count]=a[count+1];
                  a[count+1]=temp;
                  swap=true;
              }
          }
    } while (swap); 
}

void prntVec (const vector<int> &a, int perline){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
        if (i%10==(perline-1))
            cout<<endl;
    }
}

void filVec (vector<int> &a,int n){
    for (int i=0;i<n;i++){
        a.push_back(rand()%90+10);
    }
    
}