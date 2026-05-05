// Write Programs to do the following :

#include <iostream>
using namespace std;


struct ContectInformation 
{
    int phone ;
    string Email ;
    string University ;
    string Email_University ;
};

struct MyAddress
{
    string street;
    string address;
};

struct Information 
{
    string Name ;
    int age ;
    string City ;
    string Country ;
    double MonthlySalary ;
    double YearlySalary ;
    char Gender ;
     bool Married ;
     MyAddress Address;
    ContectInformation myInformation ;

     
};

int main(){

    Information myslef ;

    myslef.Name = "Mohannad Mahdi" ;
    myslef.age = 20;
    myslef.City = "Sana'a";
    myslef.Country = "Yemen";
    myslef.Married = 0;
    myslef.Gender = 'M';
    myslef.MonthlySalary = 0.0;
    myslef.YearlySalary = 0.5;

    myslef.Address.address = "Shamlan";
    myslef.Address.street = "24";

    myslef.myInformation.phone = 776893799;
    myslef.myInformation.Email = "website24434@gmail.com";
    myslef.myInformation.University = "ALNASSER UNIVERISTY";
    myslef.myInformation.Email_University = "...";

    cout << "-------------------------------------" <<endl;
    cout << "Name : " << myslef.Name <<endl;
    cout << "Age : " << myslef.age <<endl;
    cout << "City : " << myslef.City <<endl;
    cout << "Country : " << myslef.Country <<endl;
    cout << "Married : " << myslef.Married <<endl;
    cout << "Gender : " << myslef.Gender <<endl;
    cout << "MenthlySalary : " << myslef.MonthlySalary <<endl;
    cout << "YearlySalary : " << myslef.YearlySalary <<endl;
    cout << "-------------------------------------" <<endl;

    cout << " My Address : " << myslef.Address.address << endl;
    cout << " My Street  : " << myslef.Address.street << endl;
     cout << "-------------------------------------" <<endl;

    cout << " My Phone Number : " << myslef.myInformation.phone << endl;
    cout << " My Email : " << myslef.myInformation.Email << endl;
    cout << " My Uniersity : " << myslef.myInformation.University << endl;
    cout << " My Email Uniersity : " << myslef.myInformation.Email_University << endl;
    cout << "-------------------------------------" <<endl;

    
}