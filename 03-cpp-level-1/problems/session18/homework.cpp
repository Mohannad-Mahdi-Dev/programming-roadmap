#include <iostream>
using namespace std;


int main(){

//Write programs to do the following: was user
//Question 1
/*
    Name : Mohannad mahdi.
    Age : 20 years.
    City : sana'a
    Country : Yemen.
    Monthly Salary : 10000.
    Yearly Salary : 12000.
    Gender: Male.
    Married : 1
*/
//Solution

    string Name ;
    int Age ;
    string City ;
    string Country ;
    float MonthlySalary ;
    float YearlySalary = MonthlySalary * 12;
    char Gender  ;
    bool Married ;
    
    cout<< "Please Enter a Name: " <<endl;
    cin >> Name;
    cout<< "Please Enter a City: " <<endl;
    cin >> City;
    cout<< "Please Enter a Country: " <<endl;
    cin >> Country;
    cout<< "Please Enter a Monthly Salary: " <<endl;
    cin >> MonthlySalary;
    cout<< "Please Enter a Yearly Salary: " <<endl;
    cin >> YearlySalary;
    cout<< "Please Enter a Gender: " <<endl;
    cin >> Gender ;
    cout<< "are you Married 1/0 : " <<endl;
    cin >> Married;
    cout << "**********************************************" <<endl;
    cout << "Name IS :" << Name <<"City IS :" << City <<"Country IS :" << Country <<"Monthly Salary IS :" << MonthlySalary <<"Yearly Salary IS :" << YearlySalary <<"Gender IS :" << Gender <<"Married IS :" << Married <<endl;
    cout << "**********************************************" <<endl;
//Question 2

    int num1 , num2 , num3 ;

    cout << "Please Enter a num1 :" <<endl;
    cin >> num1;
    cout << "Please Enter a num2 :" <<endl;
    cin >> num2;
    cout << "Please Enter a num3 :" <<endl;
    cin >> num3;

    cout << "Total : " << num1 + num2 + num3 <<endl;

//Question 3

    int myage ;
    cout << "Please Enter Your Age :" <<endl;
    cin >> myage;
    int Sum5toAge = myage +5  ;
    cout << "After 5 years you will be " << Sum5toAge << "Years old." << endl;
    
}