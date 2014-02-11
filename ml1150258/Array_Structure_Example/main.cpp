/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 10, 2014, 8:52 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//Global Constants
const int SIZE=10000;

//Structures - Static and Dynamic Arrays
struct AryStat{
    int data[SIZE];
    int sizeUtl;
};
struct AryDyn{
    int *data;
    int size;
};

//Function Prototypes
void fillAry(AryStat &,int);
AryDyn *fillAry(int);
void prntAry(const AryStat&,int);
void prntAry(const AryDyn *,int);
void reclaim(AryDyn *);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables and set the random number seed
    AryStat aStat;
    int sizUtil=100;
    srand(static_cast<unsigned int>(time(0)));
    //Fill the Arrays
    fillAry(aStat,sizUtil);
    AryDyn *aDyn=fillAry(sizUtil);
    //Print the Arrays
    prntAry(aStat,10);
    prntAry(aDyn,10);
    //Reclaim Memory and Exit Stage Right!
    reclaim(aDyn);
    return 0;
}

//Un-allocate Memory
void reclaim(AryDyn *a){
    //Reclaim array memory first
    delete []a->data;
    delete a;  
}

//Fill the Dynamic Array
AryDyn *fillAry(int us){
    //Allocate Memory for Structure
    AryDyn *a=new AryDyn;
    //Validate the size of the array
    if(us<=1||us>SIZE)us=2;
    //Allocate memory for the array
    //(*a).size=us;
    a->size=us;
    a->data=new int[a->size];
    //Fill the Array
    for(int i=0;i<a->size;i++){
        //(*a).data[i]=rand()%900+100;//3 digit number
        //*(a->data+i)=rand()%900+100;//3 digit number
        //*((*a).data+i)=rand()%900+100;//3 digit number
        a->data[i]=rand()%900+100;//3 digit number
    }
    return a;
}

//Fill the Static Array
void fillAry(AryStat &a,int us){
    //Validate the size of the array
    if(us<=1||us>SIZE)a.sizeUtl=2;
    else a.sizeUtl=us;
    //Fill the Array
    for(int i=0;i<a.sizeUtl;i++){
        a.data[i]=rand()%900+100;//3 digit number
    }
}

//Print the Dynamic Array
void prntAry(const AryDyn *a,int perLine){
    //Print the Array
    cout<<endl;
    for(int i=0;i<a->size;i++){
        cout<<setw(4)<<a->data[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//Print the static array
void prntAry(const AryStat &a,int perLine){
    //Print the Array
    cout<<endl;
    for(int i=0;i<a.sizeUtl;i++){
        cout<<setw(4)<<a.data[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

