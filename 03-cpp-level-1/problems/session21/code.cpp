// Increment & Decrement Operator ++  , --  Operator
/* 
            A = 10 , B = 20 

        A++ -> A = A + 1  = 11
        ++A -> A = A + 1 = 11
        B-- -> B = B - 1 = 19
        --B -> B = B - 1 = 19

*/

#include <iostream>
using namespace std;

int main(){

    int A = 10 , B = 20 ;

    A++; // + 1
    ++A; // + 1

    B--; // - 1
    --B; // - 1

    cout << " A = " << A <<endl; // 12
    cout << " B = " << B <<endl; // 18

    return 0;
}