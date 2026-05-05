// Write a program to solve the following problems :

/*
    12 >= 12
    12 > 7
    8 < 6
    8 = 8 
   12 <= 12
   7 = 5 

    NOT (12 >= 12 )
    NOT (12 < 7 )
    NOT (8 < 6 )
    NOT (8 = 8 )
    NOT (12 <= 12 )
    NOT (7 = 5 )

    1 AND 1
    True AND O
    O OR 1
    O OR O
    Not O
    Not (1 OR 0)

    (7 = 7) and (7 > 5)
    (7 = 7) and (7 < 5)
    (7 = 7) OR (7 < 5)
    (7 < 7) OR (7 > 5)
    NOT (7 = 7) and (7 > 5)
    (7 = 7) and Not (7 < 5)

*/
#include <iostream>
using namespace std;

int main() {

    
    // 12 > 7
    // 8 < 6
    // 8 = 8 
    // 12 <= 12
    // 7 = 5 
    cout << "----------------------" <<endl;
    cout << (12 >= 12) <<endl;// true = 1
    cout << (8 < 6) <<endl;// false = 0
    cout << (8 == 8) <<endl;// true = 1
    cout << (12 <= 12) <<endl;// true = 1
    cout << (7 == 5) <<endl;// false = 0
    cout << "----------------------" <<endl;
    // NOT (12 >= 12 )
    // NOT (12 < 7 )
    // NOT (8 < 6 )
    // NOT (8 = 8 )
    // NOT (12 <= 12 )
    // NOT (7 = 5 )
    cout << "----------------------" <<endl;
    cout << !(12 >= 12) <<endl;// false = 0
    cout << !(8 < 6) <<endl;// reue = 1
    cout << !(8 == 8) <<endl;// false = 0
    cout << !(12 <= 12) <<endl;// false = 0
    cout << !(7 == 5) <<endl;// true = 1
    cout << "----------------------" <<endl;

    // 1 AND 1
    // True AND O
    // O OR 1
    // O OR O
    // Not O
    // Not (1 OR 0)
    cout << "----------------------" <<endl;
    cout << (1 && 1) << endl ; // true = 1
    cout << (1 && 0) << endl ; // false = 0
    cout << (0 || 1) << endl ; // true = 1
    cout << (0 || 0) << endl ; // false = 0
    cout << !(0) << endl ; // true = 1
    cout << !(1 || 0) << endl ; // false = 0
    cout << "----------------------" <<endl;

    // (7 = 7) and (7 > 5)
    // (7 = 7) and (7 < 5)
    // (7 = 7) OR (7 < 5)
    // (7 < 7) OR (7 > 5)
    // NOT (7 = 7) and (7 > 5)
    // (7 = 7) and Not (7 < 5)
    cout << "----------------------" <<endl;
    cout << ((7 == 7) && (7 > 5)) <<endl; // true = 1
    cout << ((7 == 7) && (7 < 5)) <<endl; // false = 0
    cout << ((7 == 7) || (7 < 5)) <<endl; // true = 1
    cout << ((7 < 7) || (7 > 5)) <<endl; //  true = 1
    cout <<(!(7 == 7) && (7 > 5)) <<endl; // false = 0
    cout << ((7 == 7) && !(7 < 5))<<endl; // true = 1
    cout << "----------------------" <<endl;

//Question 2
    // (5 > 6 and 7=7) OR (1 or 0)
    // NOT(5 > 6 and 7=7) OR (1 or 0)
    // NOT(5 > 6 and 7=7) OR NOT (1 Or 0)
    // NOT(5 > 6 OR 7=7) AND NOT (1 Or 0)
    // ((5 > 6 AND 7 <= 8) OR (8 > 1 and 4 <= 3)) AND True
    // ((5 > 6 AND NOT(7 <= 8)) AND (8 > 1 OR 4 <= 3)) OR True
    cout << "----------------------------" <<endl;

    bool Result1 = ((5 > 6 && 7 == 7) || (1 || 0)) ; 
    cout << Result1 <<endl; // print true = 1
     
    int Result2 = (!(5 > 6 && 7 == 7) || (1 || 0));
    cout << Result2 <<endl; // print true = 1
    
    int Result3 = (!(5 > 6 && 7 == 7) || !(1 || 0)); 
    cout << Result3 <<endl; // print true = 1
    
    int Result4 = (!(5 > 6 || 7 == 7) && !(1 || 0)); 
    cout << Result4 <<endl; // print false = 0

    int Result5 = (((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && 1); 
    cout << Result5 <<endl; // print false = 0
    
    int Result6 = (((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || 1);
    cout<< Result6 <<endl; // print true = 1

    cout << "----------------------------" <<endl;
}