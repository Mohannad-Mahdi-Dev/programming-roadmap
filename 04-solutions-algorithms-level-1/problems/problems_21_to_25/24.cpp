/*
Problem:
    Write a program to ask the user to enter :
    • Age
    If age is between 18 and 45 print “Valid Age” otherwise print
    “Invalid Age”
*/
#include <iostream>
using namespace std ;

int ReadAge()
{
    int Age ;
    cout << "Please Enter Your Age ? \n";
    cin >> Age ;

    return Age ;
}

bool ValidateNumberInRange(int Number , int From , int To )
{
    return (Number >= From && Number <= To ) ;
}

void PrintResult(int Age)
{
    if(ValidateNumberInRange(Age , 18 , 45))
    cout << Age << "is a Valid Age \n";
    else 
    cout << Age << " Invalid Age \n";
}

int main(){
    
    PrintResult((ReadAge()));

    return 0; 
}