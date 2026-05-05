/*
    Write a program the ask user to enter three Number 
    than Sum to 3 Numbers than print to the screen.
*/
#include <iostream>
using namespace std ;

// was 1 :

// struct stNumber
// {
//     int num1, num2, num3 ;
// };

// stNumber ReadNumber()
// {
//     stNumber Number;

//     cout << "Enter The Number1 : \n";
//     cin >> Number.num1 ;
     
//     cout << "Enter The Number2 : \n";
//     cin >> Number.num2 ;
     
//     cout << "Enter The Number3 : \n";
//     cin >> Number.num3 ;

//     return Number ;
// };

// int SumNumber (stNumber Number){

//     int sum = 0 ;
//     sum = Number.num1 + Number.num2 + Number.num3 ;

//     return sum ;
// }

// void PrintSumNumber (int Sum){

//     cout << "The Sum Number = " << Sum <<endl;
// }

// was 2 :

void ReadNumbers(int& Num1 , int&  Num2 , int& Num3){

    cout << "Please Enter your Number 1 ? \n";
    cin >> Num1 ;
    
    cout << "Please Enter your Number 2 ? \n";
    cin >> Num2 ;
    
    cout << "Please Enter your Number 3 ? \n";
    cin >> Num3 ;

}

int Sumof3Numbers(int& Num1 , int& Num2 , int& Num3){

    return Num1 + Num2 + Num3 ;
}

void PrintResults (int Total ){

    cout << "The total Sum of Numbers is : " << Total <<endl;
}
int main(){
// was 1 :

    // PrintSumNumber(SumNumber(ReadNumber()));
    
// was 2 :

    int Num1 , Num2 , Num3 ;
    ReadNumbers(Num1 , Num2 , Num3);
    PrintResults(Sumof3Numbers(Num1 , Num2 , Num3));
    
}