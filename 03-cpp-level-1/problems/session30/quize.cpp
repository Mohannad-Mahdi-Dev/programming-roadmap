#include <iostream>
#include <string>
using namespace std; 

// Datatype Conversion / casting data 


int main(){
// convert string to intger 
int num1 ;

float num2 = 100.500;

 num1 = int(num2);

 cout << "num 1 = " << num1 <<endl;

string num = "200.500";

 
// convert string to intger
int num_int = stoi(num);

// convert string to float 
float num_float = stof(num);

// convert string to double 
double num_double = stod(num);

cout<<"number intger = "<< num_int << endl; //  
cout<<"number float = "<< num_float << endl; //  
cout<<"number double = "<< num_double << endl; //

}