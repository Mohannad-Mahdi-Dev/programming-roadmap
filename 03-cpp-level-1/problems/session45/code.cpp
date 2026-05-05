#include<iostream>
using namespace std;

enum enScreenCountry {yemen = 1, Oman = 2, Palestine = 3, SaudiArabia = 4, Egypt = 5};

void PrintScreenTypeCountry(){
    cout << "****************************\n";
    cout << "Select a country to see its capital:\n";
    cout << "(1) Yemen\n";
    cout << "(2) Oman\n";
    cout << "(3) Palestine\n";
    cout << "(4) Saudi Arabia\n";
    cout << "(5) Egypt\n";
    cout << "****************************\n";
    cout << "Your Choice: ";
}
int main(){

    int day = 5;

    switch(day)
    {
        case 1 :
            cout << "Sunday";
              break;
        case 2 : 
            cout << "Wonsday";
              break;
        case 3 : 
            cout << "Tuesday";
              break;
        case 4 : 
            cout << "Wednseday";
              break;
        case 5 :
            cout << "Thursday";
              break;
        case 6 :
            cout << "Friday";
              break;
        case 7 :
            cout << "Sturday";
              break; 
        default :
            cout << "Not a week a day!";
    }

    //Part2

    enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

    cout << "****************************\n";
    cout << "Plase Choos the number of your color : \n";
    cout <<"(1) Red ";
    cout <<"(2) Blue ";
    cout <<"(3) Green";
    cout <<"(4) Yellow";
    cout << "****************************\n";
    cout << "Your Choos : ";

    int choos;
    enScreenColor Color;
    
    cin >> choos;

    Color = (enScreenColor) choos;

    switch (Color)
    {
    case enScreenColor::Red :
        system("color 4F");
        break;
    
    case enScreenColor::Blue :
        system("color 3F");
        break;
    
    case enScreenColor::Green :
        system("color 2F");
        break;
    
    case enScreenColor::Yellow :
        system("color 6F");
        break;
    
    default:
        cout << "No Color Screen " <<endl;
        break;
    }
    //Part3

    PrintScreenTypeCountry();

    int country ;
    enScreenCountry Country; 
    cin>> country; // number

    // language c++ هي لغه رصينة في تعريف المتغيرات وهي لا تقبل تخزين المتغير من نوع عدد صحيح الا أذا عملنا عملية تحويل الى النوع الاخر
    Country = (enScreenCountry) country;


    switch(Country)
    {
        case enScreenCountry::yemen :
        cout << "Your Country Yemen! " <<endl;
        break;
        
        case enScreenCountry::Oman :
        cout << "Your Country Oman! " <<endl;
        break;
       
        case enScreenCountry::Palestine :
        cout << "Your Country Palestine! " <<endl;
        break;
        
        case enScreenCountry::SaudiArabia :
        cout << "Your Country SaudiArabia! " <<endl;
        break;

        case enScreenCountry::Egypt :
        cout << "Your Country Egypt! " <<endl;

        default :
        cout << "No Country Other!" <<endl;
    }

}