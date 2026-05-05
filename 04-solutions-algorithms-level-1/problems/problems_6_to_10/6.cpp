/*
    Wite a  program to Enter The Full Name than , Print on the screen. use the function
*/
#include <iostream>
using namespace std ;

struct stInfo
{
    string FirstName ;
    string LastName ;
};

stInfo ReadInfo (){

    stInfo Info ;

    cout << "Enter The First Name :"<<endl;
    cin >> Info.FirstName ;
    

    cout << "Enter The List Name :"<<endl;
    cin >> Info.LastName ;

    return Info ;

};

// Logic 
string GetFullName(stInfo Info , bool Reversed){

    string FullName = "" ;
    
    if(Reversed)

    FullName = Info.LastName + " " + Info.FirstName ;

    else 
    FullName = Info.FirstName + " " + Info.LastName ;

    return FullName ;
}
// function procured
void PrintFullName (string FullName ){

    cout << "your full name is " << FullName <<endl;    
}
int main(){
    
    PrintFullName(GetFullName(ReadInfo(), false));
}