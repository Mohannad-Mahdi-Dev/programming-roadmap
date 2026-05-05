// Write a Program using array and structures and functions for N Persons to do the following : 
// 
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

void ReadPersonsInfo(PersonInfo Person[100] , int& NumberOfPersons ){

      
    cout << "Plase Enter The Number Persons : "<<endl;
    cin >> NumberOfPersons ;

    for (int x = 0 ; x <= NumberOfPersons -1 ; x++ )
    {
        cout << "Plase Enter Persons "<< x + 1 << " Info " <<endl;
        ReadPersonInfo(Person[x]);
        cout << "\n";

    }

}

void PrintPersonInfo(PersonInfo Info){

    cout << "\n*************************************\n";
    
    cout << "The First Name : " << Info.FirstName << endl;
    
    cout << "The List Name : " << Info.LastName << endl;
    
    cout << "The Age  : " << Info.Age << endl;
    
    cout << "The Phone Number : " << Info.Phone << endl;
    
    cout << "*************************************\n";
}


void PrintPersonsInfo(PersonInfo Person[100] , int NumberOfPersons){


    for (int i = 0 ; i <= NumberOfPersons - 1; i++){

        cout << " Person " << i + 1 << " ? "; 
        PrintPersonInfo(Person[i]);
    }
    
}

int main(){

    PersonInfo Info[100];
    int NumberOfPersons = 1 ;
    ReadPersonsInfo(Info , NumberOfPersons);
    PrintPersonsInfo(Info, NumberOfPersons);

    // Person1 the read and print in main 
    // ReadInfoPerson(Info[0]);
    // PrintInfoPerson(Info[0]);
}