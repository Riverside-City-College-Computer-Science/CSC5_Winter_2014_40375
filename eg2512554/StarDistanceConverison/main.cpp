/*
  Edwin Gibbs
  Jan 7th, 2014
  1)Calculate the distance to a star
  2) Utilize scientific notation
  */

//System Libraries


#include <iostream>
using namespace std;

//Global Constants
const float VC=3.0e8;//3x10^8 meters/second
const float CNV_M_KM=1e-3;//Conversion from meters to kilometers
const float CNV_FT_M=3.048e-1;//Conversion frm feet to meters
const float CNV_MI_FT=5.280e3;//Converion from miles to feet
const float CNV_SEC_YR=6e1*6e1*2.4e1*3.65e2;//Conversion from seconds to years
//Function Prototypes

//Execution Begins here

;int main(){

    //declare variables
    float dLtYrs,dMiles,dKm;
    //Input the distance to a star in light years
    cout<<"How far away is star in lightyears?"<<endl;
          cin>>dLtYrs;
    //Process - calculate distance in miles and km
    dKm=VC*CNV_SEC_YR*dLtYrs*CNV_M_KM;
    dMiles=dKm/CNV_M_KM/CNV_FT_M/CNV_MI_FT;
    //Output the converted distances
    ;cout<<"Distance to the star in kilometers = "
       <<dKm<<"(km)"<<endl;
    cout<<"Distance to the star in miles"
       <<dMiles<<"(miles)"<<endl;

    cout<<"goodbye"<<endl;

    return 0;
}

