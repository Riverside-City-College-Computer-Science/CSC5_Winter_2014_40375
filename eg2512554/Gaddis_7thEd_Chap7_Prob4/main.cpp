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
    const int ROWS=20;
    int mnkFood[ROWS][COLS],avgMnk[ROWS];
    char fName[]="./monkey.dat";
    //Read the data from the file
    int actSize=read(fName,mnkFood);
    //Write the data
    write(mnkFood,actSize);
    //Output the minimum amount of food eaten by
    //a monkey
    cout<<"Smallest amount eaten by a monkey = "
        <<min(mnkFood,actSize)<<" ounces"<<endl;
    //Output the minimum amount of food eaten by
    //a monkey
    cout<<"Largest amount eaten by a monkey = "
        <<max(mnkFood,actSize)<<" ounces"<<endl;
<<<<<<< HEAD:eg2512554/Gaddis_7thEd_Chap7_Prob4/main.cpp
    //Output avg
=======
    //Output the average
>>>>>>> origin/master:ml1150258/Gaddis_7thEd_Chap7_Prob4/main.cpp
    avg(mnkFood,avgMnk,actSize);
    //Exit stage right
    return 0;
}
 
void avg(int monkey[][COLS],int avgMnk[],int ROWS){
        for(int row=0;row<ROWS;row++){
            avgMnk[row]=0;
        }for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++)
            avgMnk[row]+=monkey[row][col];
        }
        for(int row=0;row<ROWS;row++){
            avgMnk[row]/COLS;
            cout<<"Monkey"<<(row+1)<<"averaged"
                    <<avgMnk[row]<<"ounces/day"<<endl;
        }
}

void avg(int monkey[][COLS],int avgMnk[],int ROWS){
    //Initialize the average array
    for(int row=0;row<ROWS;row++){
        avgMnk[row]=0;
    }
    //Sum up the result by monkey
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            avgMnk[row]+=monkey[row][col];
        }
    }
    //Divide by number of days
    for(int row=0;row<ROWS;row++){
        avgMnk[row]/=COLS;
        cout<<"Monkey "<<(row+1)<<" averaged "
            <<avgMnk[row]<<" ounces/day"<<endl;
    }
}

int max(int monkey[][COLS],int ROWS){
    //Declare some small variable;
    int big=monkey[0][0];
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            if(big<monkey[row][col]){
                big=monkey[row][col];
            }
        }
    }
    return big;
}

int min(int monkey[][COLS],int ROWS){
    //Declare some small variable;
    int small=monkey[0][0];
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            if(small>monkey[row][col]){
                small=monkey[row][col];
            }
        }
    }
    return small;
}

void write(int monkey[][COLS],int ROWS){
    cout<<endl;
    cout<<"Monkey    M   T   W   T   F   S   S"<<endl;
    for(int row=0;row<ROWS;row++){
        cout<<"  "<<row+1<<"    ";
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


