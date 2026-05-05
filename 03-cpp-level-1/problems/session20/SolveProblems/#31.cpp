#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to ask the user to enter: • Number
    Then Print the Number^2 , Number^3 , Number^4
    Example Inputs:
    3
    Outputs
    9
    27
    81
*/
int main(){

    int Number ;

    cout << "Please Enter The Number : " <<endl;
    cin >> Number ;

    cout << Number* Number <<endl;
    cout << Number* Number * Number  <<endl;
    cout << Number* Number * Number * Number  <<endl;

}