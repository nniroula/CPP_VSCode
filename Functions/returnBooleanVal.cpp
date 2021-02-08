/*
This program will determine if a number is true or false
*/

#include <iostream>
using namespace std;
int isEvenOrOdd(int);
int main(){
    // call a function
    int val;
    cout<<"Enter a valid number: ";
    cin>>val;
    if(isEvenOrOdd(val)){
        cout<<"A number is even"<<endl;
    }else{
        cout<<"The number is odd\n";
    }
    return 0;
}
int isEvenOrOdd(int value){
    bool status;                // use bool for boolean variable
    if(value % 2 == 0){
        status = true;
    }else{
    status = false;
    }
    return status;
}