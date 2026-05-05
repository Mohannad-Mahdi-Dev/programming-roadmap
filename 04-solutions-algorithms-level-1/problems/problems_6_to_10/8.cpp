/*
    Write a program ask the user to enter the a mark. (mark pass Fail)
    than , Print Pass if >=50 otherwise print fail.
*/
#include <iostream>
#include <string>
using namespace std ;
// develobment code 

enum enPassFail { Pass = 1 , Fail = 2};

int ReadNumber(){

    int Mark ;
    cout << "Enter the mark : " <<endl;
    cin >> Mark ;
    
    return Mark ;
}

enPassFail CheckMark(int Mark){

    
    if (Mark >= 50)
    return enPassFail::Pass ;
    else 
    return enPassFail::Fail ;

}

void PrintResults (int Mark){
 
    if (CheckMark(Mark) == enPassFail::Pass )
    cout << "\n you Pass \n";
    else 
    cout << "\n you Fail \n"; 
}
int main(){
    
    PrintResults(ReadNumber());
}