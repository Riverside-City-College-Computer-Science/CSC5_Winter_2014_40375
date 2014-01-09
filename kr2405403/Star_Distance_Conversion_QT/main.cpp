/*
    Kautsar Aussie
    January 7th, 2014
    1) Calculate the distance
       to a star
    2) Utilize scientific
       notation
*/

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float VC=3e8;//3x10^8 meters/second
const float CNV_M_KM=1e-3;//Conversion from meters to kilometers
const float CNV_FT_M=3.048e-1;//Conversion from feet to meters
const float CNV_MI_FT=5.280e3;//Conversion from feet to miles
const float CNV_SEC_YR=6e1*6e1*2.4e1*36.5e1;//Conversion from seconds to years


//Function Prototypes

//Execution Begins here
int main(){
    //Declare variables
    float dLtYrs, dMiles,dKm;
    //Input the distance to a star in light years
    cout<<"How far away is star in Light Years?"<<endl;
    cin>>dLtYrs;
    //Process - Calculate distance in miles and km
    dKm=dLtYrs*VC*CNV_M_KM*CNV_SEC_YR;
    dMiles=dKm/CNV_M_KM/CNV_FT_M/CNV_MI_FT;
    //Output the converted distances
    cout<<"Distance to this star in Km = "
       <<dKm<<"(km)"<<endl;
    cout<<"Distance to this star in Km = "
       <<dMiles<<"(Miles)"<<endl;
    return 0;
}

