#include<iostream>
using namespace std;
//function prototype
void bubbleSort(int [], int);
void display(int [], int);

int main(){
    //call a function
    //int result;
    int array[] = {9, 3, 5, 6, 2, 4, 8, 7, 1};
    int size = 9;
    bubbleSort(array, size);
    display(array, size);
    return 0;
}

void bubbleSort(int array[], int size){
    bool done;
    int temp;
    do{ 
        done = false;
        for(int i = 0; i < size; i++){
            if(array[i] > array[i + 1]){
                temp = array[i];
                array[i] = array[i + 1];
                array[i +1] = temp;
                done = true;
            }
        }
    }while(done); // while any element have been swapped, make done = false and continue looping, otherwise done swapping
}                   // if no two elements are swapped, then stop looping and is done sorting.

// create a function to display the sorted array
void display(int array[], int size){
    // int arr1[size] = {};
    for(int i = 0; i< size; i++){
        // cout<<array[i];
        // arr1[i] = array[i];
        cout<<array[i]<< ' ';
    
    }
    cout<<endl;
    // return arr1[size];
}