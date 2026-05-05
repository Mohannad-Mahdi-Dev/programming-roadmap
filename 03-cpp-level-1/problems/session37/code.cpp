// By Val vs By Ref :  by -> (Value vs Reference)

#include <iostream>
using namespace std;

//void SwapFunction(){

//     int num1 = 10 ;
//     int num2 = 20 ;

    
//     cout << " num 1 = " << num1 << "\n" << " num2 = " << num2<<endl;
    
//     int temp = num1 ;
//         num1 = num2 ;
//         num2 = temp ;

//     cout << " num 1 = " << num1 << "\n" << " num2 = " << num2<<endl;
    
// }

void SwapFunction(int &Num1)
{
    Num1 = 5000;

    cout << "Number inside function became = " << Num1 << endl;

}

int main(){

    int Num1 ;
    Num1 = 10000 ;
    
    SwapFunction(Num1) ;

    cout << " Number after calling the function become = " << Num1 <<endl;
    
}