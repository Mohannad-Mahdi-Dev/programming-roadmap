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
#include <iostream>
using namespace std ;

void PrintLettersAtoZ()
{
    // for(char i = 'A' ; i <= 'Z' ; i++)
    // {
    //     cout << i <<endl;
    // }

    for(int y = 65 ; y <= 90 ; y++)
    {
        cout << char(y) <<endl;
    }
}

int main(){
 
    PrintLettersAtoZ();

    return 0 ;
}