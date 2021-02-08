/*
This program uses static local variable to remmenber what is stored in a local variable between
each function local b/c once the function returns, the local variable is destroyed.
*/
#include <iostream>
using namespace std;

//function prototype
int findNumber();
int main(){
    //call the function
    for(int i = 0; i< 5; i++){
        findNumber();
    }
    return 0;
}
int findNumber(){
    static int num;
    cout<<"The number is "<<num<<endl;
    num++;
}