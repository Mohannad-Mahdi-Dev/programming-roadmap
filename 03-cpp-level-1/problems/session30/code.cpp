//DataType Conversion : Casting Data ;

#include <iostream>
#include <string>
using namespace std ;

int main(){

    int Num1 ;
    double Num2 = 18.90 ;

    //Num1 = Num2 ; // Implecit Conversion fron doubel to int 

    //Num1 = (int) Num2 ; // Explicit Conversion

    Num1 = int(Num2) ; // Explicit Conversiton

    cout << Num1 <<endl;

    cout << "------------------------------------"<<endl;

    string str = "123.456";

    // convert string to Integer
    int num_int = stoi(str);

    //conert string to float
    float num_float = stof(str);

    //convert string to double
    double num_double = stod(str);

    cout <<"num_int = " << num_int <<endl;
    cout <<"num_float = " << num_float <<endl;
    cout <<"num_double = " << num_double <<endl;


    cout << "------------------------------------"<<endl;

    // int Num1 = 123 ;
    // double Num2 = 18.90;

    //Convert Integer to String 
    string st1, st2 ;
    st1 = to_string(Num1);
    st2 = to_string(Num2);

    cout << st1 <<endl;
    cout << st2 <<endl;

}