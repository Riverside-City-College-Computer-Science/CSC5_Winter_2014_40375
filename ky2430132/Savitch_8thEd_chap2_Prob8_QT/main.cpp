/*
  Kai Ming Yau
  14 Jaunary, 2014
  Problem 8 - Inflation, effects of
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const float CNV_PERC = 100;
//FunctionPrototypes

//Execution Begins Here
int main(){

    //Delcare Variables
    float price, Infltn, NYrs;

    //Input price
    cout<<"Input the starting cost of the item in $ "<<endl;
    cin>>price;
    cout<<"Input the inflation rate over time in % "<<endl;
    cin>>Infltn;
    //Ajust
    Infltn/= CNV_PERC;
    //Claculate the first year increase
    price*= (1+Infltn);
    //Output the result
    cout<<setprecision(2);
    cout<<fixed;
    cout<<showpoint;
    cout<<"Price increase first year = $"<<price<<endl;
    //Claculate the second years increase
    price*=(1+Infltn);
    //Output the result
    cout<<"Price increase second years = $"<<price<<endl;
    //Claculate the third years increase
    price*=(1+Infltn);
    //Output the result
    cout<<"Price increase third years = $"<<price<<endl;
    //Exit Stage Right
    return 0;
}

