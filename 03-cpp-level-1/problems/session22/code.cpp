// Prefix Vs Postfix --/++
/*
    ++A vs A++
    --A vs A++

    Prefix vs Postfix --/++
    A = 10

    Operator A++ Example C = A++ Result = C will take 10 , then A will
                                          increase by 1 and become 11 .
    Operator ++A Example C = ++A Result = A will increase by 1 and
                                          become 11 , then C will take 11.
    Operator A-- Example C = A-- Result = C will take 10, then A will
                                          decrease by 1 and become 9.
    Operator --A Example C = --A Result = A will increase by 1 and
                                          become 9 , then C will take 9.
*/
#include <iostream>
using namespace std;

int main() {

    int A = 10 ;
    int B = A++ ; // B will take the old value of A , then A will increase by 1
    
    cout << "B = " << B <<endl; // print 10 
    cout << "B = " << A <<endl; // print 11

    B = ++A ; // A will increase by 1 , then B will take the new value

    cout << "B = " << B <<endl; // print 12 
    cout << "A = " << A <<endl; // print 12


}