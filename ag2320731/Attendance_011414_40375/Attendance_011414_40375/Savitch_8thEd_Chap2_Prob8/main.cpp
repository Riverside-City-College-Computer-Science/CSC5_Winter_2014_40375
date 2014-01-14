/*
  Adam Grose
  January 14th, 2014
  Inflation, effect of
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_PERC=100;

//Function Prototypes

//Execution Begins Here
int main(){
    //Declare Variables
    float price, infln;
    //Input price
        cout<<setprecision(2);
        cout<<fixed;
        cout<<showpoint;
        cout<<"Input the starting price of an item in dollars. "<<endl;
        cin>>price;
    //Input inflation
        cout<<"Input the inflation rate."<<endl;
        cin>>infln;
    //Adjust
        infln/=CNV_PERC;
    //Calculate the first year
        price*=(1+infln);
    //Output
        cout<<"Price increase first year  = $"<<setw(7)<<price<<endl;
    //Calculate the second year
        price*=(1+infln);
    //Output
        cout<<"Price increase second year = $"<<setw(7)<<price<<endl;
    //Calculate the Third year
        price*=(1+infln);
    //Output
        cout<<"Price increase third year  = $"<<setw(7)<<price<<endl;

    //Exit Stage Right
    return 0;
}

