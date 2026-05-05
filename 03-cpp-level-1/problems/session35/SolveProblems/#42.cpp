#include <iostream>
#include <cmath>
using namespace std;

/*
    Write a program to calculate the task duration in seconds and print it on screen
    Given the time duration of a task in the number of days, hours, minutes, and seconds,.
    Input
    2
    5
    45
    35
    Outputs ->
    193,535 Seconds
*/

double CalculateTaskDurationSeconds( double TotalDays, double TotalHours, double TotalMinuts, double TotalSecond)
{   
    
    // معطيات تجعلها ثوابت
     double  TotalPerDays = 24 *60 *60;
     double  TotalPerHours = 60 * 60;
     double  TotalPerMinuts =  60;

     

    double ScondFromDays = floor(TotalDays * TotalPerDays) ;
    double ScondFromHours = floor(TotalHours * TotalPerHours );
    double ScondFromMinuts = floor(TotalMinuts * TotalPerMinuts) ;
    double ScondFromScond = floor(TotalSecond); 

    double Total_Sconds = ScondFromDays + ScondFromHours + ScondFromMinuts + ScondFromScond ;

    return Total_Sconds ;

}

int main(){

    double  Days,  Hours,  Minuts,  Second ;

    cout << "Enter the days :" <<endl;
    cin >> Days ;

    
    cout << "Enter the hours :" <<endl;
    cin >> Hours ;

    cout << "Enter the Minuts :" <<endl;
    cin >> Minuts ;    

    cout << "Enter the Scond :" <<endl;
    cin >> Second ;

    cout << CalculateTaskDurationSeconds(Days, Hours, Minuts, Second);
}