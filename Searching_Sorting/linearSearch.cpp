#include<iostream>
using namespace std;
// This program will use a linear serach
bool searchNumber(int [], int, int);
int size = 5;

int main(){
    bool result = false;
    int array[size] = {1, 2, 3, 4, 5};
    int value = 5;

    result = searchNumber(array, size, value );
    if (result == false){
        cout<<"No Number was found"<<endl;
    }else{
        cout<<"yay! there you go, the number was found"<<endl;
    }

    return 0;
}
bool searchNumber(int array[], int size, int value){
    int firstNumber;
    bool result;
    firstNumber = array[size- 1];
    for(int i = 0; i< size; i++){
        if (array[i] == firstNumber){
            result = true;
        }else{
            result = false;
        }
    }
    return result;
}