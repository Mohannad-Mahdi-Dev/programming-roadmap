// For Loop & Arrays
#include<iostream>
using namespace std ;

void ReadArrayData(int Arr1[100] , int &Lenth){

    cout << "How Many Numbers do you want to enter? 1 to 100 ?\n";
    cin >> Lenth;
    
    for(int i = 0 ; i <=Lenth - 1 ; i++)
    {
        cout<< "Plase Enter Number " << i + 1 << "\n" ;
        cin >> Arr1[i] ;
    }
    cout <<"\n";
}

void PrintArrayData(int Arr1[100], int Lenth){
        
    for(int i = 0 ; i <= Lenth - 1 ; i++)
    {    
        cout << " Number ["<< i + 1 <<"] : " << Arr1[i] <<endl;
    }

    cout << " ******************************************\n"<<endl;
}

int ClaculateArraySum(int Arr1[100], int &Lenth){

    int Sum = 0 ;

    for(int i = 1 ; i <= Lenth ; i++){

        Sum += Arr1[i] ;
    }
    
    return Sum; 
}

float CalclatAvergeNumber(int Arr1[100], int Lenth)
{
    return (float)ClaculateArraySum(Arr1 , Lenth) / Lenth ;
}

int main(){

    int Arr1[100], Length = 0;
    
    ReadArrayData(Arr1, Length);
    PrintArrayData(Arr1, Length);

    double Sum = ClaculateArraySum(Arr1 , Length);
    
    cout << "\n*********************************\n"<<endl;
    cout << " Sum Number = " << Sum <<endl;
    cout << " Averge = " << Sum / Length <<endl;
    cout << "\n*********************************\n"<<endl;
    
    return 0;

}