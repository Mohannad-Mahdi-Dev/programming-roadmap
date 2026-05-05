#include <iostream>
using namespace std;
// Enums 
/*
    What is Enum?
    User-Defined
    An enumeration is a distinct type whose value is restricted to a range of values

    syntax:
    enum Color {Red, Green, Yellow, Blue};

*/
int main(){
    
    enum Color {Red=100, Green=200, Yellow=300, Blue=400 }; // array 
    enum Direction { North, South, East, West };
    enum Week { sat, sun, Mon, Tue, Wed, Thu, Fri };
    enum Gendor { Male, Female };
    enum Status { Single, Married };

        Color MyColor;
        Direction Mydirection;
        Week Today;
        Status MyStatus;

        MyColor = Color::Yellow;

        Mydirection = Direction::North;
        Today = Week::sat ;
        MyStatus = Status::Single;

        cout << "The Today Is  : "<< Today <<endl;
        cout << "My Color Is  : "<< MyColor <<endl;

    }