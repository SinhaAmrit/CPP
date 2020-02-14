/*
* @author : Amrit Sinha
* Date : February 13,2020
* GitHub : SinhaAmrit
* Facebook : /codiizone
* Instagram : @codiizone
* website : https://codiizone.blogspot.com/
* C++ Program To Accept Two Numbers And Display Their Sum
*/
#include<iostream>
using namespace std;
int main()
{
    //variable declaration
    int num1, num2, result;
    
    //take user input
    cout << "Enter first Number : ";
    cin >> num1;

    cout << "\nEnter second Number : ";
    cin >> num2;

    //to add two number
    result = num1 + num2;

    //display addition
    cout << "\nAddition is : " << result;

    return 0;
}
