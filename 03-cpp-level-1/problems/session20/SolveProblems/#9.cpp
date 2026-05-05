#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to ask the user to enter: • Number1, Number2, Number3
    Then Print the Sum of entered numbers
    Example Inputs:
    10
    20
    30
    Outputs
    60
*/
int main(){

    int num1 , num2, num3 ;

    cout << "Please Enter The first Number :" <<endl;
    cin >> num1 ;
    
    cout << "Please Enter The sconed Number :" <<endl;
    cin >> num2 ;
    
    cout << "Please Enter The Third Number :" <<endl;
    cin >> num3 ;

    int sum = num1 + num2 + num3;

    cout << "The Sum Numbers = " << sum <<endl;


}