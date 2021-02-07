/*
Function prototype means a function declaration -> it is a function's header with semicolon at the end.
*/

#include<iostream>
using namespace std;
void myName();
int main(){
    cout<<" This is a main function before calling function myName\n";
    cout<<"Underneath is the output of a call to the function myName\n";
    myName();
    return 0;
}
void myName(){
    cout<<"Hello my name is Nabin Niroula"<<endl;
}

/*
This program is to pass an argument to a function that is called inside a function main
*/
#include<iostream>
using namespace std;
void displayNum(int);
int main(){
    displayNum(1987);
    return 0;
}
void displayNum(int num){
    cout<< "I recied a value of "<<num<<endl;
}

/*
This program calls a function with multple parameters inside a function main.
*/
#include <iostream>
using namespace std;

int getSum(int, double, int);
int main(){
    int num1, num3;
    double num2;
    cout<<"Enter the three numbers in the order"<<endl;
    cin>>num1>>num2>>num3;
    getSum(num1, num2, num3);
    return 0;
}
int getSum(int num1, double num2, int num3){
    //return num1 + num2 + num3;  // does help display sum on the screen
    cout<<num1 + num2 + num3<<endl;
}