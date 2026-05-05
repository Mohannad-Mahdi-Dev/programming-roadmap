/*
    1- What is Variables ? 
       are contianers for storing data value 
*************************************************
    2- Data Types in C++ ?
         Different types of variables (defined with different keywords):  
----------------------------------------
        1- Fundamentals:
                -Integral Type:  int  Whole Number: 712
                                char Single Charactor: 'A'
                -Floating Type:  float Floating Point: 14.5
                                 double Floating Point: 14.5
                -Boolean Type:   bool True Or False
                -String type:    string Text: "Mohannad"
                -Void Type :     void Empty 
                -Wide Character: wchar_t Unicode
--------------------------------------
        2- Derived :
                -Function
                -Array
                -Pointer
                -Reference
--------------------------------------
        3- User-Defined : 
                -Class 
                -Structure
                -Union
                -Enum
                -type Def
-------------------------------------
        Wide Character wchar_t Unicode 
        اشرح : عندما نريد أن نكتب با اللغة العربية نحن نحتاج الى نظام يعرف هذي اللغة فالذالك نحن نستخدم هذي الكلمة المفتاحية 
        Askicode :
        الشرح : نحن نستخدم هذي الكلمة المفتاحية عندما أريد أن أكتب باللغة الانجليزية فقط فهو معرف فريد عن بقيت اللغات التي تستخدم نظام ال unicode.
        ----------------------------------------------------------------------------------------------------------------------------
        
*/
///////////////////////////////////////////////////////////////////////////
// Variables 
//Syntax:
 // type variableName = value;

 // Ex: int MyName = 50;
 // cout << MyName <<endl;
 /*
        int MyAge = 60; // MyNumber is 60
        cout << MyAge <<endl; // print 60

        MyAge = 30; // Now myNumber is 30; new update the value The variable in memory 
        cout << "I am " << MyAge << "years old."; // Output: I am 30 years old.
 */
///////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
//Note: the variable in C++ are  Case Sencetef.

int main(){

        // Integer (whole number without decimals)
        int MyNumber = 30;
        cout << MyNumber << endl;

        MyNumber = 20;
        cout << "My Age Is "<< MyNumber << "Years old."<<endl;
//---------------------------------------------------------    
        // floating Point number (with decimals)
        float myFloutNumber = 50.5;
        cout << myFloutNumber << endl;

        myFloutNumber = 30.3;
        cout << "floating point  Is "<< myFloutNumber << "."<<endl;

//---------------------------------------------------------
        // Large floating point number.
        double myDoubleNumber = 50.5;
        cout << myDoubleNumber << endl;

        myDoubleNumber = 30;
        cout << "floating point Is "<< myDoubleNumber << "."<<endl;
//---------------------------------------------------------
        // Character (char).
//---------------------------------------------------------
        // Character.
        char MyLetter = 'A';
        cout << MyLetter << endl; // print A

        MyLetter = 'M';
        cout << "My character Is "<< MyLetter << "."<<endl; // print My character Is M.
//---------------------------------------------------------
        // String (Text).
//---------------------------------------------------------
        // String (Text).
        string MyText = "Mohannad Mahdi";
        cout << MyText << endl;

        MyText = 30;
        cout << "My Name Is "<< MyText << "Programmer."<<endl; // print My Name Is Mohannad mahdi Programmer.
//---------------------------------------------------------
        // Boolean (true or false).
//---------------------------------------------------------
// Boolean 
        bool myBoolean = (( 5>6 and not(7<=8)) and ( 8>1 or 4<=3)) or true  ; 
        cout << myBoolean << endl; // true = 1.  

        myBoolean = (( 5>6 and 7<=8) or ( 8>1 and 4<=3 )) and true;
        cout << "Number Is : "<< myBoolean << "."<<endl; // false = 0.
//---------------------------------------------------------

// Declare Many Variables

        // int x = 10;
        // int y = 10;
        // int sum = x + y ;
        // cout << "The Sum Is : " << sum << endl; // print sum = 20
/*
        int x = 20 , y = 10 , sum = y + x ;
        cout << sum <<endl ; // Output: 30

        int z = 10 ;
        int u = 10 ;
        cout << x + u << endl ; // Output : 20 why is an the x = 20 .
*/
        char char1 = 'A' , char2 = 'B' , char3 = 'C';
        cout << char1 << char3 << char2 << " reversed is " << char2 << char3 << char1 << endl ;
        
        //int---type name---Identifiers mohannad---value Or literal_constant 
        string name = "mohannad";

        //Example  Use descriptive names:
        // Good 
        int MinutesPerHour = 60;
        // Ok, but not so easy to understand what m actually is  
        int m = 60;
 // The ganeral rules For Naming Variables are :
// Let's Code...
// Error
        // int age = 10 , Age = 50;
        // int My age;
        // int My _ Age ;
        // string 5Name;
        // string @name;
        // string Amount#;
        // string sale&;
        // string sales & Amount;
        // int for;
        // int string;
        // int _Age;

// Constants
         const string myName = "mohannad"; 
        // myName = "Omar"; //error: assignment of read-only variable 'myNum'
         cout << myName << "\n";
// let's Code...
        const int minutesPerHour= 20;
       // minutesPerHour = 10; error
        cout << minutesPerHour <<endl;
        return 0;        
}