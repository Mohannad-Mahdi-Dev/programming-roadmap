#include<iostream>
using namespace std;

struct InformationPerson {

    // variables 
    string fullName ;
    string email;
    int age ;
    int phone;
};

// procured no return value 
// Variables drvied variable is function 
void ReadInfo(InformationPerson &Info){

    cout << "Place Enter the FullName : "<< endl;
    cin>> Info.fullName;
    
    cout << "Place Enter the Email : "<< endl;
    cin>> Info.email;
    
    cout << "Place Enter the Age : "<< endl;
    cin>> Info.age;
    
    cout << "Place Enter the Phone : "<< endl;
    cin>> Info.phone;

}

void PrintInfo(InformationPerson Information){

    cout <<"---------------------------------"<<endl;
    
    cout << "the FullName : "<< Information.fullName << endl;
    
    cout << "the Email : "<< Information.email << endl;
    
    cout << " the Age : "<< Information.age << endl;
    
    cout << " the Phone : "<< Information.phone << endl;
    
    cout <<"---------------------------------"<<endl;

}

// void EditInfo(InformationPerson Edit){

// }

int main(){
// by value and by refrence 
    // instance copy from the function (Person1).

    InformationPerson Person1;

    ReadInfo(Person1); // no (&) in function ReadInfo  no store value  why ... 
    PrintInfo(Person1);// no (&) in function PrintInfo  no  Print value   why ... 

    
    // Re-usability of code 
    InformationPerson Person2;
    ReadInfo(Person2);
    PrintInfo(Person2);

}