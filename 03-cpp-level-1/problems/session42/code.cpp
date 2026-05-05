//  (conditional ) If Statument IF and IF ...Else
#include<iostream>
using namespace std;
/*
    Syntax : IF 
    if(condition == True)
    {
        // body of if code...
    }
        // Rest of program code...

    Syntax : If else Stutment

    if(condition == True)
    {
        // if body  executes only if true code...
    }else 
    {
        // if body executes only if false code...
    }
*/

int main(){

    int num = 10 ;

    if(num > 5)
    {
        cout<< "The Code if of body has executed ." <<endl;
    }

    cout << " The Code after if body always executed." <<endl;

    
    if (num > 10)
    {
        cout << "The Code of if body has executed ." <<endl;
    }

    cout << " The Code after if body always executed." <<endl;
    
    // if from type logicla  
    if (num >= 5 && num < 10)
    {
        cout << "The Code of if body has executed ." <<endl;
    }

    cout << " The Code after if body always executed." <<endl;


    // if esle...

    int number;

    cout << "Plase Enter your number grator than 5 : " << endl;
    cin >> number ;
    
    if ( number > 5 )
    {
        cout << " yes , number is grator than 5 " << endl;

    }else 
    {
        cout << " No , Number is less than 5 " <<endl;
    }
    
    cout << " The Code after if body always executed " <<endl;

     return 0;
}