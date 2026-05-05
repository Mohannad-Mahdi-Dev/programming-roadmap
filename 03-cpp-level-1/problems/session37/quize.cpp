#include <iostream>
#include<string>
using namespace std;

// functions use by value and by refrence
// Question sum the numbres with by refrence

void myfunction (string &name){

    name = "Ameen";

    cout <<"The name is "<< name <<endl;

}


int myfunctionIntger (int num1 , int num2){

    num1= 10;
    num1= 20;

    int Result = num1 + num2;
    
    return Result ;

}
int main()
{
    // Address memory 
    string name ;
    name = "mohannad";

    int Num1 = 10;
    int Num2 = 10;

    int Result = Num1 + Num2;

    cout << "The Result Sum Number insied the main is : "<< myfunctionIntger(Num1 , Num2) <<endl;

    cout << "the Result Sum Number is : "<< Num1 + Num2 <<endl; // 30 
  
    // myfunction(name); 

    // cout << "the name insied the main function is  "<< name <<endl;

}