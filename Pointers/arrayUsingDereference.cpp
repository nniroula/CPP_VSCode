#include<iostream>
using namespace std;

// This program uses dereferencing to print out array elements
// Remember that array[index] is same as *(array + index). Eg *(array + 0), *(array + 1), and so on.
int main(){
    int size = 6;
    int array [size] = {1987, 1988, 2014, 1990, 1961, 1952};
    for(int i = 0; i<size; i++){
        cout<<*(array + i)<< " ";
    }
    cout<<endl;
    return 0;
}