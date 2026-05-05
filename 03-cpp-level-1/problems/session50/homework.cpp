#include<iostream>
using namespace std;

// Write a Programs to do the following :
/*
    #26 , #27 , #28 , #29 , #30 , #32 , #37 , #46 , #50.

    Notes :

    #30 : Factorial : validate Positive numbers.
*/
/*
    #26

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

    #27

    Problem : 
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

    #28

    Problem:
    Write a program to Sum odd numbers from 1 to N.
    Input
    10
    Outputs
    25


    #29

    Problem:
    Write a program to Sum even numbers from 1 to N.
    Input
    10
    Outputs
    30


    #30

    Problem:
    Write a program to calculate factorial of N!
    Example: factorial of 6  6 x 5 x 4 x 3 x 2 x 1 = 720
    Note: User should only enter positive number, other wise reject it and ask to enter again
    Input
    6
    Outputs
    720


    #32

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


    #37

    Problem:
    Write a program to read numbers from user and sum them, keep reading until the user enters -99 then print
    the Sum on screen.
    Input
    10
    20
    30
    40
    -99
    Outputs
    100

    #46

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


    #50

    Problem:
    Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the balance
    to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
    Only allow user to enter the PIN 3 times, if fails, print “Card is locked!”
    Assume User Balance is 7500.
    Input
    1234
    5151
    Outputs
    Your Balance is: 7500
    Wrong PIN
*/

int main(){

//#26

    int number ;

    cout << "plase Enter The number : \n";
    cin>> number ;
    
    cout << "\n";

    for(int i = 1 ; i <= number ; i++){

        cout << i <<"\n";
    }

//#27

    int Number ; 
    cout << "Enter The Number : \n";
    cin>> Number ;

    cout << "\n";
    
    for(int num = Number ; num >= 1  ; num --)
    {
        cout << num << "\n";
    }

//#28

    int num = 10 ;

    cout << " Enter The Number Sum the Odd Number :\n";
    cin >> num;

    int sum = 0 ;
     
    for ( int counter = 1 ; counter <= num ; counter++)
    {
       if(counter %2 == 1){

        sum += counter;
       }
}

cout << " Sum Odd Number = "<<  sum << "\n";
    
//#29

    int num = 10;
    // cout << " Enter The Number Sum the Even Number :\n";
    // cin >> num;

    int sum ;
     
    for ( int counter = 0 ; counter <= num ; counter++)
    {
       if(counter %2 == 0){

        sum += counter;
       }
}

cout << " Sum Even Number = "<<  sum << "\n";


#30 Notes : Review voied 30

    int Number ;

    cout << "Enter The Factorial Number : " << endl;
    cin >> Number ;

    int i = 1 ; 
    while (Number <= 0){

    cout << " The Factorial must be Positive Number !\n";
    cin >> Number ;
    
    i++ ;}

    long long Factorial = 1 ;

    for(int Counter =  1 ; Counter <= Number ; Counter++)
    {
        
        Factorial *= Counter ;

    }

    cout << "Factorial = "<< Factorial ;



//#37

    int Numbers , Sum ;

    cout << "Enter numbers (enter -99 to finish) :  \n";
    
    while (true){

        cin >> Numbers ;
        
        if(Numbers == -9){
            break;
        }

        Sum += Numbers;
      
    }

    cout << "The Sum Numbers = " << Sum <<endl;


#46

    // for(char c = 'A' ; c <= 'Z' ; c++ ){

    //     cout << c <<endl;
    // }   

    for (int i = 65 ; i <= 90; i++){

        cout << char(i) <<endl;
    }
    
//#50

// cout << "******************************************\n";
//     int CodePIN = 1234 ;
//     int PIN ; 
//     float blance = 7500 ; 

//     cout << "Enter The CodePIN \n";
//     cin >> PIN ; 

//     if(PIN == CodePIN)
//     {
//         cout << "Blance = " << blance ; 
//     }

//     int i = 1;

//     while(PIN != CodePIN)
//     {
//         cout << "enter the PIN again\n";
//         cin >> PIN ; 

//     if(PIN == CodePIN){

//         cout << "Blance = " << blance ; 
//     }
//     if(i == 2 && PIN != CodePIN)
//     {
//         cout << "Card is locked!";
//         break;
//     }
//     i++;
// }
// cout << "******************************************\n";
// Optmizing Preformance for Code From programmer

const int CORRECT_PIN = 1234; 
    int userPin;
    float balance = 7500;
    int attempts = 0; 
    bool isUnlocked = false; 

    
    while (attempts < 3) {
        cout << "Enter PIN: ";
        cin >> userPin;

        if (userPin == CORRECT_PIN) {
            isUnlocked = true;
            break; 
        } else {
            attempts++;
            if (attempts < 3) {
                cout << "Wrong PIN. Try again." << endl;
            }
        }
    }

    if (isUnlocked) {
        cout << "Balance = " << balance << endl;
    } else {
        cout << "Card is locked!" << endl;
    }
    return 0;
}