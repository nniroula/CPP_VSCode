#include<iostream>
#include<vector>
using namespace std;
int main(){
    // initialize a vector
    vector <int> numbers; // a vector of ints called numbers is defined. It is empty
    vector <double> prices(10); // a vector of doubles named prices is defined, Its starting size is 10.
    vector <string> names(12, "nabin"); // a vector of string objects is defined. Its starting size is 12, and each element is initialized with "nabin"
    //vector <char> places(names); // this does not work as string and char are differen data types. Following works
    vector <string> places(names); // a vector of strings called places is defined, where names is a vecor of sting already defined.

    return 0;
}