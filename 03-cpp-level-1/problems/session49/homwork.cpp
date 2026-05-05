#include<iostream>
using namespace std;


int main(){

// 1
    for (int i = 65 ; i <= 90 ; i++ ){
        
        cout << " Letter: " << char(i) <<endl;

        for(int j = 65 ; j <= 90; j++){
           
            cout << char(i) << char(j) << "\n";
        }

        cout << "--------------------------------\n";
        
    }

// 2

      

            for(int i = 10 ; i >= 1; i-- ){
            
                for( int lenth = 1; lenth <= i; lenth++ ){

                cout << "*";   
            }
        cout << "\n";
        }
// 3

    for (int i = 10 ; i >= 1 ; i--){

        
        for(int z = 1 ; z <= i ; z++ ){

            cout << z << " ";
        }
        cout << "\n";
    }
// 4

        for( int a = 1 ; a <= 10; a++){

            for(int b = 1; b <= a ; b++){

                cout << b << " " ; 
            }
            cout << "\n";
        }
// 5

    for ( int p = 65 ; p <= 71 ; p++){

        for ( int b = 65 ; b <= p ; b++){
            
            cout << char(b) << "  "; 
        }
        cout << "\n";
    }

    // return 0;
// 6

        // for( int l = 10 ; l >= 1 ; l--){

        // for( int t = 1 ; t <= l; t++){

        //     cout << t - 1 << " ";
        // }

        // cout << "\n";
        // }


        for( int l = 1 ; l <= 10  ; l++){

        for( int t = l  ; t <= 10 ; t++ ){

            cout << t << " ";
        }

        cout << "\n";
        }

        return 0;
}