#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int L ;

    cout << "Please Enter The Circle area : " <<endl;
    cin >> L;

    float PI = 3.14;
    double Area = (L * L) / (4 * PI) ;

    cout << "Area = " << Area <<endl;
    cout << "Area = " << floor(Area) <<endl; // 31

}