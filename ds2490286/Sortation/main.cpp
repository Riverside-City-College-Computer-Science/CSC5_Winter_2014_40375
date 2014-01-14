/*
 * File:   main.cpp
 * Author: David W. Smith
 * Created: 01/14/14
 * Select largest, smallest & mid values of 3 numbers,
 * then display in sorted value.
 */
#include <iostream>
using namespace std;

//Global Constants
const float CNV_PERC=100;

//Function Declarations

//Execution begins here
int main(int argc, char *argv[])
{
    // Declare local variables
    unsigned short min,max,t1,t2,t3,avg=0;
    //Input 1st test score
    cout << "First test score: ";
    cin >> t1;
    max = t1;
    min = t1;
    //Input 2nd test score
    cout << "Second test score: ";
    cin >> t2;
    if (t2>max)max=t2;
    if (t2<min)min=t2;
    //Input 3rd test score
    cout << "Third test score: ";
    cin >> t3;
    if (t3>max)max=t3;
    if (t3<min)min=t3;
    //Calculate average
    avg = (t1+t2+t3)/3;
    //Print what we've found so far
    cout<<"The max value is :" << max << endl;
    cout<<"The min value is :" << min << endl;
    cout<<"The average is :" << avg << endl;
    //Sorting
    if (t1 > t2 && t1 > t3) {
           cout << t1 <<",";
           if (t2>t3) {
              cout << t2 << "," << t3 << endl;
           } else {
              cout << t3 << "," << t2 << endl;
           } 
    } else if (t2 > t1 && t2 > t3) {
           cout << t2 <<",";
           if (t1>t3) {
              cout << t1 << "," << t3 << endl;
           } else {
             cout << t3 << "," << t1 << endl;
           } 
    } else if (t3 > t1 && t3 > t2) {
           cout << t3 <<",";
           if (t1>t2) {
              cout << t1 << "," << t2 << endl;
           } else {
             cout << t2 << "," << t1 << endl;
           } 
    }
    // Exit, stage right.
    system("PAUSE");
    return EXIT_SUCCESS;
}
