// wirte a program to do the following :

/*
    Pleas Enter String1 ?
    Mohannac Mahdi

    Please Enter String2 ?
    5

    Please Enter Strign3 ?
    10

    ************************************************
    The length of String is 20 
    Characters ot 0,2,4,7 are: M h m d 
    Concatenating String 2 and String3 = 510
    5 * 10 = 50 
*/
#include <iostream>
#include <string>
using namespace std;

int main(){

    string  MyName , string1 , string2 ;

    cout << "Please Enter the Name String 1 : " <<endl;
    // cin >> MyName ;  
    getline( cin , MyName ); // spaces for the culcalat string 

    cout << "Please Enter The String 2" <<endl;
    cin >> string1 ;
    cout << "Please Enter The String 2" <<endl;
    cin >> string2 ;


    cout << "***************************************************"<<endl;
    cout << " The length of String is : " << MyName.length() << endl;

    // cout << "Characters ot 0,2,4,7 are : " <<  MyName [0] = {0, 2, 4, 7} << endl; // M h n d
       cout << MyName[0] << " "<< MyName[2] << " "<< MyName[4] << " "<< MyName[7] <<endl; // Mohannad Mahdi : M h n d 
    cout << "Concatenating String 2 and String3 : " << string1 + string2 <<endl; // 

    int Result = stoi(string1) * stoi(string2) ;
    // cout << "5 * 10 = " <<  Result <<endl; // 50
    cout << string1<< " * " << string2 << " = " <<  Result <<endl; // 50
    
}