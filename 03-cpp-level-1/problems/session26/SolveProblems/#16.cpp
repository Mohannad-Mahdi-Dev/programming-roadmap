#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip> // نحتاجها لتنسيق الطباعة (تحديد عدد الخانات العشرية)

// Note : use pow inside sqrt.
/*
    Problem:
    Rules : Area = a. divide d2 - a2 
    Write a program to calculate rectangle area through diagonal and side area of
    rectangle and print it on the screen.
    The use should enter:
    a
    d
    Example Inputs:
    5
    40
    Outputs
    198.431
*/
int main(){
    
    double a , d ;

    cout << "Enter side 'a' of The rectangle  : " <<endl;
    cin >> a;
    
    cout << "Enter diagonal 'd' of The rectangle : " <<endl;
    cin >> d;

    if (d <= a){
        cout << "Error: The diangal d of the rectangle must be greater than the side a ."<<endl;
        return 0;
    }
    //الخطوة 2 إلى 5: إيجاد الضلع المفقود 'b' باستخدام نظرية فيثاغورس
   // b = sqrt(d^2 - a^2)

    // double a_squared = pow(a , 2); // a^2
    // double d_squared = pow(d, 2); // d^2

    // double  b_squared = d_squared - a_squared; // b^2 

    // double b = sqrt(b_squared);// نحسب الجذر التربيعي الان 

    double Area;
     Area = a * sqrt(pow(d,2) - pow(a,2)); // نحسب المساحة

    // cout << "Calculating..." << endl;
    // cout << "Side a = " << a << endl;
    // cout << "Diagonal d = " << d << endl;
    // cout << "Calculated side b = " << b << endl;
    cout << "Area = " << Area <<endl;

    return 0;   
}