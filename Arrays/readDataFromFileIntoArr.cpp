#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // read a file
    int counter = 0;
    ifstream fileInput;
    fileInput.open("numbers.txt");
    // declare an array to hold humbers from a file
    int arr[5];
        // to read and store a file element do this
        // to make sure that it does not read extra things beyound the end of the file
        while(counter < 5 && fileInput>>arr[counter]){
        counter++;
        }
    fileInput.close();
    for(int count = 0; count< 5; count++){
        cout<<arr[count]<<endl;
    }
    return 0;
}