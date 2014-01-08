/*
  * Adam Grose
  * January 7, 2014
  * 1) Calculate the distance to a star
  * 2) Utilize scientific notation
*/

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants
const float VC=3e8;//3X10^8 meters/sec
const float CNV_M_KM=1e-3;//conversion from meters to kilometers
const float CNV_FT_M=3.048e-1;//conversion from feet to meters
const float CNV_MI_FT=5.280e3;//conversion from miles to feet
const float CNV_SEC_YR=6.0e1*6.0e1*2.4e1*3.65e2;//Conversion from seconds to years

//Function Prototypes

//Execution Begins Here
int main(){
    //Declare Variables
    float dLtYrs, dMiles, dKm;

    //Input the distance to a star in Light Years
    cout<<"How Far away is star in Light Years?"<<endl;
    cin>>dLtYrs;

    //Process - calculate distance in km
    dKm=VC*CNV_SEC_YR*dLtYrs*CNV_M_KM;
    //Output the converted distance

    cout<<endl<<"Distance to this star in Km is"<<endl;
    cout<<dKm<<"(km)"<<endl;

    //Process - calculate distance in miles
    dMiles=dKm/CNV_M_KM/CNV_FT_M/CNV_MI_FT;

    //Output the converted distance
    cout<<endl<<"Distance to this star in miles is"<<endl;
    cout<<dMiles<<"miles"<<endl;

    return 0;
}

