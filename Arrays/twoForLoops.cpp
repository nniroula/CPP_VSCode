/*
This program uses 2 for loops, one for getting users input and one for displaying those inputs
*/
#include<iostream>
using namespace std;
int main(){
    // create an array
    int numbers[4];
    // first for loop for user input
    for(int i = 0; i< 4; i++){
        cout<<"Enter your lovely number ";
        cout<<i + 1<<": ";
        cin>>numbers[i];
    }
    // second for loop for displaying output
    cout<<"The numbers you entered are: ";
    for(int i = 0; i< 4; i++){
        cout<<numbers[i]<<" "; //<<endl;
    }
    return 0;
}