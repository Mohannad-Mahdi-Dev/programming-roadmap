//Lesson#18 Inputs: (How to input data?) cin >> ...

#include <iostream>
using namespace std;


int main(){
    char MyChar;
    int myNumber;

    cout << "Please enter a character?" << endl;
    cin >> MyChar ;

    cout << "Please Enter a Number?" << endl;
    cin >> myNumber;

    cout << "You Entered this char: " << MyChar << "  and this Number :" << myNumber <<endl;

    return 0;

    //Let's Code...
// Input
    char mychar;
    int number;
// processing  
    cout << "please Enter a Char:" <<endl;
    cin >> mychar;
    cout << "please Enter a Number:" <<endl;
    cin >> number;
//OutPut Print
    cout <<"your Entered this char: " << mychar << " and this number : " <<number  <<endl;


}
