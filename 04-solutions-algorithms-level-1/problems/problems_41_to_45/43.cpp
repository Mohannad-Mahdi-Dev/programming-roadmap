/*
    Problem:
Write a program that inputs the number of seconds and changes it to days, hours, minutes, and seconds
Input
193,535
Output 
2:5:45:35
*/
#include <iostream>
#include <math.h>
using namespace std ;

struct strTaskDuration {
    
    int NumberOfDays , NumberOfHours , NumberOfMinutes , NumberOfSeconds ;
};

float ReadPositiveNumber(string Message)
{
    float TotalSeconds ;
    do{
        cout << Message <<endl;
        cin >> TotalSeconds ;
    }while(TotalSeconds <= 0);

    return TotalSeconds ;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration ;

    // int TotalDay , TotalHours , TotalMinuts , TotalScond ;
    // TotalDay = 24 * 60 * 60 ;
    // TotalHours = 60 * 60  ;
    // TotalMinuts = 60  ;
    // TotalScond ;

    const int SecondsPerDay = 24 * 60 * 60 ;
    const int SecondsPerHour = 60 * 60  ;
    const int SecondsPerMinuts = 60 ;

    int Remainder = 0 ;

    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay) ;
        Remainder = TotalSeconds % SecondsPerDay ;
    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour) ;
        Remainder = Remainder % SecondsPerHour ;
    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinuts) ;
        Remainder = Remainder % SecondsPerMinuts ;
    TaskDuration.NumberOfSeconds = Remainder ;

    return TaskDuration ;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration )
{
    cout << TaskDuration.NumberOfDays <<":"
         << TaskDuration.NumberOfHours <<":"
         << TaskDuration.NumberOfMinutes <<":"
         << TaskDuration.NumberOfSeconds <<"\n" ;

}
int main(){
    
    int TotalSeconds = ReadPositiveNumber( "Please Enter a Seconds ? \n");
    cout <<endl ;
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

    return 0 ;
}