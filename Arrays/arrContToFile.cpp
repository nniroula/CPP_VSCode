/*
This program puts some values into an array, and then puts those values into a file
*/
#include <iostream>
#include<fstream>
using namespace std;
int main(){
    // create an array
    int arr[3];
    for(int i = 0; i< 3; i++){
        cout<<"please enter an integer: ";
        cin>>arr[i];
        //cout<<arr[i]<<endl;
    }

    // to check if the values are put into an array correctly.
     //cout<<"Your inputs are: ";
    for(int count = 0; count<3; count++){
         //cout<<arr[count]<<" ";
    }
    //cout<<endl;

    /* since values are in array, we need output file*/
    ofstream fileOutput;
    fileOutput.open("writeArrayContent.txt");
    for(int i = 0; i< 3; i++){
        fileOutput<< arr[i]<<endl;
    }
    fileOutput.close();
    return 0;
}