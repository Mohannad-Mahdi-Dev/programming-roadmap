/*
    Problem:
    Write a program to read a NumberOfHours and calculates the number of weeks, and days included in that
    number
Input
    365
Outputs
    2.17 Weeks
    15.20 Days
*/
#include <iostream>
using namespace std ;

float ReadPositiveNumber (string Message)
{
    float Number ;

    do{
        cout << Message <<endl;
        cin >> Number ;
        
    }while(Number < 0 );

    return Number;
}

float HoursToDays(float NumberOfHours)
{
    // return Days Number 
    return NumberOfHours / 24 ;
}

float HoursToWeeks(float NumberOfHours)
{
    return NumberOfHours / 24 / 7 ; 
}

float DaysToWeek(float NumberOfDays)
{
    return (float)HoursToDays(NumberOfDays) / 7;
}

// void CalculateHoursHowWeek(float Hours){
//    float TotalDays = Hours / 24 ;
//     float TotalWeek = TotalDays / 7 ;
//     cout << TotalDays <<" Days\n";
//     cout << TotalWeek << " Weeks\n";
// }

int main(){
    
    float NumberOfHours = ReadPositiveNumber( "Please Enter a Hours Time : ? \n");
    float NumberOfDays = HoursToDays(NumberOfHours) ;
    float NumberOfWeeks = DaysToWeek(NumberOfDays) ;
   
    cout << endl;
    cout << "Total Hours = " << NumberOfHours <<endl;
    cout << " Total Days = " << NumberOfDays << endl;
    cout << " Total Weeks = " << HoursToWeeks(NumberOfHours) <<endl;

    return 0 ;
}