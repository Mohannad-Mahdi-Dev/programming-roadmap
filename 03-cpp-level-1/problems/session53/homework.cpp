// Write a Program to do the following :
/*
    Read 5 numbers and sum them up as long as the number is below 50 use for 
    loop and continue statement.
    Input:
    10
    20
    55
    10
    20

    Output: 60
*/

#include <iostream>
using namespace std ;

int main(){

    int Number = 0 , Sum = 0 ;

    for(int i = 1 ; i<= 5 ; i++)
    {
        cout << "Enter The Number : " <<endl;
        cin >> Number ;

        // continue condition 
        if(Number > 50)
        {
            cout << "the number is greater thean 50 and won't be calculated.\n";
            continue;
        }
        
        Sum += Number;
    }

    cout << "The Sum Numbers = "<< Sum <<endl;
}