/* This program calls a function in the function main. That called function has another 
function iniside it.
*/
#include<iostream>
using namespace std;

void whatIsYourName(){
    cout<<"Hello, My name is Nabin Niroula\n";
}
void myInfo(){
    whatIsYourName();
    cout<<"I am a computer science student at CU Denver"<<endl;
}
int main(){
    myInfo();
    return 0;
}