/*
  Nhat Nguyen
  January 14th, 2014
  Inflation
*/

//System Libaries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_PERC=100;

//Function Prototypes

//Execution Begins Here
int main(){
//Define Variables
    float price, infltn;
//Input Price
    cout<<"Input the starting price "
        <<"of an item in $"<<endl;
    cin>>price;
    cout<<"Input the inflation rate "
        <<"over time in %"<<endl;
    cin>>infltn;
//Adjust
    infltn/=CNV_PERC;
//Calculate the first years increase
    price*=(1+infltn);
//Output the first years increase
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Price increase "
        <<"first year = $"
        <<price<<endl;
//Calculate the second years increase
    price*=(1+infltn);
//Output the second years increase
    cout<<"Price increase "
        <<"second year = $"
        <<price<<endl;
//Calculate the third years increase
    price*=(1+infltn);
//Output the third years increase
    cout<<"Price increase "
        <<"third year = $"
        <<price<<endl;
//Exit Stage Right
    return 0;}
