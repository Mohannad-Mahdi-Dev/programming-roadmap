/*
    Problem:
Write a program to ask the user to enter:
• Day
Then print the day as follows:
• 1 Print Sunday
• 2 Print Monday
• 3 Print Tuesday
• 4 Print Wednesday
• 5 Print Thursday
• 6 Print Friday
• 7 Print Saturday
• Otherwise print “Wrong Day” and ask the use to enter the day again.
Example Inputs:
6
Outputs
Its Friday
*/
#include <iostream>
using namespace std ;

enum enDayOfWeek { saturday = 1 , sunday = 2 , monday = 3 , Tuosday = 4 , Weidnsday = 5 , Thrusday = 6 , Friday = 7 };

int ReadNumberInRange(string Message , int From , int To) 
{
    int Number ; 
    
    do{
        
    cout << Message <<endl;
    cin >> Number ;

    }while(Number < From || Number > To);

    return Number ;
}

enDayOfWeek ReadWeekOfDay ()
{
    return (enDayOfWeek) ReadNumberInRange(" Please Enter a Number Day ? " , 1 , 7) ;
}

string GetDayOFWeek (enDayOfWeek Day )
{
    switch (Day)
    {
    case enDayOfWeek::saturday :
        return "Saturday";
        break;
    case enDayOfWeek::sunday :
        return "sunday";
        break;
    case enDayOfWeek::monday :
        return "monday";
        break;
    
    case enDayOfWeek::Tuosday :
        return "Tuosday";
        break;
    
    case enDayOfWeek::Weidnsday :
        return "Weidnsday";
        break;
    
    case enDayOfWeek::Thrusday :
        return "Thrusday";
        break;
    
    case enDayOfWeek::Friday :
        return "Friday";
        break;
    
    default:
        return "Not a valid Day ";
        break;
    }
}

int main(){
  
    cout << GetDayOFWeek(ReadWeekOfDay()) <<endl;
    return 0 ;
}