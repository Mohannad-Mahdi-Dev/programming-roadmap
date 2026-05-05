//Pert : 3 -> Function : Parameters in Function

#include <iostream>
using namespace std;

int MySumFunction(int num1 , int num2 )
{   
    // cout << "Please Enter The Number1 : "<<endl;
    // cin >> num1 ;
    
    // cout << "Please Enter The Number2 : "<<endl;
    // cin >> num2 ;    

    return num1 + num2 ;

};

int main(){

    int Num1 , Num2 ;
    cout << "Please Enter The Number1 : "<<endl;
    cin >> Num1 ;
    
    cout << "Please Enter The Number2 : "<<endl;
    cin >> Num2 ;    

    cout <<"The Result is: " << MySumFunction(Num1, Num2) << endl;
    // cout << MySumFunction(10 , 40) <<endl;
    // cout << MySumFunction(10 , 100) <<endl;
    // cout << MySumFunction(10 , 30) <<endl;
    return 0 ;
}