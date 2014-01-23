//
//  main.cpp
//  Param_012214
//  Created by Donald Allum on 1/22/14.
//  Default Parameters and static variables
//

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

//Global constants
const unsigned short FULL_TIME=40;


//Function prototypes
int payCheck(float, short=FULL_TIME);
short drvHrs();

//Execution begins here

int main(int argc, const char * argv[]){
    
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Initialize our loop
    int loop=100;
    float pyRate=10.0f;
    for (int emp=1;emp<=loop;emp++){
        short hrsWrkd=drvHrs();
        int pay;
        if (hrsWrkd==FULL_TIME) pay=payCheck(pyRate);
        else pay=payCheck(pyRate,hrsWrkd);
        cout<<"Emp "<<emp<<" hrs = "<<hrsWrkd
            <<" Paycheck = $"<<pay<<endl;
    }
    //Exit stage right
    return 0;
}

short drvHrs(){
    //90% of time we will have 4 hrsWrkd
    int pTim=rand()%100+1;
    if (pTim<=90) return 40;
    //6% will have less than 40
    if (pTim<=96) return rand()%40;
    //4% will have overtime
    return rand()%20+40;
}

int payCheck(float pyRate, short hrsWrkd){
    if (hrsWrkd<=FULL_TIME){
        return hrsWrkd*pyRate;
    }else{
        return FULL_TIME*pyRate+1.5*pyRate*(hrsWrkd-FULL_TIME);
    }
}