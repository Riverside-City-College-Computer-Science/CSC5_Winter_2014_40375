/*
* Author: Jonahtan D. Tarris
* Date: January 7, 2014
* Conversion from Light Years to meters and miles
*/

//System Libraries
#include <iostream>
using namespace std;

//Constants
const float VC = 3.0e8;//3x10^8 meters/sec
const float CNV_M_KM = 1e-3;//Conversion from meters to kilometers
const float CNV_FT_M = 3.048e-1;//Conversion from ft to meters
const float CNV_FT_MI = 5.280e3;//Conversion from miles to feet
const float CNV_SEC_YR = 6.0e1*60*24*365;//How many seconds in a year

//Function Prototypes

//Execution Begins Here
int main(){
    //Declare Vars
    float dLtYrs, dMiles, dKm;

    //Input the distance to a star in light years
    cout<<"How far away is star in light years?"<<endl;
    cin>>dLtYrs;

    //Process - Calculate in miles and km
    dKm = dLtYrs * VC * CNV_SEC_YR * CNV_M_KM;
    dMiles = dKm/CNV_M_KM/CNV_FT_M/CNV_FT_MI;

    //Output the converted distances
    cout<<"Distance to this star in Kilometers: "<<dKm<<"km"<<endl;
    cout<<"Distance to this star in Miles: "<<dMiles<<"M"<<endl;
    return 0;
}
