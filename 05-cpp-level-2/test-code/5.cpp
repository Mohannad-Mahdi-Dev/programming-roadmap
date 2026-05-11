#include <iostream>
using namespace std ;

int ReadNumbers(string Message)
{
    int Numbers;
    cout << Message<<endl;
    cin >> Numbers ;

    return Numbers ;
}

void PrintDigits(int Number)
{
    int Remainder = 0 ;
 
    while(Number > 0)
    {
        Remainder = Number % 10 ;
        Number = Number / 10 ;
        cout << Remainder <<endl;
    }
}
int main(){
    
    PrintDigits(ReadNumbers("Please enter a Number : "));
}