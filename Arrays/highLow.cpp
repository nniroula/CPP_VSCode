/*
This program calculates highest, lowest, and average values in an array.
*/
#include<iostream>
using namespace std;
int main(){
    // delcare and initialize an array
    const int number = 6;
    int arrayNum[number] = {2, 4, 2, 8, 10, 12};
    int highest = 0;
    int lowest = arrayNum[0];
    double average = 0.0;
    double sum = 0;
    for(int i = 0; i < number; i++){
        if(arrayNum[i] > highest){
            highest = arrayNum[i];
        }
        if(arrayNum[i]< lowest){
            lowest = arrayNum[i];
        }
        sum = sum + arrayNum[i];
    }
    average = sum/number;
    cout<<"The higest is "<<highest<<endl;
    cout<<"The lowest is "<<lowest<<endl;
    cout<<"The average is "<<average<<endl;

    return 0;
}