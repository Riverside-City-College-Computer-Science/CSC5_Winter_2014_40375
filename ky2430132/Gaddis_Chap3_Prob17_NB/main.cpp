/* 
 * File:   main.cpp
 * Author: Kai Ming Yau
 * Created on January 13, 2014, 11:33 AM
 * Gaddis Probem 17
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global COnstants
const float CNV_YRS_MNS=12;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare variables
    float rate,
            N,//Number of compounding periods
            L,//Loan
            Pyt;//Payment
    //Input the rate, N, L
    cout<<"Input the loan, rate, and number of compounding periods "<<endl;
    cin>>L>>rate>>N;
    //Calculation
    float temp = pow(1+rate, N);
    Pyt= rate*temp*L/(temp -1);
    //output the result
     cout<<"The payment = $"<<Pyt/CNV_YRS_MNS<<endl;       
    return 0;
}

