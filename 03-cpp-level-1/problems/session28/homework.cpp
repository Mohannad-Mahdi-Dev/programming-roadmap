//Write programs to do the following :

#include <iostream>
using namespace std;

int main(){

    string name = "Mohannad Mahdi";
    int Age  = 44 ;
    string City = " sanaa";
    string Country = "Yemen" ;
    double MonthlySalary = 1000;
    double YearlySalary = 6000;
    enum Gender  {M , F , Other};
    enum MateryStats  {mirred , single };

    Gender types;
    MateryStats stats ;

   types =  Gender::M ;
   stats = MateryStats::mirred ;

   cout << "The Type is : " << types <<endl;
   cout << "The stats is : " << stats <<endl;




    


}