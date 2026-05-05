/*
    Write a program calculate  Half Number from the entered numbre ?
*/
#include <iostream>
using namespace std ;

int ReadNumber (){

    int Num ;
    cout << "Enter The Number : " <<endl;
    cin >> Num ;

    return Num ;
}

float CalculateHalfNumber(int Num){

    return  (float) Num / 2 ;
}

void PrintHalfNumber (int Num){

    string Result = " the half number " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num)) ;

    cout << "Result = " << Result <<endl;
}

int main(){
    
    PrintHalfNumber(ReadNumber());
}