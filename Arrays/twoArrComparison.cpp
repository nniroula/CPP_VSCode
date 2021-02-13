#include<iostream>
using namespace std;
int main(){
    // declare two arrays and initialize
    const int size = 3;
    int arr1[size] = {1, 2, 3};
    int arr2[size] = {1, 0, 3};
    // declare a boolean varibale to hold bool value
    bool areEqual = true;
    // create an accumulator variable 
    int count = 0;
    while(count < size){
        if(arr1[count] != arr2[count]){
            areEqual = false;   
        }
        count++;  
    }
    if(areEqual){
        cout<<"they are equal "<<endl;
    }else{
        cout<<"They are not equal\n";
    }
    return 0;
}