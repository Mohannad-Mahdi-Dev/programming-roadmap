/*
    Problem:
Write a program to calculate the task duration in seconds and print it on screen
 Given the time duration of a task in the number of days, hours, minutes, and seconds,.
Input
2
5
45
35
Outputs
193,535 Seconds
*/
#include <iostream>
using namespace std ;

struct strTaskDuration {

    float NumberOfDays , NumberOfHours , NumberOfMinutes , NumberOfSeconds ;
};

int ReadPositiveNumber (string Message) 
{
    int Number = 0 ; 

    do{
        cout << Message <<endl;
        cin >> Number ; 
    }while(Number <= 0);

    return Number ;
}

strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration ;

    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days ? \n");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours ? \n");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minuts ? \n");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds ? \n");

    return TaskDuration ;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{

    int DurationInSeconds = 0 ;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60 ;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60 ;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60 ;
    DurationInSeconds += TaskDuration.NumberOfSeconds ;
           
    return DurationInSeconds ; 
}

int main(){
    
    cout << " Task duration In Seconds : " << TaskDurationInSeconds(ReadTaskDuration());

    return 0 ;
}