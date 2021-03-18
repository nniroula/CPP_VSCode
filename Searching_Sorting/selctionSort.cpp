#include<iostream>
using namespace std;
// This program takes an array and applies selection sort to it to sort elements in ascending order.
// selection sort finds the smallest value and puts in index 0, finds next smallest value-puts in index 1 and so on.
// p 475
// function prototype
void selectionSort(int [], int);
void display(int [], int);

int main(){
    int size = 9;
    int array [] = {6, 9, 3, 5, 7, 2, 4, 1, 8};
    selectionSort(array, size);
    display(array, size);
    return 0;
}

void selectionSort(int array [], int size){
    //for(int i = 0; i < size; i++){
        //int smallestElement = array[i];
        int smallestElement = array[0];
        for(int i = 1; i< size; i++){
            // int smallestElement = array[i];
            if(array[i] < smallestElement){
                // array[0] = array[i];
                // array[i] = smallestElement;
                int temp = array[i];
                smallestElement = array[i];
                array[0] = smallestElement;
            }
    }
    //}
   

}
void display(int array [], int size){
    for( int i = 0; i< size; i++){
        cout<<array[i]<< ' ';
        
    }
    cout<< endl;
}