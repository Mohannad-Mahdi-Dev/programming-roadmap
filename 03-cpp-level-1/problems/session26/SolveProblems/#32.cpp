#include <iostream>
#include <cmath>

using namespace std;
/*
    Problem:
    Write a program to ask the user to enter: • Number
    • M
    Then Print the Number^M
    Example Inputs:
    2
    4
    Outputs->
    16
*/
int main(){
    
    int num ;
    int M ;

    cout << "Please Enter The Number : " <<endl;
    cin >> num ;
    
    cout << "Please Enter The M : " <<endl;
    cin >> M ;
    
    cout << pow(num , M) <<endl;
    cout << round(pow(num , M));

    
}