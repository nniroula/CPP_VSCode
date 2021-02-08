/*
This program uses static local variable to remmenber what is stored in a local variable between
each function local b/c once the function returns, the local variable is destroyed.
*/
#include <iostream>
using namespace std;

//function prototype
int findNumber(int);
int main(){
    //call the function 5 times
    // for(int i = 0; i< 5; i++){
    //     findNumber();
    // }
    int numbs;
    cout<<"Please enter your favorite number: "<<endl;
    cin>>numbs;
    findNumber(numbs);
    findNumber(numbs);
    findNumber(numbs);
    return 0;
}
int findNumber(int num){
    static int number = num;
    cout<<"The number is "<<number<<endl;
    return number++;
}