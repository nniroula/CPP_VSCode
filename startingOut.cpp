// Programming challenges chapter 2

//1. Sum of Two Numbers
// Write a program that stores the integers 50 and 100 in variables, and stores the sum of 
// these two in a variable named total.
/*
#include<iostream>
using namespace std;
int main(){
    int variable1 = 50;
    int variable2 = 100;
    int sum;
    sum = variable1 + variable2;
    cout<<sum<<endl;
    return 0;
}
*/

//2. Sales Prediction
/*
The East Coast sales division of a company generates 58 percent of total sales. Based on that
 percentage, write a program that will predict how much the East Coast division will 
 generate if the company has $8.6 million in sales this year.
 */
/*
#include<iostream>
using namespace std;
int main(){
    double percentSales = 0.5;
    double generatedValue = percentSales * 8.6;
    cout<<"Based on the given value, it generates: $"<<generatedValue<<endl;
    return 0;
}
*/
/*
3. Sales Tax
Write a program that will compute the total sales tax on a $95 purchase. Assume the state 
sales tax is 4 percent and the county sales tax is 2 percent.
*/
/*
#include<iostream>
using namespace std;
int main(){
    double stateTax = 0.04;
    double countyTax = 0.02;
    double amount = 95;
    double totalSalesTax;
    totalSalesTax = (.04*amount) + (.02* amount);
    cout<<"Total sales tax is: $"<<totalSalesTax<<endl;
    return 0;
}
*/

/*
4. Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with a 
$88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 20 
percent of the total after adding the tax. Display the meal cost, tax amount, tip amount, 
and total bill on the screen.
*/
/*
#include<iostream>
using namespace std;
int main(){
    double mealCharge = 88.67;
    double tax = 6.75;
    double actualTax = 0.0675*mealCharge;
    double tip;
    double totalAmountBeforeTips = mealCharge + actualTax;
    cout<<totalAmountBeforeTips<<endl;
    tip = 0.2*totalAmountBeforeTips;
    double finalCost = totalAmountBeforeTips + tip;
    cout<<"meal cost: $"<<mealCharge<<" Tax: $"<<actualTax<<" tip amount: $"<<tip<<" total bill: $"<<finalCost<<endl;

    return 0;
}
*/
//5. Average of Values
/*
To get the average of a series of values, you add the values up and then divide the sum by 
the number of values. Write a program that stores the following values in five different 
variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of these five 
variables and store the result in a separate variable named sum. Then, the program should 
divide the sum variable by 5 to get the average. Display the average on the screen.
*/
/*
#include<iostream>
using namespace std;
int main(){
    int a = 28, b = 32, c = 37, d = 24, e = 33;
    int sum;
    sum = a+b+c+d+e;
    double average = sum/5;
    cout<<"Average is $"<<average<<endl;

    return 0;
}
*/
//6
/*
#include<iostream>
using namespace std;
int main(){
    double payAmount = 2200;
    double payPeriod = 26;
    double annualPay = payAmount*payPeriod;
    cout<<annualPay<<endl;

    return 0;
}
*/

//7. Ocean Levels
/*
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a 
program that displays:
• The number of millimeters higher than the current level that the ocean’s level will be 
in 5 years
*/
/*
#include <iostream>
using namespace std;
int main(){
    double currentRising = 1.5;
    double inFiveYears = currentRising*5 - currentRising;
    cout<<"In 5 years, it will be "<<inFiveYears<< " millimeters."<<endl;

    return 0;
}
*/

//8. Total Purchase
/*
A customer in a store is purchasing five items. The prices of the five items are
Price of item 1 = $15.95 Price of item 2 = $24.95 Price of item 3 = $6.95 
Price of item 4 = $12.95 Price of item 5 = $3.95
Write a program that holds the prices of the five items in five variables. Display each 
item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the 
sales tax is 7%.
*/
/*
#include<iostream>
using namespace std;
int main(){
    double priceItem1 = 15.95, priceItem2 = 24.95, priceItem3 = 6.95, priceItem4 = 12.95,\
    priceItem5 = 3.95;
    cout<<"The price of each item is as follows: \n";
    cout<<"Item1: $"<<priceItem1<<" Item2: $"<<priceItem2<<" Item3: $"<<priceItem3<<" Item4: $"\
    <<priceItem4<<" Item5: $"<<priceItem5<<endl;
 
    double subTotal = priceItem1 + priceItem2 + priceItem3 + priceItem4 + priceItem5;
    double tax = 0.07;
    double actualTax = tax*subTotal;
    double totalCost = actualTax + subTotal;

    cout<<"the subtotal of the sale is $"<<subTotal<<endl;
    cout<<"the amount of sales tax is $"<<actualTax<<endl;
    cout<<"The total cost of the purchase is $"<<totalCost<<endl;

    return 0;
}
*/

//15  Triangle Pattern
/*
Write a program that displays the following pattern on the screen:
         *
        ***
       *****
      *******
*/
/*
// This does not work now, get it to work properly.
#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<= 7; i+2){
        cout<<"*"<<endl;
    }
    return 0;
}
*/
/* type_cast<data type>(value) */
// Convert a character to its ASCII code 
/*
#include<iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter your character"<<endl;
    cin>>letter;
    cout<<static_cast<int>(letter);
    return 0;
}
*/
/*
#include<iostream>
#include <iomanip> // required for setw()
using namespace std;
int main(){
    //int value = 23.3314;
    int value = 23;
    // setw(number) means field width; setw right justifies.
    cout << "(" << setw(5) << value << ")" << endl;
    // setprecision fixed
    cout << setprecision(2) << fixed<<endl;;
    cout << setw(3)<<value<<endl; 

    // showpoint precision --> To print out trailing zeros in floating point numbers.
    double value2 = 1.2;
    cout<< setprecision(6)<<showpoint<<value2<<endl; // Due to showpoint, it means 6 digits after decimal
    // left manipulatro --> To left justify the output
    double value3 = 123.18;
    cout<<setw(6)<<value3<<endl;
    cout<<left<<setw(10)<<value3<<endl;
   
    return 0;
}
// This will cause the following output:
// ( 23) 3 blank spaces are printed before it since 23 occupies only 2 character spaces.
 //Notice that the number occupies the last two positions in the field. Since the number did not use 
// the entire field, cout filled the extra 3 positions with blank spaces. Because the number appears on the right 
// side of the field with blank spaces “padding” it in front, it is said to be right-justified.
/*
value = 18397;
cout << setw(2) << value;
In cases like this, cout will print the entire number. setw only specifies the minimum num- ber of positions in 
the print field. Any number larger than the minimum will cause cout to override the setw value. You can use it with
data type, eg, string.
*/

// 3.8 Working with Character and String objects
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    // cin object only reads a word before a white space in string input if an input has more than one word.
    // This is a problem and to get around this, Use getline(cin, variable) function.
    string yourName;
    string city;

    /*
    This code does not give correct output
    cout<<"Please enter your lovely name: "<< endl;
    cin>>yourName; // If name is entered Nabin Keerun, cin accepts only Nabin and keerun goes to city.
    cout<< "Please enter your beautiful city's name: "<<endl;
    cin>>city;
    cout<<yourName<<city<<endl;
  
    // above does not work as expected. So, use getline(cin, variable) method.
    cout<<"Please enter your lovely name: "<< endl;
    //cin>>yourName; // instead do the following:
    getline(cin, yourName);

    cout << "Please enter your city: "<<endl;
    getline(cin, city);

    cout<<"Hi "<<yourName<<", city you live in is "<<city<<endl;

    return 0;
}
*/
//3.9
/* Random number generator */
/* Use rand() function, srand() function, and time() fucntion to generate radnom numbers*/
/*
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    // get the system time
    unsigned seed = time(0);
    //seed the random number generator
    srand(seed);
    //display random numbers
    cout<<rand()<<endl;

    return 0;
}*/

// CHAPTER 4 characters and strings

/* comparing two string objects; means to compare each corresponding character based on its ASCII value */
/*
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    string str1 = "ABC";    // NOTE: VSCODE does not support '' for string literals. use "" for it.
    string str2 = "XYZ";

    if(str1 < str2){
        cout<<"String1 is less than string2"<<endl;
    }
    return 0;
}
*/

/* switch statement for menu systems.
    Use the switch statemnents to determine the item selected from the menu, and calculate the associated cost.
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double firstClassTicket = 4.5,
            secondClassTicket = 2.2,
            thirdClassTicket = 1.5;
    int choices;
    //dislay choices
    cout<<"\t MENU CHOICES"<<endl;
    cout<<"1. firstClassTicket \n"
        <<"2. secondClassTicket \n"
        <<"3. thirdClassTicket"<<endl;
    cout<<"Please choose one option from above"<<endl;
    cin>>choices;
    //cout<<choices<<"\n";
    cout<<fixed<<showpoint<<setprecision(3);
    switch(choices){  // if choices is 1, then case should be 1 in order for the case 1 to work
        int qnty;
        case 1:
            cout<<"How many you want: ";
            cin>>qnty;
            cout<<"your total cost is $"
                <<qnty * firstClassTicket<<endl;
                break;                          // NOTE: if you do not use break, default also gets executed.
        case 2:
            cout<<"How many you want: ";
            cin>>qnty;
            cout<<"Your total cost is $"<<qnty * secondClassTicket<<endl;
            break;
        case 3:
            cout<<"How many you want: ";
            cin>>qnty;
            cout<<"Your total cost is $"<<qnty * thirdClassTicket<<endl;
            break;
        
        default:
            cout<<"Your selection was invalid"<<endl;
    }
    return 0;
}
*/

/* Postfix and prefix modes */
/*
#include<iostream>
using namespace std;
int main(){
    int value = 4;
    //postfix is value++
    cout<<value++<<endl; // this does not print 5, but it prints 4, and then increments value by 1.

    // prefix means ++value
    cout<<++value<<endl;  // this adds 1 to value and prints 5.
    return 0;
}
*/

// The while loop for input validation
/*
#include<iostream>
using namespace std;
int main(){
    int valueStore;
    cout<<"Please enter a number in the range of 1 - 100"<<endl;
    cin>>valueStore;
    while(valueStore <= 0 || valueStore >= 100){
        cout<<"That is invalid input"<<endl;
        cout<<"Please entter a valid number between 1 - 100"<<endl;
        cin>>valueStore;
    }
    cout<<"You entered "<<valueStore<<endl;
    return 0;
}
*/ 

/* do while loop */
/* This program will ask user to input 3 test scores and calculates average. It then will ask user if he/she wants
    to try a new set of test scores
*/
/*
#include<iostream>
using namespace std;
int main(){
    double score1, score2, score3, average;
    char nextTry;
    do{
        cout<<"Plese enter 3 test scores"<<endl;
        cin>>score1>>score2>>score3;
        average = (score1 + score2 + score3)/3;
        cout<<"Your average score is "<<average<<endl;
        cout<<"Do you want to try another set of tests? (Y/N)"<<endl;
        cin>>nextTry;
    }while(nextTry == 'y' || nextTry == 'Y');
    return 0;
}
*/

/*
    File stream fstream, ifstream, and ofstream.
    This program writings data to a file
*/
/* 
#include<iostream>
//#include<ifstream>
//#include<ofstream>
#include<fstream>
using namespace std;
int main(){
    // create or open file 
    ofstream outputFile;
    outputFile.open("first.txt");
    // write to or read from that file
    outputFile<<"My name is Nabin Niroula"<<endl;
    outputFile<<"I am learning to code myself\n";
    //close a file
    outputFile.close();
    // write this code to test that your program is executing fine
    cout<<"Done!"<<endl; // this prints output on the screen telling that program is fine.
    return 0;
}
*/
/*
This program gets user's input and writes user's input to a file
*/
/*
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // get user's input
    cout<<"pelase enter any 3 numbers you like the most"<<endl;
    double num1, num2, num3;
    cin>>num1>>num2>>num3;
    //cout<<num1<<" "<< num2<<" "<< num3<<endl; // to check it is working fine
    // create an output file
    ofstream outputFile;
    outputFile.open("second.txt");
    //write data to a file
    outputFile<<num1<<" "<<num2<<" "<<num3<<endl;
    //close that file
    outputFile.close();
    //cout to verfity that the program executes nicely, if you do not have any cout before.
    //cout<<"DONE!"<<endl;
    return 0;
}
*/
/*
// Read data from a file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    // setup to read a file
    string fileReadIn;
    ifstream fileInput;
    fileInput.open("second.txt"); // read a file named second.txt
     
    //store the read in information somewhere, this could be variable or another file
   // To read Nabin Niroula Aurora Colorado --> 4 couts and fileInput.
    fileInput>>fileReadIn;
    cout<<fileReadIn<<endl;

    fileInput>>fileReadIn;
    cout<<fileReadIn<<endl;

    fileInput>>fileReadIn;
    cout<<fileReadIn<<endl;

    fileInput>>fileReadIn;
    cout<<fileReadIn<<endl;
    cout<<"DONE!\n";
    fileInput.close();

    return 0;
}
*/
/*
    Use the loop to process file
    This program gets input from a user and processes it to calcualte total sales, and
    writes data to a file.
*/
/*
#include<iostream>
#include<fstream>

using namespace std;
int main(){
    // create file to write data to it
    ofstream outPutFile;
    outPutFile.open("sales.txt");
    // get sales for each and write that data to output file, ask number of days of sales
    int numberOfDays;
    cout<<"Please enter a number of days for the sales record"<<endl;
    cin>>numberOfDays;
    // create a for loop to retain the sales record
    for(int i = 1; i<=numberOfDays; i++){
        cout<<"please enter the total amount of the sales for the day"<<" "<<i<<endl;
        double salesOfTheDay;
        cin>>salesOfTheDay;
        outPutFile<<" "<<salesOfTheDay<<endl; // the space here displays data on a new line
    }
    //close the file
    outPutFile.close();

    return 0;
}
*/

/*
    Write a program to read files from second.txt, in which program detectst the end of the file.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string fileValues;
    // read data from the file second.txt
    ifstream inPutFile;
    inPutFile.open("second.txt");
    // create output file
    ofstream outPutFile;
    outPutFile.open("outPutSecond.txt");

    while(inPutFile>>fileValues){ // To detect the end of the file
        //write that data from second.txt file to another file
        outPutFile<<fileValues<<endl;
    }
    inPutFile.close();
    outPutFile.close();

    return 0;
}






