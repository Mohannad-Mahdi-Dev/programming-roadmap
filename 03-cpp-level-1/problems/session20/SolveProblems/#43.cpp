#include <iostream>
#include <cmath>
using namespace std;

/*
    Problem:
    Write a program that inputs the number of seconds and changes it to days, hours, minutes, and secondsInput
    193,535
    Output ->
    2:5:45:35
*/
int main(){

    // int totalseconds ;

    // //dclear
    // int numberofday;
    // int numberofhours;
    // int numberofminuts;
    // int numberofseconds;

    // cout<<"enter the  totalsconds Numbers : "<<endl;
    // cin>>totalseconds;

    // int totalday;
    // totalday= 24*60*60;
    // int totalhours;
    // totalhours= 60*60;
    // int totalminits;
    // totalminits= 60;

    // int reminder;

    // numberofday = floor(totalseconds / totalday);
    // reminder = totalseconds % totalday;
    // numberofhours = floor(reminder / totalhours);
    // reminder = remainder % totalhours ;
    // numberofminuts = floor(remainder / totalminits);
    // reminder = remainder % totalminits ;
    // numberofseconds = remainder ;

    // cout << numberofday << " : " << numberofhours << " : " << numberofminuts << " : " << numberofseconds<< endl;


    int TotalSeconds ;
    // Dclear
    int NumberOfDayes;
    int NumberOfHours;
    int NumberOfMinuts;
    int NumberOfSecond;

    
    cout << "Please Enter The Total Sconds : " <<endl;
    cin >> TotalSeconds;
    
    //processing 
    int  ScondePerDayes ; 
    ScondePerDayes =   24 * 60 * 60 ;
    int  ScondePerHours;
    ScondePerHours =  60 * 60 ;
    int  ScondePerMinuts ;
    ScondePerMinuts  = 60 ;
    int Remainder ;

     NumberOfDayes = floor( TotalSeconds / ScondePerDayes); //
     Remainder = TotalSeconds % ScondePerDayes;
     NumberOfHours = floor( Remainder / ScondePerHours);// 
     Remainder = Remainder % ScondePerHours ;
     NumberOfMinuts = floor(Remainder / ScondePerMinuts);
     Remainder = Remainder % ScondePerMinuts ;
     NumberOfSecond = Remainder ;

     
     cout << NumberOfDayes << " : " << NumberOfHours << " : " << NumberOfMinuts << " : " << NumberOfSecond<<endl;
     
}