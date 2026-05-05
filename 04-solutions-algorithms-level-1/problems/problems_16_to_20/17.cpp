/*
    Calculate (Tringle Area)
*/
#include <iostream>
using namespace std ;

// Was 1 :

// struct ReingleArea
// {
//     int A , H;
// };


// ReingleArea ReadTringlaArea()
// {   
//     ReingleArea Numbers ;
//     cout << "Enter The Tringle based A "<<endl;
//     cin >> Numbers.A ;
//     cout << "Enter the tringle height H " <<endl;
//     cin >> Numbers.H ;

//     return Numbers;
// }

// float CalculateTringleArea(float A , float H)
// {
//     float Area = (A / 2) * H ;

//     return Area ;
// }

// void PrintResult(float A , float H  , float Area)
// {
//     cout << " Tringle Area = " << CalculateTringleArea(A , H) <<endl;
// }

// Was 2 :

void ReadTringlaArea(float &A , float &H)
{   
    cout << "Enter The Tringle based A "<<endl;
    cin >>A ;
    cout << "Enter the tringle height H " <<endl;
    cin >>H ;
}

float CalculateTringleArea(float A , float H)
{
    float Area = (A / 2) * H ;

    return Area ;
}

void PrintResult(float Area)
{
    cout << " Tringle Area = " << Area <<endl;
}

int main(){

// Was 1 :

// PrintResult(ReadTringlaArea());


// Was 2 :

    float A , H ;
    ReadTringlaArea(A , H);
    CalculateTringleArea(A, H);
    PrintResult(CalculateTringleArea(A,H));

    return 0;
}