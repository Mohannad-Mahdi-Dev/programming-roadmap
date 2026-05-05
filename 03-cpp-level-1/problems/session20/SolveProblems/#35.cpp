#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to ask the user to enter: • Pennies, Nickels, Dimes, Quarters, Dollars
    Then calculate the total pennies , total dollars and print them on screen
    giving that:
    • Penny = 1
    • Nickel = 5
    • Dime = 10
    • Quarter = 25
    • Dollar = 100
    Example Inputs:
    5,5,5,5,5
    Outputs
    705 Pennies
    7.05 Dollars
*/
int main(){

    int Pennies, Nickels, Dimes, Quarters, Dollars ;

    cout << "Please Enter the Pennies : " <<endl;
    cin >> Pennies;
    
    cout << "Please Enter the Nickels : " <<endl;
    cin >> Nickels;
   
    cout << "Please Enter the Dimes : " <<endl;
    cin >> Dimes;
   
    cout << "Please Enter the Quarters : " <<endl;
    cin >> Quarters;
   
    cout << "Please Enter the Dollars : " <<endl;
    cin >> Dollars;

    // processing 
    float TotalPennies = Pennies*1 + Nickels*5 + Dimes*10 + Quarters*25 + Dollars*100 ;
    float TotalDollars = TotalPennies  / 100 ;
    
    cout << TotalPennies <<endl;
    cout << TotalDollars <<endl;

    // int five , foure, three , tow , one ;

    // cout << "Please Enter the one : " <<endl;
    // cin >> one;

    // cout << "Please Enter the tow : " <<endl;
    // cin >> tow;
   
    // cout << "Please Enter the three : " <<endl;
    // cin >> three;
   
    // cout << "Please Enter the foure : " <<endl;
    // cin >> foure;
   
    // cout << "Please Enter the five : " <<endl;
    // cin >> five;
    
   
   
   

    // float totalMany = one*100 + tow*200 + three*300 + foure*400 + five*500 ;
    // float totalFive = totalMany / 500;

    //    cout << totalMany <<endl;
    // cout << totalFive <<endl;


}