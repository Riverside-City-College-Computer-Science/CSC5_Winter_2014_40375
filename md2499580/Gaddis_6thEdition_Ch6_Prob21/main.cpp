/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 23, 2014, 11:14 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;
//Global COnstants

//Function Prototypes
bool isPrime(unsigned int);
int outprime(unsigned int);
int random (unsigned int, unsigned int);

//Execution begins Here
int main(int argc, char** argv) {
   //Set Random Number Seed
     srand(static_cast<unsigned int>(time(0))); 
   //choose random number range
     int strt=100,stp=200;
     int rnd=random(strt,stp);
   //output the results
     cout<<"The random numbers up to "<<rnd<<" are "<<endl;
     cout<<"The number of primes = "<<outprime(rnd);
   //Execution Begins Here
    return 0;
}

int random (unsigned int strt, unsigned int stp){
    return rand()%(stp-strt+1)+strt;
}


int outprime(unsigned int n){
    //count the number of primes
    int cnt=0;
    cout<<endl;
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<setw(5)<<i;
            if(cnt++%10==9)cout<<endl;
        }   
    }
    cout<<endl;
}

bool isPrime(unsigned int n){
     int loop=sqrt(n);
     for(int i=2;i<=loop;i++){
         if(n%i==0)return false;
     }
     return true;
}