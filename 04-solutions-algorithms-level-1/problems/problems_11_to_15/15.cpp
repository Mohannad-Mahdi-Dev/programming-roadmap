/*
    Solution : (Calclate Rectangle Area) lenth multuplcation width
*/
#include <iostream>
using namespace std ;

void ReadRectangleArea(int& lenth , int& width)
{
    cout << "Enter the Lenth Area ? \n";
    cin >> lenth ;
    
    cout << "Enter the width Area ? \n";
    cin >> width ;
}

float CalculateRectangleArea(float A , float B){

    return A * B ;
}

void PrintResult(float Area)
{
    cout << " Rectangle  Area = " << Area <<endl;
}

int main(){
    int lenth , width ;
    ReadRectangleArea(lenth , width);
    PrintResult(CalculateRectangleArea(lenth , width));

    return 0;
}