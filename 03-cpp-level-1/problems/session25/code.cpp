// Opreators : Logical Operators

/*
    Logical Operators
    A = 1 (True) , B = 0 (False)                                                        
-----------------------------------------------------------------------------------------------------------
    Operators   Description                                                                 Example
-----------------------------------------------------------------------------------------------------------
    &&          Called Logical AND operator. If both the operands are non-zero,         (A && B) is false.
                then condition becomes true.
   
    ||          Called Logical OR Operator. If any of the two operands is non-          (A || B) is true.
                zero, then condition becomes true.
    
    !           Called Logical NOT Operator. use to reverses the logical state          !(A && B) is true.
                of its operand. If a condition is true then Logical NOT operator
                will make false.
-----------------------------------------------------------------------------------------------------------------

*/
#include <iostream>
using namespace std;

int main() {

    bool A = 1 , B = 0;

    cout << (A && B ) <<endl; // FALSE = 0
    cout << (A || B ) <<endl; // TRUE = 1
    cout << ( !A ) <<endl; // FALSE = 0
    cout << ( !B ) <<endl; // TRUE = 1
    cout << !(A && B ) <<endl; // TRUE = 1
    cout << !(A || B ) <<endl; // FALSE = 0

    bool Result ;

    Result = !(5 < 6 || 7 == 7 ) && !(1 || 0); 

    cout << Result <<endl;  // false = 0
    
    return 0;

}