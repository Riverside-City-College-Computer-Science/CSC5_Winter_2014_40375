/*
 * David W. Smith - 1/13/14
 * Output of Truth Table presented in class
*/

// System Libraries
#include <iostream>
using namespace std;

// Global constants

// Function prototypes

// Execution begins here
int main(int argc, char** argv) {
    // Declare local variables
    bool x=true, y=true;
    // Output table headings
    cout << "X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X "
         << " !(X&&Y) !X||Y !(X||Y) !X&&!Y" << endl;
    // Output the first row
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << " ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "  ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "   ";
    cout << (x^y^y?'T':'F') << "     ";
    cout << (x^y^x?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "       ";
    cout << (!x||y?'T':'F') << "      ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << endl;
    // Output the second row
    y=false; 
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << " ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "  ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "   ";
    cout << (x^y^y?'T':'F') << "     ";
    cout << (x^y^x?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "       ";
    cout << (!x||y?'T':'F') << "      ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << endl;
    // Output the third row
    x=false;
    y=true;
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << " ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "  ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "   ";
    cout << (x^y^y?'T':'F') << "     ";
    cout << (x^y^x?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "       ";
    cout << (!x||y?'T':'F') << "      ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << endl;
    // Output the fourth row
    x=false;
    y=false;
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << " ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "  ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x||y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "   ";
    cout << (x^y^y?'T':'F') << "     ";
    cout << (x^y^x?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "       ";
    cout << (!x||y?'T':'F') << "      ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << endl;
    //Exit, stage right.
    return 0;
}

