#include<iostream>
using namespace std;
// this program shows the address of the variable and its size. 
int main(){
    int number = 34;
    double value = 5.0;
    short length = 4;
    float area = 4.0;
    // cout<<&number<<endl;
    cout<< "The size of the number is "<<sizeof(number)<< " ";
    cout<< "and its address is "<<&number<<endl;
    cout<<endl;

    cout<< "The size of the value is "<<sizeof(value)<< " ";
    cout<< "and its address is "<<&value<<endl;

    return 0;
}