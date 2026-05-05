/*
    Problem:
    Write a program to ask the user to enter:
    • Pennies, Nickels, Dimes, Quarters, Dollars
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
#include <iostream>
using namespace std ;

struct stPiggyBankContenet
{
    int Penny , Nickel , Dime , Quarter , Dollar ;
};

stPiggyBankContenet ReadMany()
{
    stPiggyBankContenet PiggyBankContenet ;
    cout << "Please How many a Penny ? \n";
    cin >> PiggyBankContenet.Penny ;
    
    cout << "Please How many a Nickel ? \n";
    cin >> PiggyBankContenet.Nickel ;
    
    cout << "Please How many a Dime ? \n";
    cin >> PiggyBankContenet.Dime ;
    
    cout << "Please How many a Quarter ? \n";
    cin >> PiggyBankContenet.Quarter ;

    cout << "Please How many a Dollar ? \n";
    cin >> PiggyBankContenet.Dollar ;

    return PiggyBankContenet ;
}

int CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet) 
{
    int TotalPennies = 0 ;

    TotalPennies =  PiggyBankContenet.Penny *  1 +
                    PiggyBankContenet.Nickel * 5 +
                    PiggyBankContenet.Dime *  10 + 
                    PiggyBankContenet.Quarter * 25 +
                    PiggyBankContenet.Dollar * 100 ;

    return  TotalPennies ;
}

int main(){
    
    int TotalPennies = CalculateTotalPennies(ReadMany());

    cout << " Total Pennies = " << TotalPennies <<endl;
    cout << " Total Dollar = " << (float)TotalPennies / 100 <<endl;

    return 0 ;
}