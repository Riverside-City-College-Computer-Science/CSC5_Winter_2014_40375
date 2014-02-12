/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 28, 2012, 1:20 PM
 * Simple game to illustrate some constructs
 * and a random number
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and input how many games
    //you want to play
    int games,rolls=0;
    cout<<"How many Crap games do you want?"<<endl;
    cin>>games;
    //Input validation
    while(games<0){
        cout<<"The number of games must be > 0"<<endl;
        cout<<"Input the number of games again"<<endl;
        cin>>games;
    }
    //Initialize and keep track wins/losses
    int win=0,loss=0;
    //Use a loop to play those games
    for(int game=1;game<=games;game++){
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum=die1+die2;
        rolls++;
        if(sum==7||sum==11){win++;}
        else if(sum==2||sum==3||sum==12){
            loss++;
        }else{
            bool loop=true;
            do{
                char die1=rand()%6+1;
                char die2=rand()%6+1;
                char sum2=die1+die2;
                rolls++;
                switch(sum2){
                    case 7:{
                        loss++;
                        loop=false;
                        break;
                    }
                    default:{
                        if(sum==sum2){
                            win++;
                            loop=false;
                            break;
                        }
                    }
                }
            }while(loop);
        }
    }
    //Exit output and stage right
    cout<<"Wins = "<<win<<endl;
    cout<<"Loss = "<<loss<<endl;
    cout<<"Number of times dice thrown "<<rolls<<endl;
    return 0;
}