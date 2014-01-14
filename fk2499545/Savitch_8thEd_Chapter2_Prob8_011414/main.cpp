/*
  Fuaad Khan
  January 14, 2014
  Inflation, effects of
  Savitch Chapter 2, Problem 8
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_PERC = 100;
//Function Prototype

//Execution Begins Here!
int main(){
    //Declare Variables
    float price, infltn;

    //Input price
    cout<<"Input the initial price of the item in dollars : "<<endl;
    cin>>price;
    cout<<"Input the infation rate over time in % :"<<endl;
    cin>>infltn;

    //adjust
    infltn/=CNV_PERC;
    //Calculate the first years increase
    price*=(1+infltn);

    //Output
    cout<<setprecision(2);
    cout<<fixed;
    cout<<showpoint;
    cout<<"Price increase for the first year = $"<<price<<endl;

    //Calculate the second years increase
    price*=(1+infltn);

    //Output
    cout<<"Price increase for the second year = $"<<price<<endl;

    //Calculate the third years increase
    price*=(1+infltn);

    //Output
    cout<<"Price increase for the third year = $"<<price<<endl;

    //Calculate the fourth years increase
    price*=(1+infltn);

    //Output
    cout<<"Price increase for the fourth year = $"<<price<<endl;







    return 0;
}

