/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 29, 2014, 10:21 AM
 * Purpose:  General Seating Chart
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const unsigned short COLS=500;

//Function Prototypes
void initial(bool [][COLS],unsigned short[],int,int);
void display(const bool [][COLS],const unsigned short[],int);
bool whtSeat(bool [][COLS],const unsigned short[],int);

//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare the variables
    const int ROWS=500;
    bool seat[ROWS][COLS];
    int rowUtil=8,colUtil=6;
    unsigned short pCol[ROWS];
    //Initialize arrays
    initial(seat,pCol,rowUtil,colUtil);
    //Prompt user for seat desired
    do{
        //Display the seating array
        display(seat,pCol,rowUtil);
    }while(whtSeat(seat,pCol,rowUtil));
    //Exit Stage Right!!
    return 0;
}

bool whtSeat(bool seat [][COLS],
        const unsigned short pCol[],int ROWS){
    //Prompt user for seat desired
    cout<<"Choose Seat to take i.e. 3C"<<endl;
    int rowSeat;char colSeat;
    cin>>rowSeat>>colSeat;
    rowSeat--;colSeat-='A';
    //Check if Valid Seats
    if(rowSeat<ROWS&&(colSeat)<=pCol[rowSeat]){
        if(!seat[rowSeat][colSeat]){
            seat[rowSeat][colSeat]=true;
        }else{
            cout<<"Seat already taken!"<<endl;
        }
    }else{
        cout<<"Not a Seat"<<endl;
        return false;
    }
    return true;
}

void initial(bool seat[][COLS],unsigned short pCol[],
        int ROWS,int colMax){
    //Initialize the arrays
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            seat[row][col]=false;
        }
        pCol[row]=colMax;
    }
}
void display(const bool seat[][COLS],
        const unsigned short pCol[],int ROWS){
    //Display the seating arrangement
    char view='A';
    cout<<endl;
    for(int row=0;row<ROWS;row++){
        cout<<setw(2)<<row+1;
        for(int col=0;col<pCol[row];col++){
            if(seat[row][col])cout<<setw(2)<<"X";
            else cout<<setw(2)<<static_cast<char>(view+col);
        }
        cout<<endl;
    }
    cout<<endl;
}

