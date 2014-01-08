/*
  Kai Ming Yau
  January 7th, 2014
  1)calculate the Distance to a star
  2)utilize scientific notation
*/

//System Libraries
#include <iostream>
using namespace std;

// Global Constants
const float Vc= 3e8;//3*10^8 meter per second
const float CNV_M_KM=1e-3;//conversion from meters to kilometer
const float CNV_FT_M=3.048e-1;//Conversion from feet to meter
const float CNV_MI_FT=5.280e3;//COnversion from miles to feet
const float CNV_SEC_Yr=6e1*6e1*2.4e1*3.65e2;//Conversion from second to year

// function prototypes

//Execution Begins here

int main(){
    //Declare variables
    float dLtYrs, dMi, dKm;
    //Input the disatance to a star in light years
    cout<<"How far away is star in light years?";
     cin>>dLtYrs;
    //Process - Calaculate distance to a star in kilometer
     dKm=dLtYrs*CNV_SEC_Yr*Vc*CNV_M_KM;
    //Output the converted distance
     cout<<"distance to this star in Km = "<<dKm<<"(km)"<<endl;
    //Process - Calaculate distance to a star in miles
     dMi=dLtYrs*CNV_SEC_Yr*Vc/CNV_FT_M/CNV_MI_FT;
    //Output the converted distance
     cout<<"distance to this star in mile = "<<dMi<<"(Mi)"<<endl;
    return 0;
}

