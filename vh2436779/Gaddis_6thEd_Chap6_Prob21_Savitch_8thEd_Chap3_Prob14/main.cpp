/* 
 * File:   main.cpp
 * Author: Victoria Hodnett
 * Created on January 23, 2014, 11:15 AM
 * Prime Numbers
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
bool isPrime(unsigned int);
int outPrime(unsigned int);
int  random(unsigned int, unsigned int);

//Execution Begins
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Choose random number range
    int strt = 2, stp = 100;
    int rnd = random(strt,stp);
    //Output the results
    cout << "The random numbers up to " << rnd << " are " << endl;
    cout << "The number of primes = " << outPrime(rnd) << endl;
    //Exit
    return 0;
}

bool isPrime(unsigned int n){
    int loop = sqrt(n); //Why does this work to show 2
                        //and not sqrt(n)+1 ?
    for (int i = 2; i <= loop; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int outPrime(unsigned int n){
    //Count the number of primes
    int cnt = 0;
    cout << endl;
    for (int i = 2; i <= n; i++){
        if (isPrime(i)){
            cout << setw(5) << i;
            if (cnt++ % 10 == 9) cout << endl;
        }
    }
    cout << endl;
    return cnt;
}

int  random(unsigned int strt, unsigned int stp){
    return rand() % (stp - strt + 1) + strt;
}