/*
This program used pass by value.
*/
#include<iostream>
using namespace std;

int add(int, int);
int main(){
    
    int a = 5;
    int b = 15;
    cout<<"The value of a is: "<<a<<endl;
    //add(a, b);
    cout<<"The sum is: "<<add(a, b)<<endl;
     cout<<"The value of a is: "<<a<<endl;  // there is no affect in value of a when x is added 5.
    return 0;                               // This is called pass by value.
}
int add(int x, int y){
    // let us some changes to x
    x += 5;
    return x + y;
}