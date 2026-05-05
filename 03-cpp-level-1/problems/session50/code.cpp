// While Loop
#include<iostream>
using namespace std;

int ReadIntNumber(int From , int To)
{
    int Number ;

    cout << "Plase ENter The Number between :" << From << "and" << To <<endl;
    cin >> Number ;

    while (Number < From || Number > To){
        cout << "Wrong Number! \n";
        cout << "Plase Enter The Number between " << From << " and " << To <<endl;
        cin >> Number ; 
    }

    return Number ;
}


int main(){


    cout << "\nFor Loop!\n";
    // For loop 1 to 5
    for(int i = 1 ; i <= 5 ; i++){
        cout << i <<endl;
    }
    
    cout << "\nWhile Loop!\n"<<endl;
    // while loop 1 to 5
    int x = 1 ; 
    while (x < 5)
    {
        cout << x <<endl;
    x++;}    


    cout << "*****************************\n";

    // int Number ;

    // cout << "Plase Enter a positive number? \n";
    // cin >> Number ; 

    // while (Number < 0)
    // {
    //     cout << "Wrong Number , Plase Enter a Positive Number? \n";
    //     cin >> Number ;
    // }

    // cout << "\n the number you entered is " << Number <<endl;

    cout << "*****************************\n";

    cout <<" \n The Number is : " <<  ReadIntNumber(18 , 35);

    return 0;



}