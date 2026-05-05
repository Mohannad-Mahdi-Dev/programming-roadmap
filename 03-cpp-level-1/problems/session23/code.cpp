// Assignment Operators =, +=, -=, *=, /=, %=

/* // Assignment Operators
    A = 10 ; B = 20 ;
--------------------------------------------------
    Operator    Example            Equivalent to 
    =            A  = 5              A = 5
    +=           A += B             A = A + B
    -=           A -= B             A = A - B
    *=           A *= B             A = A * B
    /=           A /= B             A = A / B
    %=           A %= B             A = A % B
--------------------------------------------------

*/
#include <iostream>
using namespace std;

int main() {

    int A = 10 , B = 20 ;

    A = B ;
    A += B ;
    cout << "A = A + B = " << A <<endl;  // 40
    
    A -= B ; 
    cout << "A = A - B = " << A <<endl; // 20 
    
    A *= B ;
    cout << "A = A * B = " << A <<endl; // 400
    
    A /= B ;
    cout << "A = A / B = " << A <<endl; // 20
    
    A %= B ;
    cout << "A = A % B = " << A <<endl; // 0
    
    return 0;
}