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