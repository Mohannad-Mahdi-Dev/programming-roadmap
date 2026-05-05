#include <iostream>
using namespace std;
/*
    Write a program to calculate Circle area inscribed in a square, then print it on the screen.
    The use should enter:
    A
    Example Inputs:
    10
    Outputs ->
    78.54
*/
int main(){

    int A ;
    float PI = 3.14;
    cout << "Enter The A : " << endl;
    cin >> A ;

    float Area = (PI *(A*A)) /4 ;

    cout << Area <<endl;


}