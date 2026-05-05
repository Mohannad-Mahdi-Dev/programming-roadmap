/*
    Problem:
    Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the
    balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
    Assume User Balance is 7500.
    Input
    1234
    5151
    Outputs
    Your Balance is: 7500
    Wrong PIN
*/
#include <iostream>
using namespace std ;

string Read_PIN_Code(string Message)
{
    string PIN_CODE ;
    cout << Message <<endl; 
    cin >> PIN_CODE ;

    return PIN_CODE ;
}

bool Login()
{
    string PIN_CODE ;

    do{
        PIN_CODE = Read_PIN_Code("Please Enter a PIN Code ? ");

        if(PIN_CODE == "1234")
        {
            return 1 ; // this will exit the function and return true
        }
        else {
            cout <<"\n Wrong PIN "<<endl;
            system("color 4F"); // Show in screen  Red color
        }

    } while (PIN_CODE != "1234");

    return 0 ; // when you reach here this means login faild
}

int main(){

    // float Balance = 7500 ;
    if(Login())
    {
        cout << " Your Balance is : " << 7500 <<endl;
        system("color 2F ");// turn screen to green 
    };
    return 0 ;
}