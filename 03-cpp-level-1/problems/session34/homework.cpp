// write a procedure and a function to do the following :
#include <iostream>
using namespace std;

//Question 1 : sum -> num1 + num2 use Procedure ;

void MySumProcedure(){

    int num1 , num2 ;
    cout << "Please Enter The Number1 : "<<endl;
    cin >> num1 ;
    
    cout << "Please Enter The Number2 : "<<endl;
    cin >> num2 ;

    cout <<  num1 + num2 <<endl;

}

int MySumFunction()
{
    int num1 , num2 ;
    
    cout << "Please Enter The Number1 : "<<endl;
    cin >> num1 ;
    
    cout << "Please Enter The Number2 : "<<endl;
    cin >> num2 ;

    return num1 + num2 ;

}

int main(){

    MySumProcedure(); 
    // MySumFunction(); Print num1 and num2 no return any value sum numbers 
  
    cout << MySumFunction() << endl;

}