// Write A Program to do the following :
/*
    Please enter the first number A?
    50
    Please enter the second number B?
    50
   
    50 = 50 is 1
    50 != 50 is 0
    50 > 50 is 0
    50 < 50 is 0
    50 >= 50 is 1
    50 <= 50 is 1

*/
#include <iostream>
using namespace std;

int main() {

    int A , B ;

    cout << "Please Enter The first Number A : " <<endl;
    cin >> A ;
    
    cout << "Please Enter The scond Number B : " <<endl;
    cin >> B ;

    cout << "\n";
    
    cout << (A == B) <<endl;  
    cout << (A != B) <<endl;
    cout << (A > B)  <<endl;
    cout << (A < B)  <<endl;
    cout << (A >= B) <<endl;
    cout << (A <= B) <<endl;




}