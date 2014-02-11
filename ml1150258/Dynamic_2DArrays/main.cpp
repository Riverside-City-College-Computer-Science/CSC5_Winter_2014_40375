/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 6, 2014, 10:11 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
int **filAray(int,int,int);
void prntAry(int **,int,int,int);
void destroy(int **,int);
int **add(int **,int **, int,int);
int **sub(int **,int **, int,int);
int **mul(int **,int,int,int **,int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables and Start Random Number with Seed
    int rows,cols;
    srand(static_cast<unsigned int>(time(0)));
    //Prompt and input rows and cols
    cout<<"How large of an integer 2 D Array?"<<endl;
    cout<<"Input rows and columns xxx xxx"<<endl;
    cin>>rows>>cols;
    //Fill the array
    int **array=filAray(rows,cols,1);
    int **brray=filAray(rows,cols,1);
    //Print the array
    prntAry(array,rows,cols,4);
    prntAry(brray,rows,cols,4);
    //Add the 2 arrays
    int **crray=add(array,brray,rows,cols);
    int **drray=sub(array,brray,rows,cols);
    int **erray=mul(array,rows,cols,brray,rows,cols);
    //Print the array
    prntAry(crray,rows,cols,4);
    prntAry(drray,rows,cols,4);
    prntAry(erray,rows,cols,6);
    //Clean up / deallocate memory
    destroy(array,rows);
    destroy(brray,rows);
    destroy(crray,rows);
    destroy(drray,rows);
    destroy(erray,rows);
    return 0;
}

//Only works where rows = cols
int **mul(int **a,int r1,int c1,int **b, int r2,int c2){
    //Create the array for the additions
    int **c=filAray(r1,c2,0);
    //Add the 2 arrays
    for(int row=0;row<r1;row++){
        for(int col=0;col<c2;col++){
            for(int k=0;k<c1;k++){
                c[row][col]+=a[row][k]*b[k][col];
            }
        }
    }
    return c;
}

int **sub(int **a,int **b, int rows,int cols){
    //Create the array for the additions
    int **c=filAray(rows,cols,0);
    //Add the 2 arrays
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            c[row][col]=a[row][col]-b[row][col];
        }
    }
    return c;
}

int **add(int **a,int **b, int rows,int cols){
    //Create the array for the additions
    int **c=filAray(rows,cols,0);
    //Add the 2 arrays
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            c[row][col]=a[row][col]+b[row][col];
        }
    }
    return c;
}

void destroy(int **a,int rows){
    //Clean up / deallocate memory
    for(int row=0;row<rows;row++){
        delete [] a[row];
    }
    delete []a;
}

void prntAry(int **a,int rows,int cols,int wide){
    cout<<endl;
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            cout<<setw(wide)<<a[row][col];
        }
        cout<<endl;
    }
    cout<<endl;
}

int **filAray(int rows,int cols,int val){
    //Declare and create the 2 D array
    int **a=new int*[rows];
    for(int row=0;row<rows;row++){
        a[row]=new int[cols];
    }
    //Fill the array with random 2 digits
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            if(val==0)a[row][col]=0;
            else a[row][col]=rand()%90+10;
        }
    }
    //Return the 2 D array
    return a;
}