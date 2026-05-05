#include <iostream>
#include <string>
using namespace std;


enum enWeekDay { Sun = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };

void ShowWeekDayMenue() {
    cout << "*********************************\n";
    cout <<" Week Days ";
    cout << "*********************************\n";
    cout << "1: Sunday\n";    
    cout << "2: Monday\n";
    cout << "3: Tuesday\n";
    cout << "4: Wednesday\n";
    cout << "5: Thursday\n";
    cout << "6: Friday\n";
    cout << "7: Saturday\n";
    cout << "*********************************\n";
}

enWeekDay ReadWeekday() {
    int day;
    cout << "Please Enter The number of day: ";
    cin >> day;
    return (enWeekDay)day; // تحويل الرقم المدخل إلى نوع الـ Enum
}


string GetWeekDayName(enWeekDay WeekDay) {
    switch (WeekDay) {
    case enWeekDay::Sun:       return "Today is: Sunday";
    case enWeekDay::Monday:    return "Monday";
    case enWeekDay::Tuesday:   return "Tuesday";
    case enWeekDay::Wednesday: return "Wednesday";
    case enWeekDay::Thursday:  return "Thursday";
    case enWeekDay::Friday:    return "Friday";
    case enWeekDay::Saturday:  return "Saturday";
    default:                   return "Wrong Day!";
    }
}

int main() {
    ShowWeekDayMenue();

    // استدعاء متداخل
    cout << GetWeekDayName(ReadWeekday()) << endl;

    return 0;
}