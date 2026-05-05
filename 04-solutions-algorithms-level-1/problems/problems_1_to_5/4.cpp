/*
    Write a program to ask the user to enter his/her:
    .Age 
    .Driver License 

    then Print "Hired" if his\her age is grater than 21 and s/he has a driver license, 
    otherwise print "Rejected"

*/
#include <iostream>
using namespace std ;

struct stInfo{

    int Age ;
    bool HasDrivingLicense;
};

stInfo ReadInfo(){

    stInfo Info ;

    cout << "Enter Your Age ? \n";
    cin >> Info.Age;

    cout << "Enter The Driver License ? \n";
    cin >> Info.HasDrivingLicense;

    return Info ;

}

bool IsAccepted(stInfo Info){

    // Exepretion 
    return (Info.Age >= 21 && Info.HasDrivingLicense == 1);

}

void PrintInfo (stInfo Info){

    if(IsAccepted(Info))
     {
        cout << " Hired \n";
    }else {
        cout << " Rejected \n";
    }

}

int main(){    
    
    PrintInfo(ReadInfo());
}