// Solve getline(); problem
#include <iostream>
#include <string>
using namespace std;

int main(){

    int Number;
    string Name;
    string Country;

    cout << "Please Enter Employee Number?\n"<<endl;
    cin >> Number ;
    
    cout << "Please Enter  Name?\n"<<endl;
    cin.ignore(1, '\n');
    getline(cin , Name);

    cout << "Please Enter  Country?\n"<<endl;
    cin >> Country ;

    // int get =  getline(cin , Name); 

    cout << "Number : " << Number << " Name : " << Name << " Country : " << Country <<endl;
    
}
