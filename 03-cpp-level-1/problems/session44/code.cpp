// Using Enums IF Statument 
#include<iostream>
using namespace std;

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

int main(){

cout << "****************************\n";
cout << "Plase Choos the number of your color : \n";
cout <<"(1) Red ";
cout <<"(2) Blue ";
cout <<"(3) Green";
cout <<"(4) Yellow";
cout << "****************************\n";
cout << "Your Choos : ";

int color ;

enScreenColor Color;

cin >> color; 

// Casting from enum to int Why, storing value color from user to variable Color 
Color = (enScreenColor) color ;

if(color == enScreenColor::Red)
{
    system("color 4F");

}else if( color == enScreenColor::Blue)
{
    system("color 3F");
// Open The comment on variable Color , no color
}else if ( Color == enScreenColor::Green)
{
    system("color 2F");

}else if ( Color == enScreenColor::Yellow)
{
    system("color 6F");
}

// Clean Code 
    // switch (Color) {
    // case enScreenColor::Red:
    //     system("color 4F");
    //     break;
    // case enScreenColor::Blue:
    //     system("color 3F");
    //     break;
    // }
}