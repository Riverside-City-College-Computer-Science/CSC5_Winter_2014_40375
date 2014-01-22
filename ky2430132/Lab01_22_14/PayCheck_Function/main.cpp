/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 22, 2014, 11:23 AM
 * Defaulted Parameters and static variables
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants
const unsigned short FULL_TIME=40;

//Function Prototypes
int payCheck (float, short=FULL_TIME);
short drvHrs ();
//Execution Begins Here!
int main(int argc, char** argv) {
//initialize the random Number seed
    srand(static_cast <unsigned int>(time(0)));
//intialize our loop
    int loop=100;
    float pyRate=10.0f;
    for (int emp=1;emp<=loop;emp++){
        short hrsWrkd=drvHrs();
        int pay;
        if (hrsWrkd==FULL_TIME) pay=payCheck(pyRate);
        else pay=payCheck(pyRate, hrsWrkd);
        cout<<emp<<"Emp "<<hrsWrkd<<" hrs "
                <<" Paycheck = $"<<pay<<endl;
    }
    return 0;
}

short drvHrs (){
//90% of time will have 40 hrswrkd
int PTim=rand()%100+1;
if(PTim<=90)return 40;
if (PTim<=96)return rand()%40;
return rand()%20+40;
}

int payCheck (float pyRate, short hrWrkd){
    if (hrWrkd<=FULL_TIME){
        return hrWrkd*pyRate;
    }else{
     return FULL_TIME*pyRate+1.5*pyRate*(hrWrkd-FULL_TIME);   
    }
}