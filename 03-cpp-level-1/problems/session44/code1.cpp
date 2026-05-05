// copy from gemini
#include <iostream>
using namespace std;

// تعريف Enum للدول
// أعطينا كل دولة رقماً تعريفياً يبدأ من 1
enum enCountry { Palestine = 1, SaudiArabia = 2, Egypt = 3, Yemen = 4 };

int main() {
    cout << "****************************\n";
    cout << "Select a country to see its capital:\n";
    cout << "(1) Palestine\n";
    cout << "(2) Saudi Arabia\n";
    cout << "(3) Egypt\n";
    cout << "(4) Yemen\n";
    cout << "****************************\n";
    cout << "Your Choice: ";

    int choice;
    cin >> choice;

    // السطر الذي يحتاج فهم: عملية التحويل (Casting)
    enCountry selectedCountry = (enCountry)choice;

    cout << "\nThe Capital is: ";

    switch (selectedCountry) {
        case enCountry::Palestine:
            cout << "Jerusalem (Al-Quds)";
            break;
        case enCountry::SaudiArabia:
            cout << "Riyadh";
            break;
        case enCountry::Egypt:
            cout << "Cairo";
            break;
        case enCountry::Yemen:
            cout << "Sanaa";
            break;
        default:
            cout << "Unknown choice!";
            break;
    }

    cout << "\n****************************\n";

    return 0;
}