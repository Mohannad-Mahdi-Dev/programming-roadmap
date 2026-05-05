#include <iostream>
using namespace std;
/*
        Problem:
//Write a program to calculate the task duration in seconds and print it on screen
    Given the time duration of a task in the number of days, hours, minutes, and seconds,.
    Input
    2
    5
    45
    35
    Outputs->
    193,535 Seconds
*/
int main(){
    
    int NumberOfDays ;
    int NumberOfHours ;
    int NumberOfMinutes ;
    int NumberOfSeconds ;

    cout << "Enter The Number Of Days : " <<endl;
    cin >>NumberOfDays ;
    
    cout << "Enter The Number Of Hours : " <<endl;
    cin >>NumberOfHours ;

    cout << "Enter The Number Of Minutes : " <<endl;
    cin >>NumberOfMinutes ;

    cout << "Enter The Number Of Seconds: " <<endl;
    cin >>NumberOfSeconds ;

    double NumberPerDays = NumberOfDays * 24 * 60 * 60  ;
    double  NumberPerHours = NumberOfHours * 60 * 60  ;
    double  NumberPerMinuts = NumberOfMinutes * 60;
    double  NumberPerSconds ;
    double TotalSeconds = (NumberPerDays) + (NumberPerHours) + (NumberPerMinuts) + (NumberPerSconds) ;

    cout << "Total Seconds  = " << TotalSeconds << "Seconds" <<endl;


}