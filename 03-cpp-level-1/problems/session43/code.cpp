// Else IF ... 
#include<iostream>
using namespace std;

int main(){

    int time = 24;
  
    if(time < 9 )
    {
        cout << "Good morning "<< endl;
    }else if (time < 20 )
    {
        cout << "Good day " <<endl;
    }else 
    {
        cout << " Good evening " <<endl;
    }
    return 0;
}