/*
this program uses range-based for loop;
*/
#include<iostream>
using namespace std;
int main(){
    // create an array
    int numbers[] = {1, 3, 5, 7};
    //range based for loop
     cout<<"The values are: ";
    for(int value: numbers){   
        cout<<value<<" "; 
    }
    cout<<endl;

    string names[] = {"Nabin", "Nila", "Poonam", "Prinsha"};
    cout<<"And the names are: ";
    for(string nam: names){
        cout<<nam<<" ";
    }
    cout<<endl;
    return 0;
}