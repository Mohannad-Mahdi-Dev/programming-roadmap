//Part 2  Functions : Functions vs Procedures 

#include <iostream>
#include <cmath>
using namespace std;

void MyFunction1() // Procedure 
{
    cout << "This is my Function no return any value ." <<endl;

}

string MyFunction2() // No Precedure , String he is Function 
{
    return "This is the MyFunction2 return value from type string ";
}

int MyFunction3()
{
    int a=5 , b = 10 ;

    return a + b ;
}

double MyFunction4()
{
    double num1 =5.2, num2 = 10.2 ;
    
    return num1 + num2 ;
}

bool MyFunction5()
{
    bool a = 0 , b = 1 ;

    return a && b ; // 0
}
int main(){

    MyFunction1();
    MyFunction2();
    MyFunction3();
    MyFunction4();
    MyFunction5();

    int Result ;
    Result = MyFunction3() +5;
    // Result = ceil(MyFunction4()) ;
    // Result = floor(MyFunction4()) ;
    // Result = round(ceil(MyFunction4())) ;
    Result = round(MyFunction4()) ;

    cout <<"Result : " <<  Result <<endl;
    // cout <<  MyFunction1() <<endl; // Error No return type any variable
    cout <<  MyFunction2() <<endl;
    cout <<  MyFunction3() <<endl;
    cout <<  MyFunction4() <<endl;
    cout <<  MyFunction5() <<endl;
}