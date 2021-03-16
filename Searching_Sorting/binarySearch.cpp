#include<iostream>
using namespace std;

bool binarySearch(int [], int, int);
int size = 10;

int main(){
    int result;
    int arr[] = {1, 2, 4, 2, 3, 1, 5, 6};
    int searchValue = 5;
    result = binarySearch(arr, size, searchValue);
    if(result == -1){
        cout<<"The number is not found"<<endl;
    }else{
        cout<<"The value is at index"<<result<<endl;
    }
    return 0;
}

bool binarySearch(int arr[], int size, int searchValue){
    int firstIndex = 0;
    int lastIndex = size - 1;
    int middleIndex;
    int result = -1;
    
    for (int i = 0; i< size; i++){
        middleIndex = (firstIndex + lastIndex)/2;
        if(arr[middleIndex] == searchValue){
            result = middleIndex;
        }else if(arr[middleIndex] < searchValue){
            firstIndex = middleIndex + 1;
        }else{
            lastIndex = middleIndex - 1;
        }
        
    }
    cout<<middleIndex<<endl;
    return result;

}