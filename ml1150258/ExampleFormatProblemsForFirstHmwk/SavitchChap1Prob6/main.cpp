/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 10, 2012, 11:20 AM
 * Savitch Chap 1 Prob 6
 * Create and record errors
 * Using a previous program from
 * Display 8, problem 1, problem 4
 * 
 */

//main.cpp:12:21: fatal error:  iostream: No such file or directory
//compilation terminated.
//#include < iostream>
//main.cpp:15:10: error: #include expects "FILENAME" or <FILENAME>
///main.cpp: In function ‘int main(int, char**)’:
//main.cpp:25:5: error: ‘cout’ was not declared in this scope
//main.cpp:25:39: error: ‘endl’ was not declared in this scope
//main.cpp:26:5: error: ‘cin’ was not declared in this scope
//#include iostream>
#include <iostream>
using namespace std;

//No error detected without int infront of main
//main(int argc, char** argv) {
///usr/lib/gcc/i686-pc-cygwin/4.5.3/../../../libcygwin.a(libcmain.o): In function `main':
///usr/src/debug/cygwin-1.7.16-1/winsup/cygwin/lib/libcmain.c:39: undefined reference to `_WinMain@16'
//collect2: ld returned 1 exit status
//make[2]: *** [dist/Debug/Cygwin_4.x-Windows/savitchchap1prob6.exe] Error 1
//make[1]: *** [.build-conf] Error 2
//make: *** [.build-impl] Error 2
//int mein(int argc, char** argv) {
//main.cpp:33:10: error: expected initializer before ‘)’ token
//int main ) {
int main (){
    //Declare all variables
    int nPods;//number_of_pods, 
    int pPerPod;//Peas per pod
    int totPeas;//Total peas;
    //Input the knowns
    //main.cpp:41:5: error: ‘cut’ was not declared in this scope
    //cut<<"Input the number of pods"<<endl;
    cout<<"Input the number of pods"<<endl;
    cin>>nPods;
    cout<<"You input "<<nPods<<endl;
    cout<<"Input the number of peas per pod"<<endl;
    cin>>pPerPod;
    cout<<"You input "<<pPerPod<<endl;
    //Calculate how many peas total
    totPeas=nPods*pPerPod;
    cout<<"The total number of peas = "<<totPeas;
    //Exit
    return 0;
    //main.cpp:53:13: error: expected ‘}’ at end of input
}


