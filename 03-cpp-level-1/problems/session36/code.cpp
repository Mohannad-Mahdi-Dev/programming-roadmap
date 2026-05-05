// Variable Scope 
/*
    What is Variable Scope 
    local variable 

    global variable 
    

*/
#include <iostream>
using namespace std;

// x golobal variable  

    int x = 500 ;

// procured function no return type 
void MyFunction()
{
    int x = 100;
    cout << "The value of x inside function is : " << x << endl;

}
// Locla variable 
int main(){

    int x = 10 ;
   
    cout << "The local value of x inside Main is : " << x << endl; // 10

    // x golobal variable 
    MyFunction(); // 100
    
        
        
    ::x = 7000; // 
    cout << "The golobal value of x is : " << ::x + x  <<endl; // 7000
    
    return 0;

}