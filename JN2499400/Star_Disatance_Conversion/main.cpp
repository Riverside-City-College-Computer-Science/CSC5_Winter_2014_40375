/*Jose Navarro
  January 7th, 2014
  1) Calculate the distance to a star
  2) Itilize scientific notation
  */

//Sustem Libaries
#include <iostream>
using namespace std;

//Global Constants
const float VC=3.0e8;//3x10^8 meters per second
const float CNV_M_KM=1e-3;//Conversion from meters to kilometers
const float CNV_FT_M=3.048e-1;//Conversion from feet to meters
const float CNV_MI_FT=5.2890e3;//Conversion from miles to feet
const float CNV_SEC_Yr=6e1*6e1*2.4e1*3.65e2;//Conversion from Sec to Yrs
//Function Prototypes

//Execution Begins Here
int main(){
    //Declare variables
    float dLtYrs,dMiles,dKm;
    //Input the distance to a star in light years
    cout<<"how far away is star in Light Years?"<<endl;
    cin>>dLtYrs;
    //Process - Calculate distance in miles and kilameters
    dKm=VC*CNV_SEC_Yr*dLtYrs*CNV_M_KM;
    dMiles=dKm/ CNV_M_KM/CNV_FT_M/CNV_MI_FT;
    //Output the convesion distance
    cout<< "Distance to the star in Km = "
        << dKm << "(km)" << endl;
    cout<< "Distance to the star in Miles = "
        << dMiles << "(miles)" << endl;
    //Exit
    return 0;
}

