// Operators : Realtional Operators

/*
    Relational Operators
A= 10  , B= 20
--------------------------------------------------------------------------------------------------------
    Operator    Description                                                              Example
--------------------------------------------------------------------------------------------------------

    ==         Checks if the values of two operands are equal or not. if            (A == B) is not true.
               yes then condition becomes true A = 1 or true 
              
    !=         Checks if the values of two operands are equal or not, if            (A != B) is true.
                values are not equal then condition becomes true.

    >          Checks if the value Of left operand is greater than the              (A > B) is not true.
               value of right operand. if yes then condition becomes
               true.

    <           Checks if the value Of left operand is less than the value          (A < B) is true.
                of right operand, if yes then condition becomes true.

    >=         Checks if the value of left operand is greater than or               (A >= B) is not true.
               equal to the value Of right operand. if yes then condition
               becomes true.

    <=         Checks if the value of left operand is less than or equal            (A <= B) is true.
               to the value of right operand, if yes then condition
               becomes true.
----------------------------------------------------------------------------------------------------------
 
*/
#include <iostream>
using namespace std;

int main() {

    // int A = 10 , B = 20;

    // cout << (A == B) <<endl;// false = 0
    // cout << (A != B) <<endl;// true = 1
    // cout << (A > B) <<endl;// false = 0
    // cout << (A < B) <<endl;// true =  1
    // cout << (A >= B) <<endl;// false = 0
    // cout << (A <= B) <<endl;// true = 1
 //--------------------------------------------------   
    int A = 10 , B = 20;
    A = B ;
    cout << (A == B) <<endl;// ture = 1
    cout << (A != B) <<endl;// false = 0
    cout << (A > B) <<endl;// false = 0
    cout << (A < B) <<endl;// false =  0
    cout << (A >= B) <<endl;// true = 1
    cout << (A <= B) <<endl;// true = 1

}