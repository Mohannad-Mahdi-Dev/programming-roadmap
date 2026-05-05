/*
    Max Of Three Number 
*/
#include <iostream>
using namespace std ;

void ReadNumbers(int& Num1 , int& Num2 , int& Num3){

    cout << "Please Enter The Number 1 ? " <<endl;
    cin >> Num1 ;
    
    cout << "Please Enter The Number 2 ? " <<endl;
    cin >> Num2 ;
    
    cout << "Please Enter The Number 3 ? " <<endl;
    cin >> Num3 ;
}

int MaxOf3Numbers(int Num1 , int Num2 , int Num3){

    if(Num1 > Num2)
        if(Num1 > Num3)
            return Num1 ;
        else 
            return Num2 ;
    else 
        if(Num2 > Num3)
            return Num2 ;
        else 
            return Num3 ;

    // OR :
    
    // if(Num1 > Num2 && Num1 > Num3)
    // return Num1 ;
    // else if (Num2 > Num3 && Num2 > Num1)
    // return Num2 ;
    // else 
    // return Num3 ;

}

void PrintResults (int Max){

    cout << "The Maximum Number : " << Max <<endl;
}

int main(){
    
    int Num1 , Num2 , Num3 ;
    ReadNumbers(Num1 , Num2 , Num3);
    PrintResults(MaxOf3Numbers(Num1 , Num2 , Num3));

    return 0;
}