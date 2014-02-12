/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 16, 2012, 10:50 PM
 * Simple game to illustrate some constructs
 * and a random number
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void craps(int,int [],int [],int []);
void display(int [],int[],int[],int);
void winLoss(int [],int[],int[],int);

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and input how many games
    //you want to play
    int games;
    cout<<"How many Crap games do you want?"<<endl;
    cin>>games;
    //Input validation
    while(games<0){
        cout<<"The number of games must be > 0"<<endl;
        cout<<"Input the number of games again"<<endl;
        cin>>games;
    }
    //Initialize and keep track wins/losses
    const int SIZE=13;
    int win[SIZE]={},loss[SIZE]={},rolls[SIZE]={};
    //Call a function to play those games
    craps(games,win,loss,rolls);
    //Exit output and stage right
    display(win,loss,rolls,SIZE);
    winLoss(win,loss,rolls,SIZE);
    return 0;
}

void winLoss(int win[],int loss[],
             int rolls[],int SIZE){
    int sumWin=0,sumLoss=0,sumRolls=0;
    for(int j=0;j<SIZE;j++){
        sumWin+=win[j];
        sumLoss+=loss[j];
        sumRolls+=rolls[j];
    }
    //Return output
    cout<<"Wins = "<<sumWin<<endl;
    cout<<"Loss = "<<sumLoss<<endl;
    cout<<"Number of times dice thrown "<<sumRolls<<endl;

}

void display(int win[],int loss[],int roll[],int SIZE){
    cout<<setw(10)<<right<<"ROW";
    cout<<setw(10)<<right<<"WIN";
    cout<<setw(10)<<right<<"LOSS";
    cout<<setw(10)<<right<<"ROLLS"<<endl;
    for(int row=0;row<SIZE;row++){
        cout<<setw(10)<<row;
        cout<<setw(10)<<win[row];
        cout<<setw(10)<<loss[row];
        cout<<setw(10)<<roll[row];
        cout<<endl;
    }
}

void craps(int games,int win[],int loss[],int rolls[]){
    //Use a loop to play those games
    for(int game=1;game<=games;game++){
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum=die1+die2;
        rolls[sum]++;
        if(sum==7||sum==11){win[sum]++;}
        else if(sum==2||sum==3||sum==12){
            loss[sum]++;
        }else{
            bool loop=true;
            do{
                char die1=rand()%6+1;
                char die2=rand()%6+1;
                char sum2=die1+die2;
                rolls[sum]++;
                switch(sum2){
                    case 7:{
                        loss[sum]++;
                        loop=false;
                        break;
                    }
                    default:{
                        if(sum==sum2){
                            win[sum]++;
                            loop=false;
                            break;
                        }
                    }
                }
            }while(loop);
        }
    }
}