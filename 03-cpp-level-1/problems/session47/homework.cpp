// Solve the following problems of 
// Write Programs to do the following :
// #26, #27, #28, #29, #30, #32, #46.

#include<iostream>
using namespace std;

/*
    Notes: 
    #30 : factorial : don't validate positive numbers.
    #46 Use Char(i) function 
    After you solve all the problems , resolve them using functions & Procedures.
*/
// #26
/*
     Problem:
    Write a program to print numbers from 1 to N.
    Input
    10
    Outputs
    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
*/
// #27
/*  
    Problem:
    Write a program to print numbers from N to 1.
    Input
    10
    Outputs
    10
    9
    8
    7
    6
    5
    4
    3
    2
    1
*/
// #28
/*
    Problem:
    Write a program to Sum odd numbers from 1 to N.
    Input
    10
    Outputs
    25
*/
// #29
/*
    Problem:
    Write a program to Sum even numbers from 1 to N.
    Input
    10
    Outputs
    30
*/
// #30
/*
        Problem:
    Write a program to calculate factorial of N!
    Example: factorial of 6  6 x 5 x 4 x 3 x 2 x 1 = 720
    Note: User should only enter positive number, other wise reject it and ask to enter again
    Input
    6
    Outputs ->
    720
*/
// #32
/*
    Problem:
    Write a program to ask the user to enter:
    • Number
    • M
    Then Print the Number^M
    Example Inputs:
    2
    4
    Outputs
    16
*/
// #46
/*
    Problem:
    Write a program to print all letters from A to Z
    Outputs
    A
    B
    C
    .
    .
    .
    Z
*/

int main(){

// #26

    int Number ;

    cout << "Enter The Number : \n";
    cin >> Number ; 

    for(int i = 1 ; i<= Number ; i++){
        cout << i <<"\n" ; 
    }

//  #27

    int Numbers ;

    cout << "Enter The Number : \n";
    cin >> Numbers ; 

    for(int i = Numbers ; i >= 1 ; i--){
        cout << i <<"\n" ; 
    }

// #28

    int Num , Sum ;

    cout << "Enter The Sum  Odd Number From 1 to N \n";
    cin >> Num ;

    for (int i = 1 ; i <= Num  ; i++){

        if(i %2 == 1){

            Sum += i;
        }

        // cout << "Sum = "<< Sum <<"\n" ;
        
    }
    cout << "Sum Number = "<< Sum ;

// #29

     int Num2 , Sum2 ;

    cout << "Enter The Sum Even Number From 1 to N \n";
    cin >> Num2 ;

    for (int i = 1 ; i <= Num2  ; i++){

        if(i %2 == 0){

            Sum2 += i;
        }

        // cout << "Sum = "<< Sum <<"\n" ;
        
    }
    cout << "Sum Number = "<< Sum2 ;

// #30

    int Factorial = 1 ;
    int Number ; 

    cout << "Enter Number :" <<endl;
    cin >> Number ;    
    
    while(Number <= 0 ){
        cout << "The Factorial must be Positive Number! : "<<endl;
        cin >> Number;
    }

    for(int i = 1 ; i <= Number; i++){

        Factorial *= i ;
    }

    cout << "Factorial = "<< Factorial << endl;

// #32

    int number , M ; 
    long long Result = 1 ;

    cout << "Enter the Number^M :" <<endl;
    cin >> number >> M ;

    for (int i = 1; i <= M ; i++){

        Result *= number ;
    }
    cout << "Result = " << Result <<endl;


// #46

    for(char c = 'A' ; c <= 'Z' ; c++){
        cout << c << endl;
    }

}