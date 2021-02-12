#include<iostream>
#include<cstdlib> // this header file is need to use exit function
using namespace std;

void callMe();
int main(){
    // call a function
    cout<<"Hey Iam messaging before termination\n";
    callMe();
    cout<<"I will not be executed"<<endl;
    return 0;
}
void callMe(){
    cout<<"I just started learning programming\n";
    cout<<"Below is the call for the exit() function\n";
    exit(0);
    cout<<"Hi do you see me invoked, you will never-exit prevents me"<<endl;
}