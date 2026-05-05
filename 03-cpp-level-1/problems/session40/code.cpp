// Arrays with functions
#include <iostream>
using namespace std;

// int numarray[5];
void Readarrayparameter(int x[3]){
    
    cout << "Enter The num 1"<<endl;
    cin >> x[0];
    
    cout << "Enter The num 2"<<endl;
    cin >> x[1];
    
    cout << "Enter The num 3"<<endl;
    cin >> x[2];

    int sum = x[0] + x[1] + x[2];

    cout << "The Sum Number is : "<< sum <<endl;
    
    // return sum;
}

   void PrintArrayParameter (int x[3]){

    cout << "the num 1 : "<< x[0] <<endl;
    cout << "the num 2 : "<< x[1] <<endl;
    cout << "the num 3 : "<< x[2] <<endl;

}
int main(){

    int x[3];

    Readarrayparameter(x);
    PrintArrayParameter(x);

    return 0;
     
}