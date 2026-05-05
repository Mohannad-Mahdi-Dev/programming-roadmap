//Structures
/*
    What is structure?

    C++ Structures
    Structures (also called structs) are a way to group serveral related variables into one place.
    Each variable in the structure is known as a member of the structure.
    
*/
#include <iostream>
using namespace std;

struct StAddress // from Type :  Data Type .
{
    string  Street1;
    string POBOX ;

};

struct stOwner
{
    string FullName ;
    int phone ;
    StAddress Address;


};

struct Car 
{
    string Brand;
    string Model;
    int Year ;
    stOwner Onwer ; 
    
};

int main(){
 // type Data type -> Car
    Car  MyCar1 , MyCar2, x ;
    MyCar1.Brand = "Toyota";
    MyCar1.Model = "X5";
    MyCar1.Year = 2022;

    //cin >> MyCar1.Brand ;
   
    MyCar2.Brand = "BMW";
    MyCar2.Model = "X3";
    MyCar2.Year = 2020;
    
    x.Brand = "yairs" ;
    x.Brand = "atotmatec" ;
    x.Year = 2020 ;

    MyCar1.Onwer.FullName = "Mohannad Mahdi";
    MyCar1.Onwer.phone = 77689799;
    // MyCar1.Onwer.Address= " shamlan";
    MyCar1.Onwer.Address.POBOX = "Sana'a";
    MyCar1.Onwer.Address.Street1 = " 24 " ;

    cout << " The Brand =  " << MyCar1.Brand <<endl;
    cout << " The Model =  " << MyCar1.Model <<endl;
    cout << " The year =  " << MyCar1.Year <<endl;

    cout << " The Brand =  " << MyCar2.Brand <<endl;
    cout << " The Model =  " << MyCar2.Model <<endl;
    cout << " The year =  " << MyCar2.Year <<endl;

    cout << MyCar1.Brand << "  " << MyCar1.Model << " " << MyCar1.Year << "\n";

    cout << MyCar2.Brand << "  " << MyCar2.Model << " " << MyCar2.Year << "\n";

    cout << MyCar1.Onwer.FullName <<endl;
    cout << MyCar1.Onwer.phone <<endl;

    return 0;

}