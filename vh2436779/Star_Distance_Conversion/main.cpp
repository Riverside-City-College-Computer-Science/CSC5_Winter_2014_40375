/*
  Victoria Hodnett
  January 7, 2014
  1) Calculate the distance to a star
  2) Utilize scientific notation
*/

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float VC = 3.0e8; //3x10^8 meters per second
const float CNV_M_KM = 1e-3; //Conversion from meters to kilometers
const float CNV_FT_M = 3.048e-1; //Converstion from feet to meters
const float CNV_MI_FT = 5.280e3; //Conversion from miles to feet
const float CNV_SEC_YR = 6.0e1*6.0e1*2.4e1*3.65e2; //Conversion from years to seconds

//Function Prototypes

//Execution begins here
int main(){
    //Declare variables
    float dLtYrs, dMiles, dKm;
    //Input the distance to a star in light years
    cout << "How far away is star in Light Years?" << endl;
    cin >> dLtYrs;
    //Process - Calculate distance in miles and kilometers
    dKm = CNV_SEC_YR * dLtYrs * VC * CNV_M_KM;
    dMiles = dKm / CNV_M_KM / CNV_FT_M / CNV_MI_FT;
    //Output the converted distances
    cout << "Distance to this star in Km = "
         << dKm << " (km)" << endl;
    cout << "Distance to this star in miles = "
         << dMiles << " (miles)" << endl;

    //Exit
    return 0;
}

