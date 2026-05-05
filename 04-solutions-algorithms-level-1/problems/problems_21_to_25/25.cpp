/*
Problem:
    Write a program to ask the user to enter :
    • Age
    If age is between 18 and 45 print “Valid Age” otherwise print
    “Invalid Age”
*/
#include <iostream>
using namespace std ;

int ReadAge()
{
    int Age ;
    cout << "Please Enter Your Age between 18 to 45 ? \n";
    cin >> Age ;

    return Age ;
}

bool ValidateNumberInRange(int Number , int From , int To )
{
    return (Number >= From && Number <= To ) ;
}

int ReadUntilAgeBetween( int From , int To){
    
    int Age = 0;

    do{
        Age = ReadAge();
    }while(!ValidateNumberInRange(Age , From , To));

    return Age ;
}
void PrintResult(int Age)
{
    cout << "Your Age is : "<< Age <<endl;
}

int main(){
    
    PrintResult(ReadUntilAgeBetween(18 , 45));
    
    return 0; 
}