#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to calculate triangle area then print it on the screen.
    Reuls : Area = 1/2 a.h
    The use should enter:
    a
    h
    Example Inputs:
    10
    8
    Outputs 
    40
*/
int main(){

    int a, h;

    cout << "Please The Enter a : " << endl;
    cin >> a;
    
    cout << "Please The Enter h : " << endl;
    cin >> h;

    int Area = a/2 * h;

    cout << Area <<endl;

}