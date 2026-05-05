/*
    Solution : (Swap Tow Numbers) 
*/
#include <iostream>
using namespace std ;

void ReadNumbers(int& Num1, int& Num2){

    cout << "Enter The Number A ? " <<endl;
    cin >> Num1 ;
    cout << "Enter The Number B ? "<< endl;
    cin >> Num2; 

}

void Swap(int& Num1 , int& Num2){

    int Temp;
    
        Temp = Num1;
        Num1 = Num2 ;
        Num2 = Temp ;
}

void PrintResult(int Num1 , int Num2){

    cout << " Number 1 = "<< Num1 <<endl;
    cout << " Number 2 = "<< Num2 <<endl;
}

int main(){
    
    int Num1 , Num2 ;
    ReadNumbers(Num1 , Num2);
    PrintResult(Num1 , Num2);
    Swap(Num1 , Num2);
    PrintResult(Num1 , Num2);
    
    return 0;
}