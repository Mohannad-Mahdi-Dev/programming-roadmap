/*
    Write a program Read Name and Print It
*/
#include <iostream>
using namespace std ;

string ReadName(){

    string Name;
    cout << "Enter Your Name ? " << endl;
    // print all my name
    getline(cin , Name);

    return Name ;

}

void PrintName(string Name){

    cout << "Your Name is : " <<  Name <<endl;
    
}

int main(){
    
     PrintName(ReadName()) ;

    //  cout << ReadName() ;
     return 0 ;

}   