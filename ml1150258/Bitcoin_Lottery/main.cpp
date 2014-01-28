/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 27, 2014, 7:49 PM
 * Purpose:  Choose the student ID which wins
 * the lottery
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

//No Global Constants

//Function Prototype
int random(int);
int winner(int [],int);
int read(char [],int []);
void write(int [],int);

int main(int argc, char** argv) {
    //Declare variables and initialize
    char fName[]="./StudentIDs.dat";
    const int SIZE=35;
    int sIds[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    //Read in the data
    int actSize=read(fName,sIds);
    //Print the data in the file
    write(sIds,actSize);
    //Choose the Winner
    cout<<endl<<"The winner is ->"
            <<winner(sIds,actSize)<<endl;
    //Exit stage right
    return 0;
}

int winner(int sId[],int n){
    return sId[random(n)];
}

void write(int sId[],int size){
    cout<<endl;
    cout<<"The contents of the file is"<<endl;
    for(int name=0;name<size;name++){
        cout<<name<<"->"<<sId[name]<<endl;
    }
    cout<<endl;
}

int read(char fName[],int sId[]){
    //Declare variables
    int cnt=0;
    ifstream input;
    //Open the file
    input.open(fName);
    //Read the data
    while(input){
        input>>sId[cnt++];
    }
    //close the file
    input.close();
    //exit
    return --cnt;
}


int random(int n){
    return rand()%n;
}