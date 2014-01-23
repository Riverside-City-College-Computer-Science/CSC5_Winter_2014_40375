/* 
 * File:   main.cpp
 * Author: Marwah Dawoody
 * Created on January 23, 2014, 8:40 AM
 * Time Machine Problem 
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//Global Constants
  const unsigned char CNV_MIN_HRS=60;//60 minutes in an hour
  const unsigned char CNV_24HR=12;//24 hour clock conversion

//Function Prototypes
  void read(unsigned short &, unsigned short &,char &);
  unsigned short minutes(unsigned short,unsigned short,char);
  unsigned short diff(unsigned short,unsigned short);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
      unsigned short shr,ehr,smin,emin,scmin,ecmin,diffMin;
      char sampm,eampm;
    //read in the data
      read(shr,smin,sampm);    
      read(ehr,emin,eampm); 
    //convert to minutes
      scmin=minutes(shr,smin,sampm);
      ecmin=minutes(ehr,emin,eampm);
      //cout<<"Starting Minutes = "<<smin<<endl;
      //cout<<"Ending Minutes = "<<smin<<endl;
    //What is the difference in minutes?
      diffMin=diff(scmin,ecmin);
      cout<<"The difference in minutes = "<<diffMin<<endl;
    //Exit Stage Right
    return 0;
}

unsigned short diff(unsigned short strt,unsigned short stp){
    short min=stp-strt;
    return (min>=0)?min:(min+2*CNV_24HR*CNV_MIN_HRS);
}

unsigned short minutes(unsigned short hr,unsigned short min, char ampm){
    hr+=(ampm=='p'&&hr!=CNV_24HR)?CNV_24HR:0;
    hr-=(ampm=='a'&&hr==CNV_24HR)?CNV_24HR:0;
    return hr*CNV_MIN_HRS+min;
}

void read(unsigned short &hr, unsigned short &min,char &ampm)
{
    char dum;   
    cout<<"Input a time"<<endl;
    cout<<"The format is XX:XX am/pm"<<endl;
    cin>>setw(2)>>hr>>dum>>min>>setw(2)>>ampm>>dum;
    //cout<<"You input the following"<<endl;
    //cout<<"The hour = "<<hr<<endl;
    //cout<<"The minute = "<<min<<endl;
    //cout<<"AM/PM = "<<ampm<<"m"<<endl;
}