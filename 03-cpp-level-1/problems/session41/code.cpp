// Array Of Structure ? How to ...
#include <iostream>
using namespace std;

struct StrInfo {
    string firstname;
    string lastname;
    int age;
    int phone;
    string email;
};



int main(){

     StrInfo Info[2];

    Info[0].firstname = "mohannad";
    Info[0].lastname = "mahdi";

    cout << "The First Name is : " << Info[0].firstname <<endl;
    cout << "The Last Name is : " << Info[0].lastname <<endl;

}  