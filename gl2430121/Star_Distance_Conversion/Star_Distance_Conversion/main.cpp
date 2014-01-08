/*
  Guohao Liu
  January 7th, 2014
  1) Calculatre the distance
     to a star
  2) Utilize scientific
     notation
*/

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float VC=3e8;//3*10^8 meter per second
const float CNV_M_KM=1e-3;//Conversion from meters to kilometers
const float CNV_FT_M=3.048e-1;//Convertion from feet to meters
const float CNV_MI_FT=5.280e3;//Convertion from feet to miles
const float CNV_SEC_Yr=6.0e1*6.0e1*2.4e1*3.65e2;//Conversion from seconds to years
//FunctionPrototypes

//Execution Begins Here
int main(){
    //Declare vatiables
    float dLtYrs,dMiles,dKm;
    //input the distance to a star in light year
    cout << "How far away is star in light years?" << endl;
    cin>>dLtYrs;
    //Process - Calculate distance in Km
    dKm=dLtYrs*CNV_SEC_Yr*VC*CNV_M_KM;
    //Output the converted distrance
    cout<<"Distance to this star in km = "
       <<dKm<<"(km)"<<endl;
    //Process - Calculate distance in Miles
    dMiles=dLtYrs*CNV_SEC_Yr*VC/CNV_FT_M/CNV_MI_FT;
    //output the converted distance
    cout<<"Distance to this star in Mile = "
       <<dMiles<<"(mile)"<<endl;
    return 0;
}

