// Data Type Sizes/Ranges?
#include <iostream>
using namespace std;
// Use data types modifiers with the int and double and char ;

/* 
-------------------------------------
    int 
    double 
    char
--------------------------------------
    short int -- 2 Bytes.
    short     -- 2 Bytes. // Unsigned 
    long int  -- 4 Bytes.
    long      -- 4 Bytes. // Unsigned
long long int -- 8 Bytes.
    Long Long -- 8 Bytes. // Unsigned
-----------------------------------------------
// Range & Size
    Type:
        float // 4 Bytes.
        double // 8 Bytes.
        long double  // 16 Bytes.
------------------------------------------------
// Range & Size
    Type :
        char // 1 Byte.
        bool  // 1 Byte.
        string // 12 Bytes.
        void // 0 Byte.
    */
int main(){
// Note By default everthing is signed

    int v1; // signed 4 Bytes.
    signed int v2;  // 4 Bytes.
    unsigned int v3; // 4 Bytes.
    short int v4; // 2 Bytes.
    short v5; // 2 Bytes Unsigned
    unsigned short int v6; // 2 Bytes.
    unsigned short v7; // 2 Bytes.
    signed long int v8; // 4 Bytes.
    long int v9; // 4 Bytes 
    long v10; // 4 Bytes Unsigned
    unsigned long v11; // 4 Bytes
    long long int v12; // 8 Bytes
    unsigned long long v13; // 8 Bytes
    long double v14; // 8 Bytes
    signed char v15; // 
    char v16;
    unsigned char v17;
    long long v18;
    cout <<"The Size Of int data type is : " << sizeof(int) << endl;// 4 Byte
    cout <<"The Size Of signed int data type is : " <<  sizeof(signed int) << endl;// 4 Byte
    cout <<"The Size Of unsigned int data type is : " <<  sizeof(unsigned int) << endl;// 4 Byte
    cout <<"The Size Of short int data type is : " <<  sizeof(short int) << endl;// 2 Byte
    cout <<"The Size Of short data type is : " <<  sizeof(short) << endl;// 2 Byte
    cout <<"The Size Of unsigned int data type is : " <<  sizeof(unsigned int ) << endl;// 4 Byte
    cout <<"The Size Of unsigned short int data type is : " <<  sizeof(unsigned short int ) << endl;// 2 Byte
    cout <<"The Size Of unsigned short data type is : " <<  sizeof(unsigned short ) << endl;// 2 Byte
    cout <<"The Size Of signed long int data type is : " <<  sizeof( long int ) << endl;// 4 Byte
    cout <<"The Size Of long int data type is : " <<  sizeof(long int ) << endl;// 4 Byte
    cout <<"The Size Of long data type is : " <<  sizeof(long) << endl;// 4 Byte
    cout <<"The Size Of unsigned long data type is : " <<  sizeof(unsigned long) << endl;// 4 Byte
    cout <<"The Size Of long double data type is : " <<  sizeof(long double) << endl;// 16 Byte
    cout <<"The Size Of signed char data type is : " <<  sizeof( char) << endl;// 1 Byte
    cout <<"The Size Of char data type is : " <<  sizeof(char) << endl;// 1 Byte
    cout <<"The Size Of unsigned char data type is : " <<  sizeof(unsigned char) << endl; // 1 Byte
    cout <<"The Size Of unsigned long long  data type is : " <<  sizeof(  unsigned long  long ) << endl; // 8  Byte

    //--------------------------------------

    double distance = 56E12; // 56E12 equal to 56*10^12 = 8 Bytes.
    cout << sizeof(distance) <<endl;
    cout << distance <<endl;

    //short d = 3434233; // Error out of range
    //cout << d << endl;

    unsigned int a = -10; // Error but give number error in some compilers.
    cout << a <<endl;

//---------------------------------------------------------------
// Range from to .
    
    cout << "******************************************************"<<endl;
    cout << "char Range: (" << CHAR_MIN << ", " << CHAR_MAX << ")\n"; // (-128, 127)
    cout << "unsigned char Range : (" << 0 <<", " << CHAR_MAX << ")\n"; //  (0, 127)

    cout << "short int  Range: (" << SHRT_MIN << ", " << SHRT_MAX << ")\n"; // (-32768, 32767)
    cout << "unsigned char Range : (" << 0 <<", " << USHRT_MAX << ")\n"; // (0, 65535)

    cout << "int Range : (" << INT_MIN << ", " << INT_MAX<< ")\n"; // (-2147483648, 2147483647)
    cout << "unsigned int Range : (" << 0 << ", " << UINT_MAX << ")\n"; // (0, 4294967295)
    cout << "long int Range : (" << LONG_MIN << ", " << LONG_MAX << ")\n"; // (-2147483648, 2147483647)
    cout << "unsigned long int Range :  (" << 0 << ", " << ULONG_MAX<< ")\n"; // (0, 4294967295)
    
    cout << "long long int Range : (" << LONG_MIN << ", " << LONG_MAX << ")\n"; // (-2147483648, 2147483647)
    cout << "unsigned long long int Range : (" << 0 << ULLONG_MAX << ")\n"; // (018446744073709551615)
    
    cout << "float Range :  (" << __FLT_MIN__ << __FLT_MAX__<< ")\n";// (1.17549e-383.40282e+38)
    cout << "float(negative) Range : (" << -__FLT_MIN__ << -__FLT_MAX__ << ")\n"; // (-1.17549e-38-3.40282e+38)
   
    cout << "double Range :  (" << __DBL_MIN__ << __DBL_MAX__<< ")\n"; //  (2.22507e-3081.79769e+308)
    cout << "double(negative) Range :  (" << -__DBL_MIN__ << -__DBL_MAX__<< ")\n";// (-2.22507e-308-1.79769e+308)
    cout << "long double Range : (" << __LDBL_MIN_10_EXP__ << ", " << __LDBL_MAX_10_EXP__ << ")\n";// (-4931, 4932)
    // etc...

    //-------------------------------------------------------------

}
