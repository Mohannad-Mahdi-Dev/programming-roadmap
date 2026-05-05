#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to ask the user to enter: • Number
    Then Print the Number^2 , Number^3 , Number^4
    Example Inputs:
    3
    Outputs ->
    9
    27
    81
*/
int main(){

    int num ;

    cout << "Please Enter The Number 3 : " <<endl;
    cin >> num;

    cout << " Number^2 = "<< num * num <<endl; // 9
    cout << " Number^3 = "<< num * num * num <<endl; // 27
    cout << " Number^4 = "<< num * num * num * num <<endl; // 81

    
}