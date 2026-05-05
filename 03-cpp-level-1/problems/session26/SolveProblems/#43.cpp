#include <iostream>
#include <cmath>
using namespace std;
/*
    Problem:
    Write a program that inputs the number of seconds and changes it to days, hours, minutes, and secondsInput
    193,535
    Output->
    2:5:45:35
*/
int main(){

    int  TotalScond ;
    int  NumberPerDay = 24 *60 *60 ;
    int  NumberPerHours = 60 *60;
    int  NumberPerMinuts = 60;
    int  NumberPerScond ;
    int  Remainder;
    cout << "Please Enter the Total Sconds : " <<endl;
    cin >> TotalScond ;

    // processing
    int NumberOfDay = TotalScond / NumberPerDay;
    Remainder =  TotalScond % NumberPerDay;
    int NumberOfHours = Remainder / NumberPerHours ;
    Remainder = Remainder % NumberPerHours;
    int NumberOfMinuts = Remainder / NumberPerMinuts ;
    Remainder = Remainder % NumberPerMinuts;
    int NumberOfScond = Remainder;

    cout << NumberOfDay << " : " << NumberOfHours << " : " << NumberOfMinuts << " : " << NumberOfScond <<endl;
    //cout << round(NumberOfDay) << " : " << round(NumberOfHours) << " : " << round(NumberOfMinuts) << " : " << round(NumberOfScond) <<endl;


}   