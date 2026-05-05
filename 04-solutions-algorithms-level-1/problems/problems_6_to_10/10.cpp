/*
    Write a program the ask user to enter three Marks 
    than calculate Average of 3 Marks than print to the screen.
*/
#include <iostream>
using namespace std ;

void ReadNumbers(int& Mark1 , int&  Mark2 , int& Mark3){

    cout << "Please Enter your Number 1 ? \n";
    cin >> Mark1 ;
    
    cout << "Please Enter your Number 2 ? \n";
    cin >> Mark2 ;
    
    cout << "Please Enter your Number 3 ? \n";
    cin >> Mark3 ;

}

int Sumof3Numbers(int Mark1 , int Mark2 , int Mark3){

    return Mark1 + Mark2 + Mark3 ;
}

float CalculateAverage(int Mark1 , int Mark2 , int Mark3){
    
   return (float) Sumof3Numbers(Mark1 , Mark2 , Mark3) /3 ;
}

void PrintResults (float Average ){

    cout << "\n The Average is : " << Average <<endl;
}

int main(){

    int Mark1 , Mark2 , Mark3 ;
    ReadNumbers(Mark1 , Mark2 , Mark3);
    PrintResults(CalculateAverage(Mark1 , Mark2 , Mark3));

    return 0 ;
}