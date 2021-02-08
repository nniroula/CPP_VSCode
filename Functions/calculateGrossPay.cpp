/*
This program will calculate gross pay-includes overtime pay.
It uses 3 functions, main, one to calculate base pay, and other to calculate overtime pay.
*/
#include <iostream>
using namespace std;

// function prototypes or also called function declarations
double basePay(int);
double overtimePay();

int extraHours;
int pay_Rate = 20; //15 dollars per hour

int main(){
    // call functions
    int hours;
    cout<<"Please enter a number of hours worked\n";
    cin>>hours;

    double grossPay;
    grossPay = basePay(hours) + overtimePay();
    cout<<"Your gross pay is "<<grossPay<<endl;
    return 0;
}
double basePay(int hr){
    double pay;
    if(hr <= 40){
        pay = hr * pay_Rate;
    }else {
        extraHours = hr - 40;
        pay = 40*pay_Rate;
    }
    return pay;
}
double overtimePay(){
    return extraHours * (pay_Rate * 1.5);
}