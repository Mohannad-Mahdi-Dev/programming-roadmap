#include <iostream>
using namespace std;

struct stAddress{

    string street;
    string postbox;
};

struct StOwoner{

    int phoneNumber;
    string name;
    string email;
    stAddress Address;
};

struct Car {
    string brand ;
    string model;
    int year;
    StOwoner owoner;
    
};



int main(){

Car MyCar1 , MyCar2 , z ;

// infoCar MYCar1 
MyCar1.brand = "totyta";
MyCar1.model = "x6";
MyCar1.year= 2026;


//info Car 2

MyCar2.brand = "BMW";
MyCar2.model = "z10";
MyCar2.year = 2030;
MyCar2.owoner.name = "mohannad Mahdi";
MyCar2.owoner.phoneNumber = 776893799;
MyCar2.owoner.Address.street = "24";


cout << " The Brand Car is " << MyCar1.brand << endl;
cout << " The Model Car is " << MyCar1.model << endl;
cout << " The Model Car is " << MyCar1.year << endl;

cout << "\n";

cout << " The Brand Car is " << MyCar2.brand << endl;
cout << " The Model Car is " << MyCar2.model << endl;
cout << " The Model Car is " << MyCar2.year << endl;
cout << " The Model Car is " << MyCar2.owoner.name << endl;

}