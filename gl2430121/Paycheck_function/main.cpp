/* 
 * File:   main.cpp
 * Author:Guohao Liu
 * Created on January 22, 2014, 11:24 AM
 * Defaulted parameters and Static vatiables
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
//Global Constants
const unsigned short FULL_TIME=40;

//Function Prototypes
int payCheck(float, short=FULL_TIME);
short drvHrs();
//Execution Begins Here!
int main(int argc, char** argv) {
//Initialize the random number seed
    srand (static_cast<unsigned int>(time(0)));
    //Initialize our loop
    int loop=100;
    float pyRate=10.0f;
    for(int emp=1;emp<=loop;emp++){
        short hrsWrkd=drvHrs();
        int pay;
        if(hrsWrkd==FULL_TIME)pay=payCheck(pyRate);
        else pay=payCheck(pyRate,hrsWrkd);
        cout<<"Emp "<<emp<<" hrs = "<<hrsWrkd
                <<" Paycheck = $"<<pay<<endl;
    }
    //Exit Stage Right
    return 0;
}

short drvHrs(){
//90% of time we will have 40 hesWrkd
int PTim=rand()%100+1;
if(PTim<=90)return 40;
//6%will have less than 40
if(PTim<=96)return rand()%40;
//4% will have overtime
return rand()%20+40;
               }

int payCheck(float pyRate, short hrsWrkd){
    if(hrsWrkd<=FULL_TIME){
        return hrsWrkd*pyRate;
    }else{
        return FULL_TIME*pyRate+1.5*pyRate*(hrsWrkd-FULL_TIME);
    }
    
                                    }