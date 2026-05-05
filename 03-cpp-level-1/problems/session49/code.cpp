// Nested Loop

#include<iostream>
using namespace std; 


int main(){

    // for(int i = 1 ; i <= 12 ; i++){
        
    //     cout << " i = " << i <<endl;

    //     for(int x = 1 ; x <= 12; x++){

    //         cout << i << " * " << x << " = " << i * x <<endl;
    //     }
    // }


    for (int i = 1 ; i <= 10; i++)
    {
        for(int j = 1 ; j <= 10 ; j++)
        {
            cout <<" * "<<endl;
        }

        cout << "\n";
    }

    return 0 ;
}