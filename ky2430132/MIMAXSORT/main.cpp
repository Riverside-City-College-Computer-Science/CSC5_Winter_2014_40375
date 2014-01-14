/*
  Kai Ming Yau
  Jaunary 14, 2014
*/

//System Libraries

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char *argv[]){
    
    //Declare Variables
    unsigned short min, max, t1, t2, t3;
    float avg=0;
    //Input a test
    cout<<"What is the first test scorce? "<<endl;
    cin>>t1;
    min=max=t1;
    //Input the second source
    cout<<"What is the seocnd test scorce? "<<endl;
    cin>>t2;
    if(t2>max)max=t2;
    if(t2<min)min=t2;
    //Input the third source
    cout<<"What is the third test scorce? "<<endl;
    cin>>t3;
    if(t3>max)max=t3;
    if(t3<min)min=t3;
    //Calculate the average
    avg=(t1+t2+t3)/3;
    //Output the average
    cout<<" The max value= "<<max<<endl;
    cout<<" The min value= "<<min<<endl;
    cout<<" The average value= "<<avg<<endl;
    //Sorting
    cout<<"The sorted order is"<<endl;
    if(t1>t2&&t1>>t3){
    cout<<t1<<",";
    if(t2>t3){
    cout<<t2<<","<<t3<<endl;
    }else{
    cout<<t3<<", "<<t2<<endl;
    }
    }
    else if(t2>t1&&t2>t3){
    cout<<t2<<",";
    if(t1>t3){
    cout<<t1<<", "<<t3<<endl;
    }else{
    cout<<t3<<", "<<t1<<endl;
    }
    }
    else if(t3>t1&&t3>t2){
    cout<<t3<<",";
    if(t1>t2){
    cout<<t1<<", "<<t2<<endl;
    }else{
    cout<<t2<<", "<<t1<<endl;
    }
    }                                                   
    //Exit Right Here
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
