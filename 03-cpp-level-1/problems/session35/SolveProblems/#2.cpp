#include <iostream>
#include <string>
using namespace std;

void YouName()
{
    string name;
    cout << "Please Enter The his/her Name : " <<endl;
    // cin >> name ;
    getline(cin , name); // fullName

    cout << name <<endl;
}

int main(){

    YouName();
}