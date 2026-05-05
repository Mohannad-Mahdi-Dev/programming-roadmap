#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int A ;

    cout << "Enter The Circle Area : " <<endl;
    cin >> A;

    float PI = 3.14;
    double Area = (PI * (A * A)) / 4;

    cout << Area <<endl;
    cout << ceil(Area) <<endl;

}