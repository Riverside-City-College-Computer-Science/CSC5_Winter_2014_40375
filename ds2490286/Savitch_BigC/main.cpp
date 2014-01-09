/*
 * David W. Smith - 1/9/14
 * Problem #10 - Ask user for 1 character input, then display the
 * input character in the shape of the letter "C".
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main() {
    //Define local variables
    char usrChar;
    //Get user input
    cout << "What character should I display? ";
    cin >> usrChar;
    //Output the Capital C
    cout << endl << "    " << usrChar << usrChar << usrChar << "\n"
         << "   " << usrChar << "   "<< usrChar << "\n"
         << "  " << usrChar << "\n"
         << " " << usrChar << "\n"
         << " " << usrChar << "\n"
         << " " << usrChar << "\n"
         << "  " << usrChar << "\n"
         << "   " << usrChar << "   "<< usrChar << "\n"
         << "    " << usrChar << usrChar << usrChar << "\n" << endl;
    //Exit, stage right.
    return 0;
}