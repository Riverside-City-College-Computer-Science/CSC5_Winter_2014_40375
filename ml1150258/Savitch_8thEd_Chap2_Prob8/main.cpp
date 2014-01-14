/*
  Dr. Mark E. Lehr
  January 14th, 2014
  Inflation, effects of
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_PERC=100;

//Function Prototypes

//Execution Begins Here!
int main(){
    //Declare Variables
    float price,infltn;
    //Input price
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
    //Output
         cout<<setprecision(2);
         cout<<fixed;
         cout<<showpoint;
         cout<<"Price increase "
             <<"first year = $"
             <<price<<endl;
    //Calculate the second years increase
         price*=(1+infltn);
    //Output
         cout<<"Price increase "
             <<"second year = $"
             <<price<<endl;
    //Calculate the third years increase
         price*=(1+infltn);
    //Output
         cout<<"Price increase "
             <<"third year = $"
             <<price<<endl;
    //Exit Stage Right
    return 0;
}

