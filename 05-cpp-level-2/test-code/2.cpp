// Write a program print all prime number from 1 to N
// the prime number grater than from 0 and 1 .
#include <iostream>
using namespace std; 


int ReadPrimeNumber()
{
    int number ;
    cout << "Please Enter a Prime Number from 1 to N ? \n";
    cin >> number ;

    return number ;
}

bool CheckPrimeNumber(int n){

    for(int i = 2 ; i * i <= n ; i++)
    {
        if(n % i == 0)
        {
            return false ;
        }
    }

    return true ;
}

void PrintPrimeNumber()
{
    int N = ReadPrimeNumber();

    cout << "prime number from 1 to " << N << " are : \n";

    for (int i = 2 ; i <= N ; i++)
    {
        if(CheckPrimeNumber(i))
        {
            cout << i <<endl;
        }
    }
    
}

int main(){

    PrintPrimeNumber();

    return 0 ;
}