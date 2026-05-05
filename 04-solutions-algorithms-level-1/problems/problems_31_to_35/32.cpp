/*
    Power Of M
*/
#include <iostream>
using namespace std ;

int ReadPower()
{
    int M ;

    cout << "Enter a Power Number ? \n";
    cin >> M ;

    return M;
}

int ReadNumber()
{
    int Number ;

    cout << "Enter a Number ? \n";
    cin >> Number ;

    return Number ;
}

int PowerOfM(int Number , int M)
{

    if(M == 0)
    {
        // Any Number Powered to Zero gives 1 .
        return 1 ;    
    }

    int Power = 1 ;

    for(int i = 1 ; i <= M ; i++)
    {
        Power *= Number ;
    }
    return Power ;
}   


int main(){
    
    int M = ReadPower();    
    int Number = ReadNumber();

    cout << " Result = " << PowerOfM(M , Number);

    return 0;
}