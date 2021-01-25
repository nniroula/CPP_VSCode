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




