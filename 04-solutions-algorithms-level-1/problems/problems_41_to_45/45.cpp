/*
    Problem:
Write a program to ask the user to enter:
• Month
Then print the day as follows:
• 1 Print January
• 2 Print February
• 3 Print March
• 4 Print April
• 5 Print May
• 6 Print June
• 7 Print July
• 8 Print August
• 9 Print September
• 10 Print October
• 11 Print November
• 12 December
• Otherwise print “Wrong Month” and ask the use to enter the Month again.
Example Inputs:
11
Outputs
November
*/
#include <iostream>
using namespace std ;

enum enMonthOfYears { January = 1 , February = 2 , March = 3 , April = 4 , May = 5 , June = 6 , July = 7 , August = 8 , September = 9 , October = 10 , November = 11 , December = 12 };

int ReadNumberInRange(string Message , int From , int To) 
{
    int Number = 0 ;

    do{
        cout << Message <<endl;
        cin >> Number ;
    }while(Number < From || Number >To);

    return Number ;
}

int ReadMonthOfYears()
{
     return (enMonthOfYears)ReadNumberInRange("Please Enter a Month Day ? ", 1, 12);
}

string GetMonthOfDay (int Month) 
{
    switch (Month)
    {
    case enMonthOfYears::January :
        return "January";
        break;
    case  enMonthOfYears::February :
        return "February";
        break;
    case enMonthOfYears::March : 
        return "March";
        break;
    case enMonthOfYears::April : 
        return "April";
        break;
    case enMonthOfYears::May : 
        return "May";
        break;
    case enMonthOfYears::June : 
        return "June";
        break;
    case enMonthOfYears::July : 
        return "July";
        break;
    case enMonthOfYears::August : 
        return "August";
        break;
    case enMonthOfYears::September : 
        return "September";
        break;
    case enMonthOfYears::October : 
        return "October";
    case enMonthOfYears::November :
        return "November";
    case enMonthOfYears::December :
        return "December";
    default:
        return "value vlaid Month \n"; 
        break;
    }
}

int main(){
 
    cout << GetMonthOfDay(ReadMonthOfYears());

    return 0 ;
}