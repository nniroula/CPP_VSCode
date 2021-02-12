#include<iostream>
using namespace std;
int main(){
    //int arrayNum = [6];// does not work
    int arrayNum[6];
    cout<<"Please enter six numbers to store in this array: ";
    cin>> arrayNum[0]
        >>arrayNum[1]
        >>arrayNum[2]
        >>arrayNum[3]
        >>arrayNum[4]
        >>arrayNum[5];
    cout<<"The numbers you entered are: ";
    cout<<arrayNum[0]
        <<' '<< arrayNum[1]
        <<' '<< arrayNum[2]
        <<' '<< arrayNum[3]
        <<' '<< arrayNum[4]
        <<' '<< arrayNum[5]
        <<endl;
    return 0;
}