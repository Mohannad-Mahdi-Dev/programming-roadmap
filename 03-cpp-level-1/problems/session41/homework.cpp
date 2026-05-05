// Wirte a program using array and structure and functions to do the following :
// ************************************
/*
    FirstName : Mohannad
    LastName : Mahdi
    Age : 20 years.
    Phone : 111222333
//******************************* */

/*
    FirstName : Ameen
    LastName : Mahdi
    Age : 25 years.
    Phone : 444555666
//******************************* 
*/

#include<iostream>
using namespace std;

struct PersonInfo
{
    string FirstName ;
    string LastName;
    int Age ;
    int Phone;
};

void ReadPersonInfo(PersonInfo &Info){

    cout <<"Plase Enter The first Name : " <<endl;
    cin>>Info.FirstName;
    
    cout <<"Plase Enter The List Name : " <<endl;
    cin>>Info.LastName;
    
    cout <<"Plase Enter The Age  : " <<endl;
    cin>>Info.Age;

    cout <<"Plase Enter The Phone  : " <<endl;
    cin>>Info.Phone;

}

void PrintPersonInfo(PersonInfo Info){

    cout << "/n*************************************/n";

    cout << "The First Name : " << Info.FirstName << endl;
    
    cout << "The List Name : " << Info.LastName << endl;
    
    cout << "The Age  : " << Info.Age << endl;
    
    cout << "The Phone Number : " << Info.Phone << endl;

    cout << "/n*************************************/n";
}

void ReadPersonsInfo(PersonInfo Person[2]){

    ReadPersonInfo(Person[0]);
    ReadPersonInfo(Person[1]);
    
}

void PrintPersonsInfo(PersonInfo Person[2]){

    PrintPersonInfo(Person[0]);
    PrintPersonInfo(Person[1]);
}

int main(){

    PersonInfo Info[2] ;

    ReadPersonsInfo(Info);
    PrintPersonsInfo(Info);

    
    // Person1 the read and print in main 
    // ReadInfoPerson(Info[0]);
    // PrintInfoPerson(Info[0]);

}