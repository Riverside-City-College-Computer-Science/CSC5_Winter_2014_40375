/*
  David Ballantyne
  01/14/14
  purpose: to sort numbers by size
*/
//Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global constatns

//Functioning Prototypes

//Execution begins here
int main(int argc, char *argv[]){
    //declare variables
    unsigned short min,max,t1,t2,t3;
    float avg=0;
    
    //promt user
    cout<<"What is the first test score?\n";
    cin>>t1;
    min=max=t1;
    cout<<"What is the second test score?\n";
    cin>>t2;
    if(t2>max)max=t2;
    if(t2<min)min=t2;
    cout<<"What is the third test score?\n";
    cin>>t3;
    if(t3>max)max=t3;
    if(t3<min)min=t3;
    
    //Calculate average
    avg= (t1+t2+t3)/3;
    
    //output
    cout<<"The Max score is "<< max<<endl;
    cout<<"The Minimum score is "<<min<<endl;
    cout<<"And the total average of the three scores is "<<avg<<endl;
    if(t1>t2&& t1>t3){
               cout<<t1<<",";
               if (t2>t3){
                   cout<<t2<<","<<t3<<endl;
                  }else{
                   cout<<t3<<","<<t2<<endl;
                  }
               }
               else if (t2>t1&& t2>t3){
               cout<<t2<<",";
               if (t1>t3){
                   cout<<t1<<","<<t3<<endl;
               
                  }else{
                   cout<<t3<<","<<t1<<endl;
                   }
               }
               else if (t3>t1&& t3>t2){
               cout<<t3<<",";
               if (t3>t1){
                   cout<<t1<<","<<t2<<endl;
                  }else{
                   cout<<t2<<","<<t1<<endl;
                  }
               }
                        
    system("PAUSE");
    return EXIT_SUCCESS;
}
