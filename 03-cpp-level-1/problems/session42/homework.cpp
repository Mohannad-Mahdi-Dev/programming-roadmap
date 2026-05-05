// Solve the following problems of 
// Write Programs to do the following :
// #4, #8, #11, #24, #49.
#include<iostream>
using namespace std; 

// #4 :
/*
    Problem:
Write a program to ask the user to enter his/her:
• Age
• Driver license
Then Print “Hired” if his\her age is grater than 21 and s/he
has a driver license, otherwise Print “Rejected.
*/
// $8 :
/*
        Problem:
    Write a program to ask the user to enter:
    • Mark
    Then Print the “PASS” if mark >=50, otherwise print “Fail”
    Example Inputs:
    45
    Outputs
    Fail
*/
// #11 :
/*
        Problem:
    Write a program to ask the user to enter:
    • Mark1, Mark2, Mark3
    Then Print the Average of entered Marks, and print “PASS” if average>=50, otherwise print “FAIL”
    Example Inputs:
    90
    80
    70
    Outputs
    80
    PASS
*/
// #24
/*
        Problem:
    Write a program to ask the user to enter :
    • Age
    If age is between 18 and 45 print “Valid Age” otherwise print
    “Invalid Age”
*/
// #49
/*
        Problem:
    Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the
    balance to user, otherwise print “Wong PIN”.
    Assume User Balance is 7500.
    Input
    1234
    5151
    Outputs
    Your Balance is: 7500
    Wrong PIN
*/
int main(){

    // Question 4 :
    int Age ;
    bool DriverLicense ;

    cout << "Plase , Enter The age : " << endl;
    cin >> Age ;

    cout << "Plase , Enter The Driver License Yes : 1 or No : 0 : " << endl;
    cin >> DriverLicense;

    if(Age >= 21 && DriverLicense == 1)
    {
        cout << " Hired " << endl;
    }else 
    {
        cout << " Rejected " << endl;
    }

    // Question 8 :

    int mark ;

    cout << "Plase Enter The Mark : " << endl;
    cin >> mark ;

    if (mark >= 50)
    {
        cout << "PASS" <<endl;
    }else 
    {
        cout << "Fail" << endl;
    }

    // Question 11 :

    float mark1 , mark2 , mark3 ;

    cout << "Enter The mark 1 : " << endl;
    cin >> mark1;
    
    cout << "Enter The mark 2 : " << endl;
    cin >> mark2;
    
    cout << "Enter The mark 3 : " << endl;
    cin >> mark3;

    double Averge = (mark1 + mark2 + mark3) /3;

    cout << " Averge is = " << Averge <<endl; 

    if (Averge >=50)
    {
        cout << " Averge is : " << " PASS " << endl;
    }else 
    {
        cout << " Fail "<<endl;
    }

    // Question 24
    
    int Age ;
    
    cout << "Enter The Age :" << endl;
    cin >> Age ;
    
    if(Age >= 18 && Age <= 45 ) 
    {
            cout << "Valid Age" <<endl;
        }else 
        {
                cout << "InValid Age" <<endl;
    }
    
    
    // Question 49


    int PIN ;

    cout << "Enter The ATM PIN Code : " <<endl;
    cin >> PIN;

    if(PIN == 1234 || PIN == 1515){
        
    int Balance = 7500 ;
    
        cout << "Your Balance is : " << Balance <<endl;
    }else 
    {
        cout << "Wong PIN "<<endl;
    }
    
}