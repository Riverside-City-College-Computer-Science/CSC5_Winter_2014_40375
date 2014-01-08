/*
  Jennifer Clark
  January 7, 2014
  1) Calculate the distance
  to a star
  2) Utilize scientific notation
*/

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float VC=3e8;//3x10^8 meters/sec
const float CNV_SEC_Yr=6e1*6e1*2.4e1*3.65e2;//Conversion from seconds to years
const float CNV_M_KM=1e-3;//Conversion from meters to kilometers
const float CNV_FT_M=3.048e-1;//Conversion from feet to meters
const float CNV_MI_FT=5.280e3;//Conversion from miles to feet

//Function Prototypes

//Execution Begins Here
int main(){
   //Declare variables
    float dLtYrs,dMiles,dKm;
    //Input the distance to a star in light years
    cout<<"How far away is star in light years?"<<endl;
    cin>>dLtYrs;
    //Process - Calculate distance in miles and kilometers
    dKm=dLtYrs*VC*CNV_M_KM*CNV_SEC_Yr;
    dMiles=dKm/CNV_FT_M/CNV_MI_FT/CNV_M_KM;
    //Output the converted distances
    cout<<"Distance to this star in Km = "
       <<dKm<<"(km)"<<endl;
    cout<<"Distance to this star in Miles = "
       <<dMiles<<" (mi)"<<endl;
    return 0;
}

