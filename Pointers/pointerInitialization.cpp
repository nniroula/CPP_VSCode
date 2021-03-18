#include<iostream>
using namespace std;

int main(){
    int x = 34;
    int *pointer = nullptr;
    pointer = &x; // because pointer only holds memory address, and &x is a memory address of x.
    cout<<"The pointer is pointing to "<<pointer<<endl;
}