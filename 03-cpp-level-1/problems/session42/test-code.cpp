#include<iostream>
using namespace std;

int main(){
    
    // Question 4

    int Age ;
    bool DriverLicense ;

    cout << "Plase , Enter The age : " << endl;
    cin >> Age ;

    cout << "Plase , Enter The Driver License Yes : 1 or No : 0 : " << endl;
    cin >> DriverLicense;

    if(Age >= 21 && DriverLicense == 1)
    {
        cout << " Hired " << endl;
    }else 
    {
        cout << " Rejected " << endl;
    }
}
