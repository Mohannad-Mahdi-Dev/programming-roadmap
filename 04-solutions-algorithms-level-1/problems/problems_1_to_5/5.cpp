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
    bool medium ; // or name : HasRecommendation 
};

stInfo ReadInfo(){

    stInfo Info ;

    cout << "Enter Your Age ? \n";
    cin >> Info.Age;

    cout << "Enter The Driver License ? \n";
    cin >> Info.HasDrivingLicense;

    cout << "Do you have a medium ?\n";
    cin >> Info.medium ;

    return Info ;
}

// Logic
bool IsAccepted(stInfo Info){

    // Exepretions 
    if(Info.medium){
        return true ;
    }else 
    {
        return (Info.Age >= 21 && Info.HasDrivingLicense == 1);
    }

}
// UI
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