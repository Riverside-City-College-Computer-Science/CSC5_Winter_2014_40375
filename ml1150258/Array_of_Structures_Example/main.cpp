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
const int SSIZE=10;
const int ROWS=500;
const int COLS=500;

//Structures - Static and Dynamic Arrays
struct AryStat{
    int data[ROWS][COLS];
    int rowsUtl;
    int colsUtl;
};
struct AryDyn{
    int **data;
    int rowsUtl;
    int colsUtl;
};

//Function Prototypes
void fillAry(AryStat [],int,int,int);
AryDyn *fillAry(int,int,int);
void prntAry(const AryStat [],int);
void prntAry(const AryDyn  *,int);
void reclaim(AryDyn *,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables and set the random number seed
    const int SUTIL=2;
    AryStat aStat[SUTIL];
    int rowsUtl=10;
    int colsUtl=10;
    srand(static_cast<unsigned int>(time(0)));
    //Fill the Arrays
    fillAry(aStat,rowsUtl,colsUtl,SUTIL);
    AryDyn *aDyn=fillAry(rowsUtl,colsUtl,SUTIL);
    //Print the Arrays
    prntAry(aStat,SUTIL);
    prntAry(aDyn,SUTIL);
    //Reclaim Memory and Exit Stage Right!
    reclaim(aDyn,SUTIL);
    return 0;
}

//Un-allocate Memory
void reclaim(AryDyn a[],int n){
    //Allocate Memory for Structure
    if(n<=1||n>SSIZE)n=2;
    for(int i=0;i<n;i++){
        //Reclaim array memory first
        for(int row=0;row<a[i].rowsUtl;row++){
           delete []a[i].data[row];
        }
        delete []a[i].data;
    }
    delete []a;  
}

//Fill the Dynamic Array
AryDyn *fillAry(int rows,int cols,int n){
    //Allocate Memory for Structure
    if(n<=1||n>SSIZE)n=2;
    AryDyn *a=new AryDyn[n];
    //Validate the size of the array
    for(int i=0;i<n;i++){
        if(rows<=1||rows>ROWS)a[i].rowsUtl=2;
        else a[i].rowsUtl=rows;
        if(cols<=1||cols>COLS)a[i].colsUtl=2;
        else a[i].colsUtl=cols;
        //Allocate memory for the array
        a[i].data=new int*[a[i].rowsUtl];
        //Fill the Array
        for(int row=0;row<a[i].rowsUtl;row++){
           a[i].data[row]=new int[a[i].colsUtl];
           for(int col=0;col<a[i].colsUtl;col++){
                a[i].data[row][col]=rand()%900+100;
           }
        }
    }
    return a;
}

//Fill the Static Array
void fillAry(AryStat a[],int rows,int cols,int n){
    for(int i=0;i<n;i++){
        //Validate the size of the array
        if(rows<=1||rows>ROWS)a[i].rowsUtl=2;
        else a[i].rowsUtl=rows;
        if(cols<=1||cols>COLS)a[i].colsUtl=2;
        else a[i].colsUtl=cols;
        //Fill the Array
        for(int row=0;row<a[i].rowsUtl;row++){
            for(int col=0;col<a[i].colsUtl;col++){
                a[i].data[row][col]=rand()%900+100;
            }
        }
    }
}

//Print the Dynamic Array
void prntAry(const AryDyn *a,int n){
    for(int i=0;i<n;i++){
        //Print the Array
        cout<<endl;
           for(int row=0;row<a[i].rowsUtl;row++){
                for(int col=0;col<a[i].colsUtl;col++){
                        cout<<setw(4)<<a[i].data[row][col];
                }
                cout<<endl;
           }
        cout<<endl;
    }
}

//Print the Static array
void prntAry(const AryStat a[],int n){
    //Print the Array
    for(int i=0;i<n;i++){
        cout<<endl;
        for(int row=0;row<a[i].rowsUtl;row++){
                for(int col=0;col<a[i].colsUtl;col++){
                cout<<setw(4)<<a[i].data[row][col];
                }
                cout<<endl;
        }
        cout<<endl;
    }
}