#include <iostream>
using namespace std;

// HomeWork The Locla and golobal Variables ;

 // tow  golobal variable
int num1 = 10 ;
int num2 = 10 ;

// Function 
void CalucalteFunction()
{
    int num1 = 10 ;
    int num2 = 20 ;

    cout << " The inside function is calculate num1 + num2 = " << num1 + num2 <<endl; // 30
}

// Main Function
int main(){

    CalucalteFunction();

    cout << "In The Golobal Variable The Variable num1 + Variable num2 = " << num1 + num2 <<endl; // 20

}