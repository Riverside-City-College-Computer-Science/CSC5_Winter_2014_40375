/*
  Cesar E. Velazquez
  January 14th,2014
  Inflation, effects of
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_PERC=100;

//Functional Prototypes

//Execution Begins Here
int main(){
    //Declare variables
    float price,infltn;
    //Input price
    cout<<" input the starting price "
        <<" of an item in $ "<<endl;
    cin>>price;
    cout<<" input the inflation rate "
        <<" over time in % "<<endl;
    cin>>infltn;
    //Adjust
        infltn/=CNV_PERC;
    //Calc the first years increase
        price*=(1+infltn);
    //Output
        cout<<setprecision(2);
        cout<<fixed;
        cout<<showpoint;
        cout<<"Price Increase"
            <<"first year = $ "
            <<price<<endl;
    //Calculate the second year increase
    price*=(1+infltn);
    cout<<"Price Increase"
        <<"second year = $ "
        <<price<<endl;
    //Calculate the third year increase
    price*=(1+infltn);
    cout<<"Price Increase"
        <<"third year = $ "
        <<price<<endl;
    //Exit stage right
    return 0;
}

