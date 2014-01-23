/*
   David Ballantyne
   01/07/14
   purpose: star distance conversions
            find out if spooky aliens been to earth
            probably not
   version 2 Dr. Mark E. Lehr
   Adding Time to reach star
*/
//Libraries
#include <iostream>
using namespace std;

//Gloabl Constants
const float VC=3e8;//3*10^8 meters/sec
const float VE=1e5;//100,000 miles/hour
const float CNV_M_KM=1e-3;//conversion meters to km
const float CNV_M_FT=3.28084e0;//conversion meters to feet
const float CNV_MI_FT=5.280e3;//conversion miles to feet
const float CNV_S_YR=6e1*6e1*2.4e1*3.65e2;//seconds to years
const float CNV_HR_DAY=2.4e1;//Number of hours per day
const float CNV_DY_YEAR=3.65e2;//Number of days per year
//Functioning Prototypes

//Execution Belings Here
int main(){
    //Declare Variables
    float dLtYrs, dMiles, dKm;
    float tMiles,VeKm;

    //Prompt user
    cout<<"How far away is your star in light years? "<<endl;
    cin>>dLtYrs;

    //Processs calculate in miles and kilometers
    dKm=dLtYrs*VC*CNV_M_KM*CNV_S_YR;//for Km
    dMiles=(dLtYrs*VC*CNV_S_YR*CNV_M_FT)/CNV_MI_FT;//for Miles
    tMiles=dMiles/VE/CNV_HR_DAY/CNV_DY_YEAR;
    VeKm=dKm/tMiles/CNV_HR_DAY/CNV_DY_YEAR;

    //Output
    cout<<" Distance to this star in Kilometers is "<< dKm <<
          "(Km)" <<endl;

    cout<<" Distance to this star in Miles is "<< dMiles <<
          "(Mi)" <<endl;

    cout<<" Years to Reach Star = "<< tMiles <<
          "(yrs)" <<endl;

    cout<<" Escape Velocity in KM/HR "<< VeKm <<
          "(km/hr)" <<endl;

    //Exit Stage Right
    return 0;
}

