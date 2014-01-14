/*
  David ballantyne
  01/14/14
  purpose: Savitch_8thEd_Ch2_Prob8
*/
//Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_PERC=100;
//Functioning Prototypes

//Execution Begins Here
int main(){
    //Declare variables
    float price, infltn;
    //input price
    cout<<"Input the starting price of an item in dollars.\n";
    cin>>price;
    cout<<"Input the starting inflation rate in % over time.\n";
    cin>>infltn;
    //adjust
    infltn/= CNV_PERC;
    //proces: calculate first years increase
    price*=(1+infltn);
    //output
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The price increase "
       <<"first year = $"
       <<price<<endl;
    //proces: calculate second years increase
    price*=(1+infltn);
    price+=0.005;
    //output
    cout<<"The price increase "
       <<"second year = $"
       <<price<<endl;
    //proces: calculate third years increase
    price*=(1+infltn);
    price+=0.005;
    //output
    cout<<"The price increase "
       <<"third year = $"
       <<price<<endl;
    //proces: calculate fourth years increase
    price*=(1+infltn);
    price+=0.005;
    //output
    cout<<"The price increase "
       <<"fourth year = $"
       <<price<<endl;
    return 0;
}
