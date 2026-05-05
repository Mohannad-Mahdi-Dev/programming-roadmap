#include <iostream>
#include <cmath>
using namespace std;

/*
    Problem:
    Write a program to calculate circle area then print it on the screen.
    The use should enter:
    r
    Example Inputs:
    5
    Outputs ->
    78.54
*/
int main(){
    
    int  r;
    double PI = 3.14;
    cout << "Enter The Number calculate circle area : " <<endl;
    cin >> r;

    double Area =  PI *pow(r,2);

    cout << Area <<endl;
    cout << ceil(Area) <<endl;
    cout << floor(Area) <<endl;

}