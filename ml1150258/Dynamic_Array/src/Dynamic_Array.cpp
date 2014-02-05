//============================================================================
// Name        : Dynamic_Array.cpp
// Author      : Dr. Mark E. Lehr
// Version     :
// Copyright   : Don't use my stuff
// Description : Hello World in C++, Ansi-style
//============================================================================

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
int *filAray(int);
void prntAry(int *,int,int);

int main() {
	//Declare variables and set seed
	int size;
	srand(static_cast<unsigned int>(time(0)));
	//Prompt for the size of the array
	cout<<"How big do you want the array?"<<endl;
	cin>>size;
	//Fill the array
	int *array=filAray(size);
	//Print the array
	prntAry(array,size,10);
	//Clean up and exit
	delete []array;
	return 0;
}

void prntAry(int *a,int n,int perLine){
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
		if(i%perLine==(perLine-1))cout<<endl;
	}
	cout<<endl;
}

int *filAray(int n){
	//Declare pointer and allocate memory
	int *array=new int[n];
	//Fill with 2 digit random numbers
	for(int i=0;i<n;i++){
		*(array+i)=rand()%90+10;
	}
	return array;
}



