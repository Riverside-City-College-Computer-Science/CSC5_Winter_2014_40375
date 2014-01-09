/* 
 * David Ballantyne
 * 01/09/14
 * purpose: savitch_8thEd_ch1_prob10
 */
//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functioning Prototypes

//Execution Begins Here
int main(int argc, char** argv){
    //Declare Variable
    char letter;
    
    //prompt
    cout<<" what letter would you like to use"
        <<" to output a capitol C ?"<<endl;
    //input
    cin>>letter;
    
    //Output
    cout<<"  "<<letter<<" "<<letter<<" "<<letter<<endl
        <<" "<<letter<<"     "<<letter<<endl
        <<letter<<endl
        <<letter<<endl
        <<letter<<endl
        <<letter<<endl
        <<letter<<endl
        <<" "<<letter<<"     "<<letter<<endl
        <<"  "<<letter<<" "<<letter<<" "<<letter<<endl;
    
    //Exit Stage Right
    return 0;
}
