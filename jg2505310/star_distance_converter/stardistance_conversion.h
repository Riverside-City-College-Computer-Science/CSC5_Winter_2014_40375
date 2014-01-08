/*
Javier Garduno
01/072014
1) calculate the distance to the star 
2) utilize scientific notation 
*/
//Sytstem Libraries 
#include <iostream>
using namespace std;
//Global constants
const float VC 3.0e8;//3x10^8 
const float CNV_M_KM=10e-3;// Conversion from meters to km
const float CNV_FT_M=3.048e-1;//Conversion from feet to meters
const float CNV_FT_MI=5.280e3;//Conversion from feet to miles 
const float CNV_Sec_Year=6.0e1*6.0e1*2.4e1*3.65e2;//Conservion from seconds to year
//Function prototypes 


//Execution begins here

int main()
//declare variables 
float dLTYrs, dMiles,dmeters;
//Input the distance to the star in light years
cout<<"How far away the star in light years"
cin>>dLTYrs;
//Process - calculate distance in miles and km
dKM=VC*CNV_SEC_YR*dLtYrs*CNV_M_KM;
//Output the converted distances
cout<<"Distance to the star in Km="
<<dKM<<"(km)"<<endl; 
//Process - calculate distance in km and miles
dMI=dKm/CNV_M_KM/CNV_FT_M/CNV_FT_MI;
//Output the converted distances
cout<<"Distance to the star in Km="
<<dMI<<"(mi)"<<endl; 


return 0;


