// #include <iostream>
#include <cmath>
#include <iomanip> // أضفت هذه المكتبة لتنسيق المخرجات
using namespace std;

double CalculateRectangleArea( double a , double d)
{
    // المعادلة الصحيحة والمباشرة من المسألة
    // Area = a * sqrt(d^2 - a^2)
    double area = a * sqrt(pow(d, 2) - pow(a, 2));

    // أو يمكنك كتابتها هكذا
    // double area = a * sqrt((d*d) - (a*a));
    
    return area ;
}

int main(){

    double  sideA , diagonalD ;

    cin >> sideA ;
    cin >> diagonalD ;

    double area = CalculateRectangleArea(sideA , diagonalD);
    
    // قمت بتعديل الطباعة لتطابق المثال
    cout << "Outputs->" << endl;
    cout << fixed << setprecision(3) << area << endl;

}

// #include <iostream>
// #include <cmath>
// using namespace std;


// double calculaterectangleArea(double a, double d){

//     // double area = a * sqrt((d*d) - (a*a));
//     double area = a * sqrt(pow(d, 2)- pow(a, 2));
//     return area;
// }

// int main(){

//     double sideA , diagonalD ;

//     cin >> diagonalD ;
//     cin >> sideA ;

//     double area = calculaterectangleArea(sideA, diagonalD);

//     cout << area <<endl;

//     return 0;
// }
