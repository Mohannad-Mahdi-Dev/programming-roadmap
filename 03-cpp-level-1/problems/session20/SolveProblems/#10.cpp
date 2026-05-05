#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to ask the user to enter: • Mark1, Mark2, Mark3
    Then Print the Average of entered Marks
    Example Inputs:
    90
    80
    70
    Outputs
    80
*/
int main(){

    int mark1, mark2, mark3 ;
    
    cout << "Please Enter The mark1 :" << endl;
    cin >> mark1;
    
    cout << "Please Enter The mark2 :" << endl;
    cin >> mark2;
    
    cout << "Please Enter The mark3 :" << endl;
    cin >> mark3;

    int Average = (mark1 + mark2 + mark3) / 3;

    cout << " The Average : " << Average << endl;

}