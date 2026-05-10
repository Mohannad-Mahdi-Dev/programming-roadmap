#include <iostream>
using namespace std ;

enum enPerfectNoPerfect { Perfect = 1 , NotPerfect = 2 };

int ReadPositiveNumber(string Message)
{
    int Number = 0 ;

    do
    {
        cout << Message <<endl;
        cin >> Number ;

    } while (Number <= 0 );
    
    return Number ;
}

bool isPerfectNumber(int Number)
{
    int Sum = 0 ;

    for (int i = 1 ; i < Number ; i++)
    {
        if( Number % i == 0)
        {
            Sum += i ;

        }
    }

    return Number == Sum ;
}

void PrintResult(int Number)
{  
    for(int i = 1 ; i < Number ; i++)
    {
        if(isPerfectNumber(i))
        {
            cout << i <<endl;
        }   
    }
}
int main(){

    PrintResult(ReadPositiveNumber("Please Enter a Number :"));

    return 0 ;
}