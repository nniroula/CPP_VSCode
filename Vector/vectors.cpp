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

/*
This program stores, in vector, the hours worked by employees and displays those hours
*/
    const int number_Of_Employees = 5;
    vector<int> hours(number_Of_Employees);
    vector <double> payRates(number_Of_Employees);
    int index = 0;
    for(int i = 0; i< number_Of_Employees; i++){
        cout<<"Please enter the hours worked by each employee "
            <<(i + 1)<<": "; 
        cin>>hours[i];
    }
    cout<<"The hours are: ";
    for(int index = 0; index < number_Of_Employees; index++){
        cout<<hours[index]<<" ";
    }
    cout<<endl;

    return 0;
}