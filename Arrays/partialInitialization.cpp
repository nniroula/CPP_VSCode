/*
This array partially initializes an array, and prints to see how the output looks like
*/
#include<iostream>
using namespace std;
int main(){
    const int num = 6;
    int arr[num] = {1, 2, 3};
    for(int i = 0; i< num; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}