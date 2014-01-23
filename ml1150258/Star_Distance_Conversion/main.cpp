/*
   David Ballantyne
   01/07/14
   purpose: star distance conversions
            find out if spooky aliens been to earth
            probably not
*/
//Libraries
#include <iostream>
using namespace std;

//Gloabl Constants
const float VC=3e8;//3*10^8
const float CNV_M_KM=1e-3;//conversion meters to km
const float CNV_M_FT=3.28084e0;//conversion meters to feet
const float CNV_MI_FT=5.280e3;//conversion miles to feet
const float CNV_S_YR=3.15360e7;//seconds to years
//Functioning Prototypes

//Execution Belings Here
int main(){
    //Declare Variables
    float dLtYrs, dMiles, dKm;

    //Prompt user
    cout<<"How far away is your star in light years? "<<endl;
    cin>>dLtYrs;

    //Processs calculate in miles and kilometers
    dKm=dLtYrs*VC*CNV_M_KM*CNV_S_YR;//for Km
    dMiles=(dLtYrs*VC*CNV_S_YR*CNV_M_FT)/CNV_MI_FT;//for Miles

    //Output
    cout<<" Distance to this star in Kilometers is "<< dKm <<
          "(Km)" <<endl;

    cout<<" Distance to this star in Miles is "<< dMiles <<
          "(Mi)" <<endl;

    //Exit Stage Right
    return 0;
}

