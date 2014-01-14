/*
  Victoria Hodnett
  January 14, 2014
  Min, Max, Sort Numbers
*/

//System Libraries
#include <iostream>
using namespace std;

//Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char *argv[])
{
    //Declare variables
    unsigned short min, max, t1, t2, t3;
    float avg;
    //Input first test score
    cout << "What is the first test score? ";
    cin >> t1;
    min = max = t1;
    //Input the next score
    cout << "What is the second test score? ";
    cin >> t2;
    if (t2 > max) max = t2;
    if (t2 < min) min = t2;
    //Input next score
    cout << "What is the third test score? ";
    cin >> t3;
    if (t3 > max) max = t3;
    if (t3 < min) min = t3;
    //Calculate average
    avg = (t1 + t2 + t3)/3.0;
    //Output
    cout << "The minimum is: " << min << endl;
    cout << "The maximum is: " << max << endl;
    cout << "The average is: " << avg << endl;
    //Sorting
    cout << "The sorted order, from maximum to minimum, is: ";
    if(t1>t2&&t1>t3){
          cout << t1 << ", ";
          if(t2>t3){
          cout << t2 << ", " << t3 << endl;
          }else{ 
          cout << t3 << ", " << t2 << endl;
          }
    }else if(t2>t1&&t2>t3){
         cout << t2 << ", ";
         if (t1>t3){
         cout << t1 << ", " << t3 << endl;
         }else{
         cout << t3 << ", " << t1 << endl;
         }
    }else if(t3>t1&&t3>t2){
         cout << t3 << ", ";
         if (t1>t2){
         cout << t1 << ", " << t2 << endl;
         }else{
         cout << t2 << ", " << t1 << endl;
         }
    }
    //Exit
    system("PAUSE");
    return EXIT_SUCCESS;
}
