#include <iostream>
using namespace std;

/*
    Problem:
    Write a program that inputs the number of seconds and changes it to days, hours, minutes, and secondsInput
    193,535
    Output -> 
    2:5:45:35
*/

void  ChangesSecondsToDaysHorsMinutesSeconds(int Total_Sconds)
{
     
    int TotalPerDays = 24*60*60 ;
    int TotalPerHours = 60 * 60 ;
    int TotalPerMinuts = 60 ;

      

   int  DaysFromSconds =  Total_Sconds / TotalPerDays ;
   int  Reminder =        Total_Sconds % TotalPerDays ;

    int  HoursFromSconds =  Reminder / TotalPerHours ;
    Reminder=                Reminder % TotalPerHours ;

    int  MinutsFromSconds = Reminder / TotalPerMinuts ;
    Reminder =              Reminder % TotalPerMinuts ;

    int  ScondFromSconds = Reminder  ;

    cout << DaysFromSconds << " : " <<
            HoursFromSconds << " : " <<
            MinutsFromSconds << " : " << 
            ScondFromSconds <<endl;

}

int main(){

    int TotalSconds ;

    cout << "Pleas Enter The TotalSconds : " << endl ;
    cin >> TotalSconds ;

     ChangesSecondsToDaysHorsMinutesSeconds(TotalSconds);

     return 0;
}