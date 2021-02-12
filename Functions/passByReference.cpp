/*
Write a function that has main function, takes user input in one function and another function uses
reference parameter; pass by reference.
*/
#include<iostream>
using namespace std;
int sumAll(int &, int &);
int getUserInput(int &, int &);
int main(){
    int x, y; // these are called original arguments.
    getUserInput(x, y);
    cout<<"The sum is "<< sumAll(x, y)<<endl;
    return 0;
}
int sumAll(int &a, int &b){
    return a + b;
}
int getUserInput(int &num1, int &num2){
     cout<<"Please enter both numbers: ";
    cin>>num1>>num2;
    return num1, num2;
}