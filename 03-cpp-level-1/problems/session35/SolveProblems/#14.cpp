#include <iostream>
using namespace std;

// Procedure
void SwapFunctionProcedure()
{
    int num1, num2;
    cout << "Please Enter the Number 1 : "<<endl;
    cin >> num1 ;

    cout << "Please Enter the Number 2 : "<<endl;
    cin >> num2 ;

    cout << num1 << "\n" << num2 <<endl;
    
    int temp = num1;
    num1 = num2 ;
    num2 = temp ;

    
    cout << num1 << "\n" << num2 <<endl;

}

int main(){

    SwapFunctionProcedure();

}