#include<iostream>
using namespace std;
// Write a program using array and function  To do The follwing;
/*
    Plase Enter The Garde 1;
    80
    
    Plase Enter The Garde 2;
    70
    
    Plase Enter The Garde 3;
    60

*/
void  ReadGrades(float grades[3]){


    cout<<"Plase Enter The Grade 1 : "<<endl;
    cin>>grades[0];
    
    cout<<"Plase Enter The Grade 2 : "<<endl;
    cin>>grades[1];
    
    cout<<"Plase Enter The Grade 3 : "<<endl;
    cin>>grades[2];

}

float AvergeOfGrades(float grades[3]){

    float Averge ;
     return Averge = (grades[0]+ grades[1]+ grades[2]) /3;
}



















int main(){

    float grades[3];

    ReadGrades(grades);

    cout << "The Averge of Grades = " << AvergeOfGrades(grades) <<endl;

    return 0;
}