// Do While Loop 
#include<iostream>
using namespace std; 

int ReadIntNumberInRangeUsingWhile(int From , int To )
{
    int Number ; 

    cout << "Plase Enter The Number bettween : " << From << " and " << To <<"\n";
    cin >> Number ; 

    while (Number > From  || Number > To)
    {
        cout << "WronSg Number!\n";
        cout << "Plase Enter The Number bettween : " << From << " and " << To <<"\n";
        cin >> Number ; 
    }

    return Number ;

}

int ReadIntNumberInRangeUsingDoWhile(int From , int To )
{
    int Number ; 

    
    do{
        cout << "Plase Enter The Number bettween : " << From << " and " << To <<"\n";
        cin >> Number ; 

    }while (Number < From || Number > To);

    return Number ;

}

int main(){

    cout << "the number you entered is : " << ReadIntNumberInRangeUsingWhile(10 , 20);
    cout << "the number you entered is : " << ReadIntNumberInRangeUsingDoWhile(18 , 35);

}