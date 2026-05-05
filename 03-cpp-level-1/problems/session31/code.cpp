// String 
/*
    What is String ? 

    A string variable contains a collection of characters surrounded by double quotes.
    
    String is Array of Characters.
*/
#include <iostream>
#include <string> 
using namespace std;

int main(){

    string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout <<"The length of the MyString is : " <<MyString.length() <<endl;// : 26

    cout << MyString[2] <<endl; // C

    // string S1 = "AB", S2 = "CD";// Error with convert string to intger 
    string S1 = "10", S2 = "20";// Contcnation 

    string S3 = S1 + S2 ;
    cout << S3 <<endl; // will print  1020

    // convert string to intgers
    int sum = stoi(S1) + stoi(S2);

    cout << "S1 + S2 = " << sum <<endl;

    // Read String With Spaces 

    string fullName ;

    cin >> fullName;

    getline(cin  , fullName );
    
    cout << fullName  <<endl;

    return 0;



}