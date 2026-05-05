/*
    Power 2,3,4
*/
#include <iostream>
// #include <math.h>
using namespace std; 

int ReadNumber(){

    int Number ; 
    cout << "Please Enter a Number ? \n";
    cin >> Number ;

    return Number ;
}

int PowerOf_2_3_4(int Number)
{
   int num2 , num3, num4 ;

    // num2 = pow(Number , 2) ;
    // num3 = pow(Number , 3) ;
    // num4 = pow(Number , 4) ;
  
    num2 = Number * Number ;
    num3 = Number * Number * Number ; 
    num4 = Number * Number * Number * Number;

    cout << num2 << " " << num3 << " " << num4 <<endl;
}

int main(){

    int N = ReadNumber();
    PowerOf_2_3_4(N);

    return 0; 
}