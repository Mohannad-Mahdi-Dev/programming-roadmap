// Functions 

/*
    Functions :
    A function is a blaock of code wich only runs when it is called.

    You can pass data, known as parameters,  into a function.

    Functions are used to perform certain actions , and they are important for reusing code: 
    Define the code once, and use it many times.

    he is type form types the data types from  Derived  

    function:  When its value returns 

    procedur:  when its value is not restored 

*/
#include <iostream>
#include <string>
using namespace std;

void MyFunction() // No return value
{
    cout << "This is my first function , it go executed :--) " << endl;

}

void MyFunctionName() 
{
    cout << "My Name Is : MOhannad Mahdi " <<endl;
}

int main(){

    MyFunction(); // some ex.. round, floor, ceil, sqrt, etc...
    cout << "-----------------------"<<endl;
    MyFunctionName();

    return 0;
}
