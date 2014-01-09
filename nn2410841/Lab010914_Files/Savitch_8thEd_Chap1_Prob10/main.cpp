/* 
 * Nhat Nguyen
 * Created on January 9, 2014, 10:25 AM
 * Character Graphics
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare the Char variable
    char letter;
    //Input the Letter
    cout<<"What letter would you like to use"
        <<"to output a capital C"<<endl;
    cin>>letter;
    //Output the Capital C
    cout<<"   "<<letter<<" "<<letter<<" "<<letter<<endl;
    cout<<" "<<letter<<"       "<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<letter<<endl;
    cout<<" "<<letter<<"       "<<letter<<endl;
    cout<<"   "<<letter<<" "<<letter<<" "<<letter<<endl;
    //Exit Stage Right
    return 0;
}

