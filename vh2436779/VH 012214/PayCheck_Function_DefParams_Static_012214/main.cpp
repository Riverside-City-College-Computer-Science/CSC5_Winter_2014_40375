/* 
 * File:   main.cpp
 * Author: Victoria
 * Created on January 22, 2014, 11:23 AM
 * Illustrate Default Parameters, 
 * and Static Variables
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Variables
unsigned short FULL_TIME = 40;

//Function Prototypes
int payCheck(float, short = FULL_TIME);
short drvHrs();

//Execution Begins
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Initialize loop
    int loop = 100;
    float pyRate = 10.0f;
    for (int emp = 1; emp <= loop; emp++){
        short hrsWrkd = drvHrs();
        int pay;
        if (hrsWrkd == FULL_TIME) pay = payCheck(pyRate);
        else pay = payCheck(pyRate, hrsWrkd);
        //Output
        cout << "Employee #" << emp << " Hours = " << hrsWrkd
             << " Paycheck = $" << pay << endl;
    }
    
    //Exit
    return 0;
}

int payCheck(float pyRate, short hrsWrkd){
    if(hrsWrkd<=FULL_TIME){
        return hrsWrkd * pyRate;
    }else{
        return FULL_TIME * hrsWrkd * pyRate 
                + 1.5*pyRate*(hrsWrkd - FULL_TIME);
    }
}

short drvHrs(){
    //90% of the time we will have 40 hrsWrkd
    int pTim = rand()%100 + 1;
    if (pTim <= 90) return 40;
    //6% will have less than 40
    if (pTim <= 96) return rand()%40;
    //4% will have overtime
    return rand()%20+40;
}
