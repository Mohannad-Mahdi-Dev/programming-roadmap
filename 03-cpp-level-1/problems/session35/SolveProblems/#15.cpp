#include <iostream>
using namespace std;

// Function or  Procedure 
void  CalculateRectangleArea() // chenge function to int or double or float use  return Result ;
{
    int hight , Rigth ;

    cout << "Please Enter the hight : " <<endl;
    cin >> hight ;
    
    cout << "Please Enter the Rigth : " <<endl;
    cin >> Rigth ;

    int Result = hight * Rigth ;

    cout << Result <<endl;
    // return Result ;

} 

int main(){

    CalculateRectangleArea();
    // cout << "Area = " << CalculateRectangleArea() <<endl; // Error no return any variable 

}