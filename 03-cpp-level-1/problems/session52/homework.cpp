// Write a program to do the following : 
/*
    Defin an array integers contains 10 elements

    arr[10]= {10,20,30,40,50,66,77,88,99,100}
    Search of 20 and print its position , use for loop and break statement.
*/
#include <iostream>
using namespace std; 


int main(){

    int arr[10]= {10,20,30,40,50,60,70,80,90,100};

    int SearchFor = 20 ;

    for(int countr = 0 ; countr <= 10 ; countr++){ 

        cout << " we are at iteration " << countr + 1 <<endl;

        // more preformance
        if(SearchFor == arr[countr]){

            cout << endl << SearchFor << " found at position " << countr << "\n";
            break;
        }
    }
}