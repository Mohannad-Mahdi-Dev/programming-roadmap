#include <iostream>
using namespace std;

// Write the program using array  to do the follwing ?
/*
    Plase Enter the Grade1 :
    80
    
    Plase Enter the Grade1 :
    5
    
    Plase Enter the Grade1 :
    15

    The average of grades the = Grades 

*/

int main(){

    float grades[3];

    cout <<"Plase Enter the Grade1 : "<<endl;
    cin >>grades[0];
    
    cout <<"Plase Enter the Grade2 : "<<endl;
    cin >>grades[1];
    
    cout <<"Plase Enter the Grade3 : "<<endl;
    cin >>grades[2];

    int Avg = (grades[0] + grades[1] + grades[2]) / 3 ;

    cout << " The Average of grades = "<< Avg <<endl;
    
}