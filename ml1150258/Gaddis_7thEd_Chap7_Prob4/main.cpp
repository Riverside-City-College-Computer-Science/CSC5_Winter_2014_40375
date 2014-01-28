/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 27, 2014, 9:18 PM
 * Purpose:  Food for Monkeys
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//Global Constants
const int COLS=7;

//Function Prototypes
int read(char [],int [][COLS]);
void write(int [][COLS],int);
int min(int [][COLS],int);
int max(int [][COLS],int);
void avg(int [][COLS],int [],int);

int main(int argc, char** argv) {
    //Declare variables
    const int ROWS=5;
    int mnkFood[ROWS][COLS];
    char fName[]="./monkey.dat";
    //Read the data from the file
    int actSize=read(fName,mnkFood);
    //Write the data
    write(mnkFood,actSize);
    //Exit stage right
    return 0;
}

void write(int monkey[][COLS],int ROWS){
    cout<<endl;
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            cout<<setw(4)<<monkey[row][col];
        }
        cout<<endl;
    }
    cout<<endl;
}

int read(char fName[],int monkey[][COLS]){
    //Open the file
    ifstream input;
    input.open(fName);
    //Read the data
    int row=0;
    while(input){
        for(int col=0;col<COLS;col++){
                input>>monkey[row][col];
        }
        row++;
    }
    //Close the file
    input.close();
    //return the number of rows
    return --row;
}


