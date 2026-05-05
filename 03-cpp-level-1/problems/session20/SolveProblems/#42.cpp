#include <iostream>
using namespace std;
/*
    Problem:
    Write a program to calculate the task duration in seconds and print it on screen
    -> Given the time duration of a task in the number of days, hours, minutes, and seconds,.
    Input
    2
    5
    45
    35
    Outputs ->
    193,535 Seconds

*/
int main(){

    // int NumberOfDayes;
    // int NumberOfHours;
    // int NumberOfMinuts;
    // int NumberOfSeconds;
    
    // int TotalSeconds;

    // cout << "Please Enter The NumberOfDayes : " <<endl;
    // cin >> NumberOfDayes;
    
    // cout << "Please Enter The NumberOfHours: " <<endl;
    // cin >> NumberOfHours;
    
    // cout << "Please Enter The NumberOfMinuts : " <<endl;
    // cin >> NumberOfMinuts;
   
    // cout << "Please Enter NumberOfSeconds : " <<endl;
    // cin >> NumberOfSeconds;

    // TotalSeconds = 
    // (NumberOfDayes * 24 * 60 * 60) +
    // (NumberOfHours * 60 * 60) +
    // (NumberOfMinuts  *60) +
    // NumberOfSeconds ;

    // cout << TotalSeconds <<endl;

    //

    int numberofday;
    int numberofhours;
    int numberofminuts;
    int numberofseconds;

    cout <<"enter the duration days"<<endl;
    cin>>numberofday;
    
    cout <<"enter the duration dours"<<endl;
    cin>>numberofhours;

    cout <<"enter the duration minuts"<<endl;
    cin>>numberofminuts;

    cout <<"enter the duration seconds"<<endl;
    cin>>numberofseconds;


    double totalday = numberofday *24*60*60;
    double totalhours = numberofhours*60*60;
    double totalminuts = numberofminuts*60;

    double totalSeconds = totalday + totalhours + totalminuts + numberofseconds;

    cout<< "Totla of Seconds is = "<< totalSeconds << endl;


}