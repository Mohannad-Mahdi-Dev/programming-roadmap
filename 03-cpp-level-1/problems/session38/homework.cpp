#include <iostream>
using namespace std;

// enum enGender {male , female};
// enum enMaritalStatus{Married , Single };

struct MyInfoPerson {

    string name ;
    int Age ;
    string city ;
    string country;
    double MonthlaySalary;
    double YearlaySalary;
    // enGender = Gender;
    // enMaritalStatus = Status;
    char Gender;
    bool Married;

};

void ReadMyInfoPerson (MyInfoPerson &Info){

    // string name ;
    cout << "Enter the Name : " <<endl;
    cin>>Info.name;
    cout << "Enter the Age : " <<endl;
    cin>>Info.Age;
    cout << "Enter the City : " <<endl;
    cin>>Info.city;
    cout << "Enter the Country : " <<endl;
    cin>>Info.country;
    cout << "Enter the MonthlaySalary : "<<endl;
    cin>>Info.MonthlaySalary;
    cout << "Enter the YearlySalary : " <<endl;
    cin>>Info.YearlaySalary;
    cout << "Enter the Gender : "<<endl;
    cin>>Info.Gender;
    cout << "Enter the Married : "<<endl;
    cin>>Info.Married;
}

// void EditInfoPerson(){

// }
void  PrintMyInfoPerson(MyInfoPerson Info){
   
    cout << "Enter the Name : "<< Info.name <<endl;
    cout << "Enter the Age : "<< Info.Age <<endl;
    cout << "Enter the City : "<< Info.city <<endl;
    cout << "Enter the Country : "<< Info.country <<endl;
    cout << "Enter the MonthlaySalary : "<< Info.MonthlaySalary <<endl;
    cout << "Enter the YearlySalary : "<< Info.YearlaySalary <<endl;
    cout << "Enter the Gender : "<< Info.Gender <<endl;
    cout << "Enter the Married : "<< Info.Married <<endl;
}
int main(){

    MyInfoPerson myPerson;
    ReadMyInfoPerson(myPerson);
    PrintMyInfoPerson(myPerson);

    // Re-usability
    MyInfoPerson Person1;
    ReadMyInfoPerson(Person1);
    PrintMyInfoPerson(Person1);
    
}