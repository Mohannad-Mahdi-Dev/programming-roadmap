
/*
    Sum Odd Numbers from N to 1
*/
#include <iostream>
using namespace std ;

enum enOddOrEven {Odd = 1 , Even = 2};

int ReadNumber()
{
    int Num ;
    cout << "Enter a Number : \n";
    cin >> Num ;
    return Num ;
}

enOddOrEven CheckOddOrEven(int Number)
{
   if(Number % 2 != 0)
    return enOddOrEven::Odd;
    else 
    return enOddOrEven::Even;
}

int SumOddNumbersFrom1toN_UsingFor(int Number)
{
    int Sum = 0 ;

    cout << "\n Sum Odd Numbers using For Statement : \n";
    for(int i = 1 ; i <= Number ; i++){

        if(CheckOddOrEven(i) == enOddOrEven::Even )
        {
            Sum += i ;
        } 
    }

    return Sum ;
}

int SumOddNumbersFrom1toN_UsingWhile(int Number) 
{
    int Sum = 0 ;
    int countr = 1 ;

    cout << "\n Sum Odd Numbers Using While Statement : \n";
    while(countr <= Number)
    {
        if(CheckOddOrEven(countr) == enOddOrEven::Even)
        {
            Sum += countr ;
        }
      
    countr++;}
    return Sum ;
}

int SumOddNumbersFrom1toN_UsingDoWhile(int Number)
{
    int Sum = 0 ;
    int countr = 1 ; 

    cout << "\n Sum Odd Numbers Using Do..while Statement :\n";
    do{
        if(CheckOddOrEven(countr) == enOddOrEven::Even)
        {
            Sum += countr ;
        }
    countr++ ;
    }while(countr <= Number);

    return Sum ;
}

void PrintResult(){

    int N = ReadNumber() ;

    cout <<  SumOddNumbersFrom1toN_UsingFor(N);
    cout <<  SumOddNumbersFrom1toN_UsingWhile(N);
    cout <<  SumOddNumbersFrom1toN_UsingDoWhile(N);
}

int main()
{
    PrintResult();
}