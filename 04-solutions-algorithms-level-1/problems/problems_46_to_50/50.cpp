/*
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
#include <iostream>
#include <string>

using namespace std;

string ReadPinCode() {
    string pin;
    cout << "Please enter your PIN code: ";
   cin >> pin; 
    return pin;
}


bool Login() {
    string pinCode;
    int attempts = 3; 
    const string correctPin = "1234";

    do {
        pinCode = ReadPinCode();

        if (pinCode == correctPin) {
            return true; 
        } else {
            attempts--; 
            if (attempts > 0) {
                system("color 4F"); 
                cout << "\nWrong PIN! You have " << attempts << " attempts left.\n" << endl;
            }
        }
    } while (attempts > 0);

    return false;
}

int main() {
    const float balance = 7500.0;

    if (Login()) {
       
        system("color 2F");
        cout << "\nYour Balance is: " << balance << endl;
    } else {
        
        system("color 4F");
        cout << "\nCard is locked!" << endl;
    }

    return 0;
}