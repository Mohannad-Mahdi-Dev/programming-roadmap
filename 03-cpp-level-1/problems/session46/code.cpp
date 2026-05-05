// Nested Function with Enums
#include<iostream>
using namespace std;

enum enWeekDay { Sun= 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thresday = 5, Friday = 6, Saturday = 7};

void ShowWeekDayMenue(){

    cout << "*********************************\n";
        
    cout << "1: Sunday\n";
    cout << "2: Monday\n";
    cout << "3: Tuesday\n";
    cout << "4: Wednesday\n";
    cout << "5: Thrusday\n";
    cout << "6: Friday\n";
    cout << "7: Saturday\n";

    cout << "*********************************\n";

    }

    enWeekDay ReadWeekday(){
    
    int day; 
    cout << " Plase Enter The number of day: \n";
    cin >> day;   
       return (enWeekDay) day ;
    }
    string GetWeekDay(enWeekDay WeekDay){
    
        switch(WeekDay){
            
        case enWeekDay::Sun : return "Sunday \n"; 
        break;
            
        case enWeekDay::Monday : return "Monday \n"; 
        break;
        
        case enWeekDay::Tuesday : return "Tuesday \n"; 
        break;
        
        case enWeekDay::Wednesday : return "Wednesday \n"; 
        break;
        
        case enWeekDay::Thresday : return "Thrusday \n"; 
        break;
    
        case enWeekDay::Friday : return "Friday \n"; 
        break;
        
        case enWeekDay::Saturday : return "Saturday \n"; 
        break;
        
        default : return "Wrong Day!\n";
        }
    }

int main(){


    ShowWeekDayMenue();
    cout << GetWeekDay(ReadWeekday()) << endl;

    return 0;
}