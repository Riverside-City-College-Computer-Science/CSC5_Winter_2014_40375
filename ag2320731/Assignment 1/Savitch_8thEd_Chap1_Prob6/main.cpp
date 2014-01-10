/* 
 * File:   main.cpp
 * Author: Adam Grose
 * January 9th, 2014
 * Purpose: Output both sum and product
 */

//System Libraries
//By leaving a space between < and iostream you get the following error message
//main.cpp:9:21: fatal error:  iostream: No such file or directory

//By not including one of the < or > symbols using iostream you get the following errors
//main.cpp:11:10: error: #include expects "FILENAME" or <FILENAME>
//main.cpp:27:5: error: ‘cout’ was not declared in this scope
//main.cpp:28:5: error: ‘cin’ was not declared in this scope
//main.cpp:38:11: error: ‘endl’ was not declared in this scope
#include <iostream>
using namespace std;

//No Global Constants or Variables

//No Function Prototypes

//Execution Begins Here
//When Excluding int from int main() the program ran fine

//When Excluding one of the () the following errors occurred
//main.cpp:26:10: warning: extended initializer lists only available with -std=c++11 or -std=gnu++11 [enabled by default]
//main.cpp:28:5: error: expected primary-expression before ‘int’
//main.cpp:28:5: error: expected ‘}’ before ‘int’
//main.cpp:28:5: error: expected ‘)’ before ‘int’
//main.cpp:34:5: error: ‘cout’ does not name a type
//main.cpp:35:5: error: ‘cin’ does not name a type
//main.cpp:42:5: error: ‘sum’ does not name a type
//main.cpp:50:5: error: ‘prdct’ does not name a type
//main.cpp:55:6: error: expected unqualified-id before ‘return’
//main.cpp:56:1: error: expected declaration before ‘}’ token

 int main(){
     
    //When misspelling identifiers like cout the following error occurs
    //main.cpp:47:5: error: ‘cou’ was not declared in this scope
     
    //When excluding a < when outputing the following error shows
    //main.cpp:57:9: error: no match for ‘operator<’ (operand types are ‘std::ostream {aka std::basic_ostream<char>}’ and ‘int’)
     
    //When excluding the end } the following error shows
    //main.cpp:75:14: error: expected ‘}’ at end of input
     
    //Declare Variables 
    int nmb1;//first integer
    int nmb2;//second integer
    int sum;//sum of first and second integers
    int prdct;// product of first and second integers
    
    //Input 2 integers
    cout<<"Input 2 whole integers and press enter.\n";
    cin>>nmb1>>nmb2;
    //Calculate and output the sum
    cout<<"The sum of ";
    cout<<nmb1;
    cout<<" and ";
    cout<<nmb2;
    cout<<" is \n";
    sum=nmb1+nmb2;
    cout<<sum<"\n";
    //Calculate and output the product
    cout<<endl<<"The product of ";
    cout<<nmb1;
    cout<<" and ";
    cout<<nmb2;
    cout<<" is \n";
    prdct=nmb1*nmb2;
    cout<<prdct<<endl;
    //Exit Stage Right
    
    
     return 0;
 }
