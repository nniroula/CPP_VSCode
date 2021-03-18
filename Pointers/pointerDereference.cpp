#include<iostream>
using namespace std;

// this program uses pointer, dereferences it and modifies the value of the variable that the pointer is pointing to.
int main(){
    int x = 34;
    int *pointer = nullptr; // initialize the pointer variable
    pointer = &x;
    cout<<"The value in pointer is "<<pointer<<endl;
    //dereference the pointer variable.
    // Dereferencing with * means like you are directly working with value in variable x
    cout<<"The value after dereferencig a pointer is "<< *pointer<<endl;  // *pointer holds the value of x
    // When a dereferenced variable alters the value, it also automatically changes the value of the variable the pointer is pointing to
    *pointer = 1987;
    cout<<"The new value in the dereference variable is "<< *pointer<<endl;
    cout<<"The value of x after dereferencing it with indirection operator * is "<<x<<endl;

    return 0;
}