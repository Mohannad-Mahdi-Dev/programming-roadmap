/*
    Write a program the ask user to enter three Marks 
    than calculate Average of 3 Marks than print Pass if >= 50 or Fail < 50 than print result on screen.
*/
#include <iostream>
using namespace std ;

enum enPassFail { Pass = 1 , Fail = 2};

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

enPassFail CheckAverage(float  Average){
    
    if (Average >= 50)
        return enPassFail::Pass;
    else 
        return enPassFail::Fail;
}

void PrintResults (float Average ){

    cout << "\n Your Average is : " << Average <<endl;

    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "\n Your Pass " <<endl;
    else 
        cout << "\n Your Fail " <<endl;
}

int main(){

    int Mark1 , Mark2 , Mark3 ;
    ReadNumbers(Mark1 , Mark2 , Mark3);
    PrintResults(CalculateAverage(Mark1 , Mark2 , Mark3));

    return 0 ;
}