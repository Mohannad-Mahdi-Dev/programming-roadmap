#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to ask the user to enter: • Number1
    • Number2
    Then print the two numbers , then Swap the two numbers and print them
    Example Inputs:
    10
    20
    Outputs
    10
    20
    20
    10
*/
int main(){

    int num1, num2 ;
    
    cout<< "Please Enter The Number1 :" <<endl;
    cin >> num1 ;
    
    cout<< "Please Enter The Number2 :" <<endl;
    cin >> num2 ;

    cout << num1 <<endl;
    cout << num2 << "\n " <<endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << num1 <<endl;
    cout << num2 <<endl;
}