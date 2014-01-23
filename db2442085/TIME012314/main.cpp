/*
 David Ballantyne
 01/23/14
 purpose:Gaddis_7thEd_Ch5_Prob20
*/
//Libraries
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants
const unsigned char CNV_MIN_HRS=60;//60 min in hour
const unsigned char CNV_24HR=12;//24 hour clock conversion

//Function Prototypes
void read(unsigned short &, unsigned short &, char &);
unsigned short minutes(unsigned short, unsigned short, char);
unsigned short diff(unsigned short, unsigned short);

//Execution Begins Here
int main(int argc, char *argv[]){
    //declare variables
    unsigned short shr,ehr,smin,emin,scmin,ecmin,diffMin;
    char sampm,eampm;
    read(shr,smin,sampm);
    read(ehr,emin,eampm);
    //convert to mintues
    scmin=minutes(shr,smin,sampm);
    ecmin=minutes(ehr,emin,eampm);
    cout<<"Starting minutes "<<scmin<<endl;
    cout<<"Ending minutes "<<ecmin<<endl;
    //diff in min
    diffMin=diff(scmin,ecmin);
    cout<<"The difference in minutes = "<<diffMin<<endl;
    //Exit Stage Right
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void read(unsigned short &hr, unsigned short &min, char &ampm){
     char dum;
     cout<<"input time\n"
         <<"Format xx:xx am/pm\n";
     cin>>setw(2)>>hr>>dum>>min>>setw(2)>>ampm>>dum;
     cout<<"You input\n"
         <<"The hour = "<<hr<<"\n"
         <<"the minute = "<<min<<"\n"
         <<"AM/PM = "<<ampm<<"m\n";
}
unsigned short minutes(unsigned short hr, unsigned short min, char ampm){
         hr+=(ampm=='p'&& hr!=CNV_24HR)? CNV_24HR:0;
         hr-=(ampm=='a'&& hr==CNV_24HR)? CNV_24HR:0;
         return hr*CNV_MIN_HRS+min;
}
unsigned short diff(unsigned short strt, unsigned short stp){
         signed short min=stp-strt;
         return (min>0)? min:(min+2*CNV_24HR*CNV_MIN_HRS);
}
