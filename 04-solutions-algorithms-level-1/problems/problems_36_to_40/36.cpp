/*
    Problem:
    Write a program to ask the user to enter:
    • Number1
    • Number 2
    • OperationType
    Then perform the calculation according to the Operation Type as follows:
    • “+” : add the two numbers.
    • “-” : Subtract the two numbers.
    • “*” : Multiply the two numbers.
    • “/” : Divide the two numbers.
    Example Inputs:
    10
    20
    *
    Outputs =>
    200
*/
#include <iostream>
using namespace std ;

enum enOperationType { Adtion = '+' , Subtract = '-' , Multiplcation = '*' , Divition = '/' };

//Genaric Function 
float ReadNumber(string Message)
{
    int Number = 0 ; 
    
    cout << Message <<endl;
    cin >> Number ;

    return Number ;
}

enOperationType ReadOperationType()
{
    char OT = '+' ;

    cout << "Please Enter Operation Type ( + , - , * , /) ? " << endl;
    cin >> OT ;

    return  (enOperationType) OT ;    
}

int CalculateNumbers(float Number1 , float Number2 , enOperationType OP)
{
    switch (OP)
    {
    case enOperationType::Adtion :
        return (Number1 + Number2);
    case enOperationType::Subtract : 
        return (Number1 - Number2);
    case enOperationType::Multiplcation : 
        return (Number1 * Number2);
    case enOperationType::Divition : 
        return (Number1 / Number2);
    default:
        return Number1 + Number2;
    }
}

int main(){
    
    float  Number1 = ReadNumber("Enter the First Number ? ");
    float  Number2 = ReadNumber("Enter the Second Number ? ");

    enOperationType OperationType = ReadOperationType();

    cout <<endl <<" Result = " << CalculateNumbers(Number1 , Number2 , OperationType);
    
    return 0 ;
}