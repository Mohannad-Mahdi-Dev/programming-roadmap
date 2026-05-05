#include <iostream>
#include <string>
using namespace std;
/*
    Write a program to do the following :

    -convert string st1 = "43.22" to double, float, and int .
    -convert integer N1 = 20 to string .
    -convert double N2 = 33.5 to string .
    -convert float N3 = 55.23 to string, and integer .

*/
int main(){

    //Question 1

     string st1 = "43.22" ;

     int num_double = stod(st1);
     int num_float = stof(st1);
     int num_int = stoi(st1);

     cout << " The num_double = " << num_double <<endl;// 43
     cout << " The num_float  = " << num_float <<endl; // 43
     cout << " The num_int    = " << num_int <<endl; //   43


    
    //Question 2
    int N1 = 20;

    string stoi ;
    stoi = to_string(N1);

    cout << "Convert Integer to String = " << stoi  <<endl;

    //Question 3 
    double N2 = 33.5 ;

    string stod ;

    stod = to_string(N2);

    cout << "Convert double to string = " << stod <<endl;

    // Question 4 

    float N_, N__, N___ ;
    float N3 = 55.23;

   // 1

    string stof ;
    stof = to_string(N3);

    cout << "Convert float to  string = " << stof <<endl;

    // 2

    N_ = N3 ; // implecit
    N__ =  (int) N3 ; // Explict
    N___ =  int(N3); // Explict

    cout << N_ <<endl;
    cout << N__ <<endl;
    cout << N___ <<endl;


}