/*
This program initializes an arry and displays ascii values for characters.
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    // iniitalize an array
    const int values = 4;
    char letters[values] = {'A', 'B', 'c', 'd'};
    cout<<"Characters \t"<<"ASCII Values\n";
    cout<<"........................."<<endl;
    for(int i = 0; i< values; i++){
        cout<<letters[i]<<"\t"<<"\t"<<static_cast<int>(letters[i])<<endl; // to convert letters[i] into int type.
    }
    return 0;
}
