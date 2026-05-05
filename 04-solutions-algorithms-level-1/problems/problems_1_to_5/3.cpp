/*
    Write a program to check from the number odd or even 
    than , print the result to screen.

*/
#include <iostream>
using namespace std ;

enum enNumbertype  { Even = 2 , Odd = 1};

int ReadNumberType(){

    int Number ;

    cout << "Enter The Number : "<<endl;
    cin >> Number ;

    return Number ;
}

// Separation of Concerns (Logic and UI).

// Logic
enNumbertype CheckNumberType( int Number ){

    int Result = Number %2 ;

    if(Result == 1){
        return enNumbertype::Odd;
    }else {
        return enNumbertype::Even;
    }

}
// UI
void PrintNumberType(enNumbertype NumberType){

    if(NumberType == enNumbertype::Even){
        cout <<"\n Number is Even\n"; 
    }else {
        cout <<"\n Number is Odd \n";
    }
}

int main(){
    
    PrintNumberType(CheckNumberType(ReadNumberType()));

    return 0;
}