// Nested Structures & Enums called (Enumerated Type)
#include <iostream>
using namespace std;

    enum enColor {Red, Green, Yellow, Blue };
    enum enGendor { Male, Female };
    enum enMaritalStatus {Single, Married};

    struct stAddress
    {
        string StreetName;
        string BuildingNo;
        string POBoX;
        string ZipCode;
    };

    struct stContactInfo 
    {
        string phone ;
        string Email ;
        
        stAddress Address ;
    };

    struct stPerson
    {
        string FirstName ;
        string LastName ;

        stContactInfo ContactInfo ;
        enGendor Gendor ;
        enColor FavourateColor ;
        enMaritalStatus  MaritalStatus ;

    };

    int main() {

        stPerson Person1 ;

        Person1.FirstName = "Mohannad Mahdi";
        Person1.LastName = "Mahdi";

        Person1.ContactInfo.Email = "website24434@gmail.com";
        Person1.ContactInfo.phone = 776893799;
        Person1.ContactInfo.Address.POBoX = "1111";
        Person1.ContactInfo.Address.ZipCode = "11100";
        Person1.ContactInfo.Address.StreetName = "street 24";
        Person1.ContactInfo.Address.BuildingNo = "333";

        Person1.Gendor = enGendor::Male;
        Person1.FavourateColor = enColor::Yellow ;
        Person1.MaritalStatus = enMaritalStatus::Single ;


        cout << Person1.FirstName <<endl;
        cout << Person1.LastName <<endl;

        cout << Person1.ContactInfo.Email <<endl;
        cout << Person1.ContactInfo.phone <<endl;
        cout << Person1.ContactInfo.Address.POBoX <<endl;
        cout << Person1.ContactInfo.Address.ZipCode <<endl;
        cout << Person1.ContactInfo.Address.StreetName <<endl;
        cout << Person1.ContactInfo.Address.BuildingNo <<endl;
       
        cout << Person1.Gendor <<endl;
        cout << Person1.MaritalStatus <<endl;

        return 0;

    }
